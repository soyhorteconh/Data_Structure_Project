
#ifndef Bitacora_H
#define Bitacora_H
#include <iostream>
#include <string>

using namespace std;

class Bitacora{

    public:
        string mes, hora, direccionIp, numPuerto, razon;
        int mesNum, dia;

    //public:
        Bitacora(){}
        Bitacora(string mes,int dia,string hora,string direccionIp, string numPuerto, string razon, int mesNum){
            this->mes = mes;
            this->dia = dia;
            this->hora = hora;
            this->direccionIp = direccionIp;
            this->numPuerto = numPuerto;
            this->razon = razon;
            this->mesNum = mesNum;
        }
        ~Bitacora(){}

        //getters
        int getMes(){
            return mesNum;
        }
        int getDia(){
            return dia;
        }
        string getHora(){
            return hora;
        }
        string getDireccionIp(){
            return direccionIp;
        }
        string getNumPuerto(){
            return numPuerto;
        }
        string getRazon(){
            return razon;
        }

        void imprimir(){
            cout << mes << ' ' ;
            cout << dia << ' ' ;
            cout << hora << ' ' ;
            cout << direccionIp << ' ' ;
            cout << numPuerto << ' ' ;
            cout << razon << ' ' ;
            cout << mesNum << endl;
        }

        bool operator <(const Bitacora & m) const{
            return (dia < m.dia);
        }

        int getSemana(){
            //Enero
            if (mesNum == 1){
                // Semana 1 a 5
                int contDay = 5;
                int day = 6;
                if (dia >= 1 and dia <= contDay){
                    return 1;
                }

                for (int i = 2; i <= 5 ; i++){
                    //cout << i << endl;
                    if (dia > contDay and dia < day+7){
                        //cout << i << endl;
                        return i;
                    }
                    day = day + 7;
                }

            }

            //Febrero
            if (mesNum == 2){
                // Semana 1 a 5
                int contDay = 2;
                int day = 3;
                if (dia >= 1 and dia <= contDay){
                    return 5;
                }

                for (int i = 6; i <= 9 ; i++){
                    //cout << i << endl;
                    if (dia > contDay and dia < day+7){
                        //cout << i << endl;
                        return i;
                    }
                    day = day + 7;
                }

            }

            //Marzo
            if (mesNum == 3){
                // Semana 1 a 5
                int contDay = 1;
                int day = 2;
                if (dia >= 1 and dia <= contDay){
                    return 9;
                }
                for (int i = 10; i <= 14 ; i++){
                    //cout << i << endl;
                    if (dia > contDay and dia < day+7){
                        //cout << i << endl;
                        return i;
                    }
                    day = day + 7;
                }

            }

            //Abril
            if (mesNum == 4){
                // Semana 1 a 5
                int contDay = 5;
                int day = 6;
                if (dia >= 1 and dia <= contDay){
                    return 14;
                }
                for (int i = 15; i <= 18 ; i++){
                    //cout << i << endl;
                    if (dia > contDay and dia < day+7){
                        //cout << i << endl;
                        return i;
                    }
                    day = day + 7;
                }

            }

            //Mayo
            if (mesNum == 5){
                // Semana 1 a 5
                int contDay = 3;
                int day = 4;
                if (dia >= 1 and dia <= contDay){
                    return 18;
                }
                for (int i = 19; i <= 22 ; i++){
                    //cout << i << endl;
                    if (dia > contDay and dia < day+7){
                        //cout << i << endl;
                        return i;
                    }
                    day = day + 7;
                }

            }

            //Junio
            if (mesNum == 6){
                // Semana 1 a 5
                int contDay = 0;
                int day = 1;

                for (int i = 23; i <= 27 ; i++){
                    //cout << i << endl;
                    if (dia > contDay and dia < day+7){
                        //cout << i << endl;
                        return i;
                    }
                    day = day + 7;
                }

            }

            //Julio
            if (mesNum == 7){
                // Semana 1 a 5
                int contDay = 5;
                int day = 6;
                if (dia >= 1 and dia <= contDay){
                    return 27;
                }

                for (int i = 28; i <= 31 ; i++){
                    //cout << i << endl;
                    if (dia > contDay and dia < day+7){
                        //cout << i << endl;
                        return i;
                    }
                    day = day + 7;
                }

            }

            //Agosto
            if (mesNum == 8){
                // Semana 1 a 5
                int contDay = 2;
                int day = 3;
                if (dia >= 1 and dia <= contDay){
                    return 31;
                }

                for (int i = 32; i <= 36 ; i++){
                    //cout << i << endl;
                    if (dia > contDay and dia < day+7){
                        //cout << i << endl;
                        return i;
                    }
                    day = day + 7;
                }

            }

            //Septiembre
            if (mesNum == 9){
                // Semana 1 a 5
                int contDay = 6;
                int day = 7;
                if (dia >= 1 and dia <= contDay){
                    return 36;
                }

                for (int i = 37; i <= 40 ; i++){
                    //cout << i << endl;
                    if (dia > contDay and dia < day+7){
                        //cout << i << endl;
                        return i;
                    }
                    day = day + 7;
                }

            }

            //Octubre
            if (mesNum == 10){
                // Semana 1 a 5
                int contDay = 4;
                int day = 5;
                if (dia >= 1 and dia <= contDay){
                    return 40;
                }

                for (int i = 41; i <= 44 ; i++){
                    //cout << i << endl;
                    if (dia > contDay and dia < day+7){
                        //cout << i << endl;
                        return i;
                    }
                    day = day + 7;
                }

            }

            //Noviembre
             if (mesNum == 11){
                // Semana 1 a 5
                int contDay = 1;
                int day = 2;
                if (dia >= 1 and dia <= contDay){
                    return 44;
                }
                for (int i = 45; i <= 49 ; i++){
                    //cout << i << endl;
                    if (dia > contDay and dia < day+7){
                        //cout << i << endl;
                        return i;
                    }
                    day = day + 7;
                }

            }

            //Diciembre
             if (mesNum == 12){
                // Semana 1 a 5
                int contDay = 6;
                int day = 7;
                if (dia >= 1 and dia <= contDay){
                    return 49;
                }
                for (int i = 50; i <= 53 ; i++){
                    //cout << i << endl;
                    if (dia > contDay and dia < day+7){
                        //cout << i << endl;
                        return i;
                    }
                    day = day + 7;
                }

            }
        }


};

#endif