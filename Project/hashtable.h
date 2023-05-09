/*----------------------------------------------------------
 * Práctica #5: Tablas hash
 * Implementación de la clase HashTable.
 *
 * Fecha: 15-Oct-2021
 * Autores:
 *           A01750150 Hortencia Alejandra Ramírez Vázquez
 *           A01745037 Gala Flores García
 *----------------------------------------------------------*/

#pragma once
#include <algorithm>
#include <stdexcept>
#include <vector>

template<typename K, typename T>
class HashTable{

public:

    //constructor de copiado
    HashTable(const HashTable<K, T>&) = delete;
    HashTable<K, T>& operator=(const HashTable<K, T>&) = delete;

    // Complejidad: O(B)
    HashTable(int num_buckets)
    {
        _bucket = new Pair*[num_buckets];
        _num_buckets = num_buckets;
        _size = 0;
        // creación de los centinelas
        for(int i = 0; i < _num_buckets; ++i){
            _bucket[i] = new Pair;
        }
    }

    // //Complejidad: O(B)
    ~HashTable()
    {
        clear();
        for(int i = 0; i < _num_buckets; ++i){
            delete _bucket[i];
        }
        delete []_bucket;
    }

    // Complejidad: O(N / B)
    bool put(K key, T value)
    {
        int hash = _hash(key);
        Pair *p = _bucket[hash] -> next;
        while (p != nullptr) {
            if (key == p -> key){
                p -> value = value;
                return false;
            }
            p = p -> next;
        }
        Pair *new_pair = new Pair;
        new_pair -> key = key;
        new_pair -> value = value;
        new_pair -> next = _bucket[hash] -> next;
        _bucket[hash] -> next = new_pair;
        ++_size;
        return true;
    }

    // Complejidad: O(1)
    int size() const
    {
        return _size;
    }

    // Complejidad: O(1)
    bool is_empty() const
    {
        if (_size == 0){
            return true;
        }
        else{
            return false;
        }
    }

    // Complejidad: O(N / B)
    bool contains_key(K key) const
    {
        int hash = _hash(key);
        Pair *p = _bucket[hash] -> next;
        while (p != nullptr) {
            if (key == p -> key){
                return true;
            }
            p = p -> next;
        }
        return false;
    }

    // Complejidad: O(N / B)
    T get(K key) const
    {
        int hash = _hash(key);
        Pair *p = _bucket[hash] -> next;
        while (p != nullptr) {
            if (key == p -> key){
                return p->value;
            }
            p = p -> next;
        }
        throw std::invalid_argument("key not found");
    }

    // Complejidad: O(N / B)
    T get_or_default(K key, T default_value) const
    {
        int hash = _hash(key);
        Pair *p = _bucket[hash] -> next;
        while (p != nullptr) {
            if (key == p -> key){
                return p->value;
            }
            p = p -> next;
        }
        return default_value;
    }

    // Complejidad: O(N log N)
    bool remove(K key)
    {
        int hash = _hash(key);
        Pair *p = _bucket[hash] -> next;
        Pair *prev = _bucket[hash];
        while (p != nullptr) {
            if (key == p -> key){
                prev -> next = p -> next;
                delete p;
                p = nullptr;
                --_size;
                return true;
            }
            p = p -> next;
            prev = prev -> next;
        }
        return false;
    }

    //Complejidad: O(N)
    void clear(){
        if (_size != 0) {
            for(int i = 0; i < _num_buckets; ++i){
                Pair *temporal = _bucket[i] -> next;
                while (temporal != nullptr){
                     Pair *p = temporal -> next;
                     delete temporal;
                     --_size;
                     temporal = p;
                }
            }
        }
    }

    //Complejidad: O(N)
    bool operator==(const HashTable<K, T>&other) const
    {
        int cont = 0;
        if (_size == other._size){
            for(int i = 0; i < _num_buckets; ++i){
                Pair *temporal = _bucket[i] -> next;
                while (temporal != nullptr){
                    if (other.contains_key(temporal->key)){
                        T valor = other.get(temporal->key);
                        if (temporal -> value == valor){
                            ++cont;
                        }
                    }
                    temporal = temporal -> next;
                }
            }
        }

        if (cont == _size){
            return true;
        }
        return false;

    }

    //Complejidad: O(N)
    std::vector<K> keys() const
    {
        std::vector<K> llaves;
        for(int i = 0; i < _num_buckets; ++i){
            Pair *temporal = _bucket[i] -> next;
            while (temporal != nullptr){
                 llaves.push_back(temporal -> key);
                 temporal = temporal -> next;
            }
        }
        std::sort(llaves.begin(), llaves.end());
        return llaves;
    }

    //Complejidad: O(N)
    void put_all(const HashTable<K, T>&other)
    {
        for(int i = 0; i < other._num_buckets; ++i){
            Pair *temporal = other._bucket[i] -> next;
            while (temporal != nullptr){
                put(temporal->key, temporal -> value);
                temporal = temporal -> next;
            }
        }
    }


private:

    struct Pair { //Pareja de una key asociada a cierto valor
        K key {};
        T value {};
        Pair *next { nullptr }; // apuntador a un objeto de ese mismo
    };

    std::size_t _hash(K key) const
    {
        std::hash<K> h;
        return h(key) % _num_buckets;
    }

    //bucket -> apuntador de apuntadores
    Pair **_bucket;
    int _num_buckets;
    int _size;
};
