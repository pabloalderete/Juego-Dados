#include <iostream>
#include<cstdlib>
#include <ctime>
#include "Funciones.h"
#include "rlutil.h"


using namespace std;

int main(){

    int opciones;
    bool fin=false;

    menu();

    rlutil::locate(48,12);
    cout << "- INGRESE OPCION -"<< endl;

    rlutil::locate(56,13);
    cin >> opciones;


 while(fin==false){


    if(opciones!=1&&opciones!=2&&opciones!=3&&opciones!=4&&opciones!=0){

        rlutil::locate(48,15);
        cout << "Caracter Invalido..."<<endl;

        rlutil::locate(36,17);
        system("pause");
    }

         rlutil::cls();


    switch (opciones){
    case 1:


        f_jugadores(1,false);

        break;
    case 2:
        /*int cantidad;
        cout << "Ingrese cantidad de jugadores: ";
        cin>>cantidad;
        cout << endl;
        f_jugadores(cantidad);*/

        f_jugadores(2,false);
        break;
    case 3:
        mejorjugador();
        system("pause");
        rlutil::cls();
        break;
    case 4:
        f_jugadores(1,true);
        break;
    case 0:
        fin==true;

        rlutil::locate(40,2);
        cout << "GRACIAS POR JUGAR! "<<endl;

        rlutil::locate(46,3);
        cout << (char)30;

        rlutil::locate(50,3);
        cout << (char)30;

        rlutil::locate(45,4);
        cout << (char)192;

        rlutil::locate(46,4);
        for(int i=1;i<6;i++){
        cout << (char)196;
        }

        rlutil::locate(51,4);
        cout << (char)217 << endl;

        return 0;
        break;
    default:
        break;
    }

    rlutil::cls();

    menu();

    rlutil::locate(48,12);
    cout << "- INGRESE OPCION -"<< endl;

    rlutil::locate(56,13);
    cin >> opciones;

}

}
