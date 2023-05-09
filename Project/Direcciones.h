#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <fstream>

using namespace std;

class Direcciones{

    public:
        string direccionIp;
        int contador;

        Direcciones(string direccionIp, int contador){
            this->contador = contador;
            this->direccionIp = direccionIp;

        }
        ~Direcciones(){}

        //getters
        string getDireccionIp(){
            return direccionIp;
        }

        int getContador(){
            return contador;
        }
        void impresiones(){
            cout << direccionIp << ' ' ;
            cout << contador << endl;
        }

        bool operator >(const Direcciones & d) const{
            return (contador > d.contador);
        }

};
