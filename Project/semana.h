//Lectura de archivo

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <fstream>

using namespace std;

void nombreSemana (int semana){

            //Enero
    if (semana  == 1){
        cout << "Semana del 1-5 de enero de 2020" << endl;
    } else if (semana  == 2){
        cout << "Semana del 6-12 de enero de 2020" << endl;
    } else if (semana  == 3){
        cout << "Semana del 13-19 de enero de 2020" << endl;
    } else if (semana  == 4){
        cout << "Semana del 20-26 de enero de 2020" << endl;
    } else if (semana  == 5){
        cout << "Semana del 27 de enero al 2 de febrero de 2020" << endl;
    } else if (semana  == 6){
        cout << "Semana del 3-9 de febrero de 2020" << endl;
    } else if (semana  == 7){
        cout << "Semana del 10-16 de febrero de 2020" << endl;
    } else if (semana  == 8){
        cout << "Semana del 17-23 de febrero de 2020" << endl;
    } else if (semana  == 9){
        cout << "Semana del 24 de febrero al 1 de marzo de 2020" << endl;
    } else if (semana  == 10){
        cout << "Semana del 2-8 de marzo de 2020" << endl;
    } else if (semana  == 11){
        cout << "Semana del 9-15 de marzo de 2020" << endl;
    } else if (semana  == 12){
        cout << "Semana del 16-22 de marzo de 2020" << endl;
    } else if (semana  == 13){
        cout << "Semana del 23-29 de marzo de 2020" << endl;
    } else if (semana  == 14){
        cout << "Semana del 30 de marzo al 5 de abril de 2020" << endl;
    } else if (semana  == 15){
        cout << "Semana del 6-12 de abril de 2020" << endl;
    } else if (semana  == 16){
        cout << "Semana del 13-19 de abril de 2020" << endl;
    } else if (semana  == 17){
        cout << "Semana del 20-26 de abril de 2020" << endl;
    } else if (semana  == 18){
        cout << "Semana del 27 de abril al 3 de mayo de 2020" << endl;
    } else if (semana  == 19){
        cout << "Semana del 4-10 de mayo de 2020" << endl;
    } else if (semana  == 20){
        cout << "Semana del 11-17 de mayo de 2020" << endl;
    } else if (semana  == 21){
        cout << "Semana del 18-24 de mayo de 2020" << endl;
    } else if (semana  == 22){
        cout << "Semana del 25-31 de mayo de 2020" << endl;
    } else if (semana  == 23){
        cout << "Semana del 1-7 de junio de 2020" << endl;
    } else if (semana  == 24){
        cout << "Semana del 8-14 de junio de 2020" << endl;
    } else if (semana  == 25){
        cout << "Semana del 15-21 de junio de 2020" << endl;
    } else if (semana  == 26){
        cout << "Semana del 22-28 de junio de 2020" << endl;
    } else if (semana  == 27){
        cout << "Semana del 29 de junio al 5 de julio de 2020" << endl;
    } else if (semana  == 28){
        cout << "Semana del 6-12 de julio de 2020" << endl;
    } else if (semana  == 29){
        cout << "Semana del 13-19 de julio de 2020" << endl;
    } else if (semana  == 30){
        cout << "Semana del 20-26 de julio de 2020" << endl;
    } else if (semana  == 31){
        cout << "Semana del 27 de julio al 2 de agosto de 2020" << endl;
    } else if (semana  == 32){
        cout << "Semana del 3-9 de agosto de 2020" << endl;
    } else if (semana  == 33){
        cout << "Semana del 10-16 de agosto de 2020" << endl;
    } else if (semana  == 34){
        cout << "Semana del 17-23 de agosto de 2020" << endl;
    } else if (semana  == 35){
        cout << "Semana del 24-30 de agosto de 2020" << endl;
    } else if (semana  == 36){
        cout << "Semana del 31 de agosto al 6 de septiembre de 2020" << endl;
    } else if (semana  == 37){
        cout << "Semana del 7-13 de septiembre de 2020" << endl;
    } else if (semana  == 38){
        cout << "Semana del 14-20 de septiembre de 2020" << endl;
    } else if (semana  == 39){
        cout << "Semana del 21-27 de septiembre de 2020" << endl;
    } else if (semana  == 40){
        cout << "Semana del 28 de septiembre al 4 de octubre de 2020" << endl;
    } else if (semana  == 41){
        cout << "Semana del 5-11 de octubre de 2020" << endl;
    } else if (semana  == 42){
        cout << "Semana del 12-18 de octubre de 2020" << endl;
    } else if (semana  == 43){
        cout << "Semana del 19-25 de octubre de 2020" << endl;
    } else if (semana  == 44){
        cout << "Semana del 26 de octubre al 1 de noviembre de 2020" << endl;
    } else if (semana  == 45){
        cout << "Semana del 2-8 de noviembre de 2020" << endl;
    } else if (semana  == 46){
        cout << "Semana del 9-15 de noviembre de 2020" << endl;
    } else if (semana  == 47){
        cout << "Semana del 16-22 de noviembre de 2020" << endl;
    } else if (semana  == 48){
        cout << "Semana del 23-29 de noviembre de 2020" << endl;
    } else if (semana  == 49){
        cout << "Semana del 30 de noviembre a 6 de diciembre de 2020" << endl;
    } else if (semana  == 50){
        cout << "Semana del 7-13 de diciembre de 2020" << endl;
    } else if (semana  == 51){
        cout << "Semana del 14-20 de diciembre de 2020" << endl;
    } else if (semana  == 52){
        cout << "Semana del 21-27 de diciembre de 2020" << endl;
    } else if (semana  == 53){
        cout << "Semana del 28 de diciembre 2020 al 3 de enero de 2020" << endl;
    }

}