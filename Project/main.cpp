/*----------------------------------------------------------
 * Proyecto Integrador: El ataque de los Bots
 *
 * Autores:
 *           A01750150 Hortencia Alejandra Ramírez Vázquez
 *           A01745037 Gala Flores García
 *----------------------------------------------------------*/

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <fstream>
#include <algorithm>
#include "Bitacora.h"
#include "Direcciones.h"
#include "hashtable.h"
#include "semana.h"

using namespace std;

int main(int argc, char* argv[]){

    if (argc != 2) {
        cerr << "Error: Se espera el nombre del archivo de entrada.\n";
        exit(1);
    }

    string archivo = argv[1];

    string nombreArch = archivo;

    ifstream ip(nombreArch);

    if(!ip.is_open()) std::cerr << "Error abriendo el archivo" << '\n';

    string mes;
    string dia;
    string hora;
    string direccionIp;
    string numPuerto;
    string razon;

    vector <string> mes_;
    vector <int> mesNum_;
    vector <int> dia_;
    vector <string> hora_;
    vector <string> direccionIp_;
    vector <string> numPuerto_;
    vector <string> razon_;

    while(ip.good()){
        getline(ip, mes,' ');
        getline(ip, dia,' ');
        getline(ip, hora,' ');
        getline(ip, direccionIp,':');
        getline(ip, numPuerto,' ');
        getline(ip, razon,'\n');

        int mesNum = 0;

        int diaNum = atoi(dia.c_str());

        if (mes == "Jan"){
            mesNum = 1;
        } else if (mes == "Feb"){
            mesNum = 2;
        } else if (mes == "Mar"){
            mesNum = 3;
        } else if (mes == "Apr"){
            mesNum = 4;
        } else if (mes == "May"){
            mesNum = 5;
        } else if (mes == "Jun"){
            mesNum = 6;
        } else if (mes == "Jul"){
            mesNum = 7;
        } else if (mes == "Aug"){
            mesNum = 8;
        } else if (mes == "Sep"){
            mesNum = 9;
        } else if (mes == "Oct"){
            mesNum = 10;
        } else if (mes == "Nov"){
            mesNum = 11;
        } else if (mes == "Dec"){
            mesNum = 12;
        }

        //Guardando los datos en vectores
        mes_.push_back(mes);
        dia_.push_back(diaNum);
        hora_.push_back(hora);
        direccionIp_.push_back(direccionIp);
        numPuerto_.push_back(numPuerto);
        razon_.push_back(razon);
        mesNum_.push_back(mesNum);

     }

    ip.close();

    cout << "\nloading...\n" << endl;

    int n = mes_.size();
    //creando un vector de bitacoras
    vector <Bitacora> bitacoras;

    // Tipos de accesos ilegales
    //Failed password for illegal user guest
    //Failed password for admin
    //Failed password for illegal user root
    //Illegal user

    vector <Bitacora> bitacorasGuest;
    vector <Bitacora> bitacorasAdmin;
    vector <Bitacora> bitacorasRoot;
    vector <Bitacora> bitacorasUser;

    // Bitacoras por mes
    vector <Bitacora> bitacorasJan;
    vector <Bitacora> bitacorasFeb;
    vector <Bitacora> bitacorasMar;
    vector <Bitacora> bitacorasApr;
    vector <Bitacora> bitacorasMay;
    vector <Bitacora> bitacorasJun;
    vector <Bitacora> bitacorasJul;
    vector <Bitacora> bitacorasAug;
    vector <Bitacora> bitacorasSep;
    vector <Bitacora> bitacorasOct;
    vector <Bitacora> bitacorasNov;
    vector <Bitacora> bitacorasDic;

    //Creando cada una de las bitacoras y asignando en el vector bitacoras
    for (int i = 0; i < n ; i++){

        Bitacora B(mes_[i],dia_[i],hora_[i],direccionIp_[i],numPuerto_[i],razon_[i], mesNum_[i]);
        //B.imprimir();

        bitacoras.push_back(B);

        if (B.getRazon() == "Failed password for illegal user guest"){
            bitacorasGuest.push_back(B);
        } else if (B.getRazon() == "Failed password for admin"){
            bitacorasAdmin.push_back(B);
        } else if (B.getRazon() == "Failed password for illegal user root"){
            bitacorasRoot.push_back(B);
        } else if (B.getRazon() == "Illegal user"){
            bitacorasUser.push_back(B);
        }

        if (B.getMes() == 1){
            bitacorasJan.push_back(B);
        } else if (B.getMes() == 2){
            bitacorasFeb.push_back(B);
        } else if (B.getMes() == 3){
            bitacorasMar.push_back(B);
        } else if (B.getMes() == 4){
            bitacorasApr.push_back(B);
        } else if (B.getMes() == 5){
            bitacorasMay.push_back(B);
        } else if (B.getMes() == 6){
            bitacorasJun.push_back(B);
        } else if (B.getMes() == 7){
            bitacorasJul.push_back(B);
        } else if (B.getMes() == 8){
            bitacorasAug.push_back(B);
        } else if (B.getMes() == 9){
            bitacorasSep.push_back(B);
        } else if (B.getMes() == 10){
            bitacorasOct.push_back(B);
        } else if (B.getMes() == 11){
            bitacorasNov.push_back(B);
        } else if (B.getMes() == 12){
            bitacorasDic.push_back(B);
        }

    }

    //Ordenando por día en cada mes

    sort(bitacorasJan.begin(), bitacorasJan.end());
    sort(bitacorasFeb.begin(), bitacorasFeb.end());
    sort(bitacorasMar.begin(), bitacorasMar.end());
    sort(bitacorasApr.begin(), bitacorasApr.end());
    sort(bitacorasMay.begin(), bitacorasMay.end());
    sort(bitacorasJun.begin(), bitacorasJun.end());
    sort(bitacorasJul.begin(), bitacorasJul.end());
    sort(bitacorasAug.begin(), bitacorasAug.end());
    sort(bitacorasSep.begin(), bitacorasSep.end());
    sort(bitacorasOct.begin(), bitacorasOct.end());
    sort(bitacorasNov.begin(), bitacorasNov.end());
    sort(bitacorasDic.begin(), bitacorasDic.end());

    int ene = bitacorasJan.size();
    int feb = bitacorasFeb.size();
    int mar = bitacorasMar.size();
    int abr = bitacorasApr.size();
    int may = bitacorasMay.size();
    int jun = bitacorasJun.size();
    int jul = bitacorasJul.size();
    int aug = bitacorasAug.size();
    int sep = bitacorasSep.size();
    int oct = bitacorasOct.size();
    int nov = bitacorasNov.size();
    int dic = bitacorasDic.size();

    vector <int> semanaFinal;

    //Muestra bitacoras por orden de mes y dia
    //Obteniendo semana de cada bitacora
    for (int i = 0; i < ene ; i++){
        // bitacorasJan[i].imprimir();
        // cout << bitacorasJan[i].getSemana() << endl;
        int q = bitacorasJan[i].getSemana();
        semanaFinal.push_back(q);
    }
    for (int i = 0; i < feb ; i++){
        // bitacorasFeb[i].imprimir();
        // cout << bitacorasFeb[i].getSemana() << endl;
        int q = bitacorasFeb[i].getSemana();
        semanaFinal.push_back(q);
    }
    for (int i = 0; i < mar ; i++){
        // bitacorasMar[i].imprimir();
        // cout << bitacorasMar[i].getSemana() << endl;
        int q = bitacorasMar[i].getSemana();
        semanaFinal.push_back(q);
    }
    for (int i = 0; i < abr ; i++){
        // bitacorasApr[i].imprimir();
        // cout << bitacorasApr[i].getSemana() << endl;
        int q = bitacorasApr[i].getSemana();
        semanaFinal.push_back(q);
    }
    for (int i = 0; i < may ; i++){
        // bitacorasMay[i].imprimir();
        // cout << bitacorasMay[i].getSemana() << endl;
        int q = bitacorasMay[i].getSemana();
        semanaFinal.push_back(q);
    }
    for (int i = 0; i < jun ; i++){
        // bitacorasJun[i].imprimir();
        // cout << bitacorasJun[i].getSemana() << endl;
        int q = bitacorasJun[i].getSemana();
        semanaFinal.push_back(q);
    }
    for (int i = 0; i < jul ; i++){
        // bitacorasJul[i].imprimir();
        // cout << bitacorasJul[i].getSemana() << endl;
        int q = bitacorasJul[i].getSemana();
        semanaFinal.push_back(q);
    }
    for (int i = 0; i < aug ; i++){
        // bitacorasAug[i].imprimir();
        // cout << bitacorasAug[i].getSemana() << endl;
        int q = bitacorasAug[i].getSemana();
        semanaFinal.push_back(q);
    }
    for (int i = 0; i < sep ; i++){
        //  bitacorasSep[i].imprimir();
        //  cout << bitacorasSep[i].getSemana() << endl;
        int q = bitacorasSep[i].getSemana();
        semanaFinal.push_back(q);
    }
    for (int i = 0; i < oct ; i++){
        //  bitacorasOct[i].imprimir();
        //  cout << bitacorasOct[i].getSemana() << endl;
        int q = bitacorasOct[i].getSemana();
        semanaFinal.push_back(q);
    }
    for (int i = 0; i < nov ; i++){
        //  bitacorasNov[i].imprimir();
        //  cout << bitacorasNov[i].getSemana() << endl;
        int q = bitacorasNov[i].getSemana();
        semanaFinal.push_back(q);
    }
    for (int i = 0; i < dic ; i++){
        //  bitacorasDic[i].imprimir();
        //  cout << bitacorasDic[i].getSemana() << endl;
        int q = bitacorasDic[i].getSemana();
        semanaFinal.push_back(q);
    }

    sort(semanaFinal.begin(), semanaFinal.end());


    //1. Cinco direcciones IP (sin el importar el número de puerto) que tuvieron más accesos ilegales

    HashTable<string, int> direcciones(n);
    int value = 1;

    vector <string> direccionesVec;

    for (int i = 0; i < n; i++){
        string IP = bitacoras[i].getDireccionIp();
        if (direcciones.contains_key(IP)){
            int valor = direcciones.get(IP) + value;
            direcciones.put(IP, valor);
        } else {
            direcciones.put(IP, value);
            direccionesVec.push_back(IP);
        }
    }
    int nDirec = direccionesVec.size(); //numero de direcciones totales
    //cout << nDirec << endl;

    vector <Direcciones> direccionesCont;

    for (int i = 0; i < nDirec; i++){
        int valorD = direcciones.get(direccionesVec[i]);

        Direcciones D (direccionesVec[i], valorD);
        direccionesCont.push_back(D);
    }

    sort(direccionesCont.begin(),direccionesCont.end(), greater<Direcciones>());

    // for (int i = 0; i < direccionesCont.size(); i++){
    //   direccionesCont[i].impresiones();

    // }


    //2. Frecuencia en la que aparecen cada uno de los mensajes de error
    int nGuest = bitacorasGuest.size();
    int nAdmin = bitacorasAdmin.size();
    int nRoot = bitacorasRoot.size();
    int nUser = bitacorasUser.size();

    //3. Números de puertos distintos fueron atacados en total

    vector <string> puertos;

    string puerto = bitacoras[0].getNumPuerto();
    int psize = puertos.size();
    puertos.push_back(puerto);

    for (int i = 0; i < n ; i++){
        int cont = 0;
        string puerto = bitacoras[i].getNumPuerto();
        int psize = puertos.size();

        for (int j = 0 ; j < psize ; j++){
            if (puertos[j] == puerto){
                cont = cont + 1;
            }
        }

        if (cont == 0){
            puertos.push_back(puerto);
        }

    }

    int nsize = puertos.size();

    //4. Semana en la que se detectaron una mayor cantidad de accesos ilegales

    int p = semanaFinal.size();
    vector <int> semanasExis;

    HashTable<int, int> semanasRep(p);
    int value1 = 1;

    for (int i = 0; i < p; i++){
        int sem = semanaFinal[i];

        if (semanasRep.contains_key(sem)){
            int valor1 = semanasRep.get(sem) + value1;
            semanasRep.put(sem, valor1);
        } else {
            semanasRep.put(sem, value1);
            semanasExis.push_back(sem);
        }
    }

    int semanaMayor = semanasExis[0];

    for (int j = 1; j < semanasExis.size() ; j++){

        int valor = semanasRep.get(semanasExis[j]);

        // cinco direcciones guardadas en vectores
        int valor1 = semanasRep.get(semanaMayor);

        //checando las 5 direcciones ip con más accesos ilegales
        if (valor > valor1){
            semanaMayor = semanasExis[j];
        }
    }




    //Muestra análisis del archivo
    cout << "**************************************************************** " << endl;
    cout << "1) LAS CINCO DIRECCIONES IP CON MÁS ACCESOS ILEGALES " << endl;
    for (int i = 0; i <= 4 ; i++){
         cout << direccionesCont[i].getDireccionIp() << " con " << direccionesCont[i].getContador() << " accesos ilegales" << endl;
    }
    cout << "**************************************************************** " << endl;
    cout << "2) FRECUENCIA DE LOS DISTINTOS MENSAJES DE ERROR " << endl;
    cout << "Failed password for illegal user guest: " << nGuest << endl;
    cout << "Failed password for admin: " << nAdmin << endl;
    cout << "Failed password for illegal user root: " << nRoot << endl;
    cout << "Illegal user: " << nUser << endl;
    cout << "**************************************************************** " << endl;
    cout << "3) NUMERO DE PUERTOS DISTINTOS ATACADOS EN TOTAL: "<< nsize << endl;
    cout << "**************************************************************** " << endl;
    cout << "4) SEMANA EN LA QUE SE DETECTARON MAYOR CANTIDAD DE ACCESOS ILEGALES " << endl;
    nombreSemana(semanaMayor);
    cout << "Es la semana "<< semanaMayor << " del año 2020"<< endl;
    cout << '\n' ;




    return 0;

}
