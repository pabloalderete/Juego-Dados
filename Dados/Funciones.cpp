#include<iostream>
#include<cstdlib>
#include <ctime>
#include "Funciones.h"
#include "rlutil.h"


using namespace std;

void dibujarCuadrado(int posx, int posy, int tam) {
	for (int y = 1; y <= tam / 2; y++) {
		for (int x = 1; x <= tam; x++) {
			rlutil::locate(x + posx, y + posy);
			cout << (char)219;
		}
	}
}

void dibujarDado(int posx, int posy, int num, int tam) {
	rlutil::setBackgroundColor(rlutil::BLACK);
	rlutil::setColor(rlutil::LIGHTRED);
	rlutil::saveDefaultColor();

	rlutil::setColor(rlutil::RED);
	dibujarCuadrado(posx, posy, tam);

	rlutil::setBackgroundColor(rlutil::RED);
	rlutil::setColor(rlutil::BLACK);

	switch (num)
	{
	case 1:
		rlutil::locate(posx + tam / 2 + 1, posy + tam / 4 + 1);
		cout << (char)254;
		break;

	case 2:
		rlutil::locate(posx + tam / 4 + 1, posy + tam / 4 / 4 + 1);

		cout << (char)220;


		rlutil::locate(posx + tam - tam / 4, posy + tam / 2 - tam / 4 / 4);

		cout << (char)223;

		break;

	case 3:
		rlutil::locate(posx + tam / 4 + 1, posy + tam / 4 / 4 + 1);

		cout << (char)220;

		rlutil::locate(posx + tam / 2 + 1, posy + tam / 4 + 1);

		cout << (char)254;

		rlutil::locate(posx + tam - tam / 4, posy + tam / 2 - tam / 4 / 4);

		cout << (char)223;

		break;


	case 4:
		rlutil::locate(posx + tam / 4 + 1, posy + tam / 4 / 4 + 1);

		cout << (char)220;

		rlutil::locate(posx + tam - tam / 4, posy + tam / 4 / 4 + 1);

		cout << (char)220;

		rlutil::locate(posx + tam - tam / 4, posy + tam / 2 - tam / 4 / 4);

		cout << (char)223;

		rlutil::locate(posx + tam / 4 + 1, posy + tam / 2 - tam / 4 / 4);

		cout << (char)223;

		break;

	case 5:
		rlutil::locate(posx + tam / 4 + 1, posy + tam / 4 / 4 + 1);

		cout << (char)220;

		rlutil::locate(posx + tam - tam / 4, posy + tam / 4 / 4 + 1);

		cout << (char)220;

		rlutil::locate(posx + tam / 2 + 1, posy + tam / 4 + 1);

		cout << (char)254;

		rlutil::locate(posx + tam - tam / 4, posy + tam / 2 - tam / 4 / 4);

		cout << (char)223;

		rlutil::locate(posx + tam / 4 + 1, posy + tam / 2 - tam / 4 / 4);

		cout << (char)223;
		break;


	case 6:
		rlutil::locate(posx + tam / 4 + 1, posy + tam / 4 / 4 + 1);

		cout << (char)220;

		rlutil::locate(posx + tam - tam / 4, posy + tam / 4 / 4 + 1);

		cout << (char)220;

		rlutil::locate(posx + tam / 2 + 1, posy + tam / 4 / 4 + 1);

		cout << (char)220;

		rlutil::locate(posx + tam / 2 + 1, posy + tam / 2 - tam / 4 / 4);

		cout << (char)223;

		rlutil::locate(posx + tam - tam / 4, posy + tam / 2 - tam / 4 / 4);

		cout << (char)223;

		rlutil::locate(posx + tam / 4 + 1, posy + tam / 2 - tam / 4 / 4);

		cout << (char)223;

		break;

	default:
		break;
	}
	rlutil::resetColor();
	rlutil::setBackgroundColor(rlutil::BLACK);

	rlutil::setColor(rlutil::LIGHTRED);
	// sombra

	for (int y = posy + 2; y <= posy + tam / 2 + 1; y++) {
		rlutil::locate(posx + tam + 1, y);

		cout << (char)219;
	}


	for (int x = posx + 2; x <= posx + tam + 1; x++) {
		rlutil::locate(x, posy + tam / 2 + 1);

		cout << (char)223;
	}

	rlutil::locate(posx + tam + 1, posy + 1);

	cout << (char)220;

	rlutil::locate(1, posy + tam/2 + 1);
	rlutil::resetColor();

    }


    int opciones, accion;

    ///MENU PRINCIPAL
    void menu (){
    for(int x=1;x<=40;x++){
    cout << " ";
    }

    rlutil::setColor(rlutil::LIGHTRED);
    cout << (char)201;
    for (int i=1; i<=29;i++){
        cout << (char)205;
    }

    cout << (char)187<<endl;


    for(int x=1;x<=40;x++){
    cout << " ";
    }
    cout << (char)186;

        rlutil::locate(45,2);
        cout << "Bienvenido al juego 20!";

    for(int i=1;i<=3;i++){
        cout << " ";
    }
    cout << (char)186 << endl;

    for(int x=1;x<=40;x++){
    cout << " ";
    }
    cout << (char)186;
        for(int i=1;i<=29;i++){
        cout << " ";
    }
    cout << (char)186<<endl;


    for(int i=1;i<=40;i++){
        cout << " ";
    }
    cout << (char)200;

    for(int i=1;i<=29;i++){
        cout << (char)205;
    }
    cout << (char)188;


    cout << endl;
    cout << endl;


    dibujarDado(25, 1, 1, 7);
    dibujarDado(25, 5, 2, 7);
    dibujarDado(25, 9, 3, 7);
    dibujarDado(25, 13, 4, 7);
    dibujarDado(25, 17, 5, 7);
    dibujarDado(25, 21, 6, 7);

    dibujarDado(78, 1, 1, 7);
    dibujarDado(78, 5, 2, 7);
    dibujarDado(78, 9, 3, 7);
    dibujarDado(78, 13, 4, 7);
    dibujarDado(78, 17, 5, 7);
    dibujarDado(78, 21, 6, 7);


     rlutil::locate(36,5);
    cout << "1 - Juego nuevo para un jugador" << endl;

    rlutil::locate(36,6);
    cout << "2 - Juego nuevo para dos jugadores" << endl;

    rlutil::locate(36,7);
    cout << "3 - Mostrar puntuacion mas alta"<< endl;

    rlutil::locate(36,8);
    cout << "4 - Modo simulado (carga de dados manual)"<< endl;

    rlutil::locate(36,9);
    cout << "0 - Fin del programa"<< endl;


    }

    int c=0, maximo;
    int suma=0, puntaje=0, puntajetotal=0, perdida=0, sinpuntos=0, rondas;
    int v[5]={};
    int dados[5]={};
    int i;
    int apuesta;
    bool p=false;

    ///NUMEROS ALEATORIOS
    void cargarAleatorio(int v[], int tam, int limite){
    int i;
    srand(time(NULL));
    for( i=0; i<tam; i++ ){
        v[i]=(rand()%limite)+1;
    }
    }





    int cpuntos1=0,cpuntos2=0,cpuntos3=0,cpuntos4=0,cpuntos5=0,cpuntos6=0;

    ///TIRADA POR PUNTOS AL SUMAR 20 O MAS
    void tirarpuntos(){
        srand(time(0));
        for(i=0;i<5;i++){
            v[i]=1+(rand()%6);
        }

        int y1=2;


        for(int i=0;i<5;i++){
            for(int x=1;x<=6;x++){

        if(v[i]==x){
             dibujarDado(y1, 2, x, 7);
        }
            }
            y1=y1+10;
         }




        for(i=0;i<5;i++){
        if(v[i]==1){
            cpuntos1++;
        }

        if(v[i]==2){
            cpuntos2++;
        }

        if(v[i]==3){
            cpuntos3++;
        }

        if(v[i]==4){
            cpuntos4++;
        }

        if(v[i]==5){
            cpuntos5++;
        }

        if(v[i]==6){
            cpuntos6++;
        }
        }



        ///INDICA NUMERO GENERADOR DE PUNTOS Y OPERA PARA SACAR LOS PUNTOS QUE SE VAN A SUMAR
        if(suma==20){

            rlutil::locate(1,15);
            cout << "Su numero generador es 1";

            puntaje=apuesta*cpuntos1;
            puntajetotal=puntajetotal+puntaje;


            rlutil::locate(1,16);
            cout << "Puntos sumados: " << puntaje << endl;

        }
        else if (suma==21){
            rlutil::locate(1,7);
            cout << "Su numero generador es 2";

            puntaje=apuesta*cpuntos2;
            puntajetotal=puntajetotal+puntaje;

            rlutil::locate(1,8);
           cout << "Puntos sumados: " << puntaje << endl;


        }
        else if (suma==22){
            rlutil::locate(1,7);
            cout << "Su numero generador es 3";
            puntaje=apuesta*cpuntos3;
            puntajetotal=puntajetotal+puntaje;

            rlutil::locate(1,8);
           cout << "Puntos sumados: " << puntaje << endl;



        }
        else if (suma==23){
            rlutil::locate(1,7);
            cout << "Su numero generador es 4";
            puntaje=apuesta*cpuntos4;
            puntajetotal=puntajetotal+puntaje;

             rlutil::locate(1,8);
           cout << "Puntos sumados: " << puntaje << endl;


        }
        else if (suma==24){
            rlutil::locate(1,7);
            cout << "Su numero generador es 5";
             puntaje=apuesta*cpuntos5;
            puntajetotal=puntajetotal+puntaje;

             rlutil::locate(1,8);
            cout << "Puntos sumados: " << puntaje << endl;


        }
        else if (suma>=25){
            rlutil::locate(1,7);
            cout << "Su numero generador es 6";
            puntaje=apuesta*cpuntos6;
            puntajetotal=puntajetotal+puntaje;

            rlutil::locate(1,8);
            cout << "Puntos sumados: " << puntaje << endl;

        }

        cpuntos1=0;
        cpuntos2=0;
        cpuntos3=0;
        cpuntos4=0;
        cpuntos5=0;
        cpuntos6=0;


    }


    ///SEGUNDO MENU AL ELEGIR ALGUNO DE LOS MODOS DE JUEGO
    void menu2(){
    for(int x=1;x<=40;x++){
        cout << " ";
    }
    cout << (char)201;
    for (int i=1; i<=29;i++){
        cout << (char)205;
    }

    cout << (char)187<<endl;


    for(int x=1;x<=40;x++){
    cout << " ";
    }
    cout << (char)186;

 rlutil::locate(45,2);
    cout << "1 - Comenzar";

    for(int i=10;i<=23;i++){
        cout << " ";
    }
    cout << (char)186<<endl;

    for(int x=1;x<=40;x++){
    cout << " ";
    }
    cout << (char)186;

    rlutil::locate(45,3);
    cout << "2 - Volver al menu";

        for(int x=1;x<=8;x++){
    cout << " ";
    }
    cout << (char)186<<endl;

    for(int x=1;x<=40;x++){
    cout << " ";
    }

    cout << (char)186;

    for(int x=1;x<=29;x++){
    cout << " ";
    }
    cout << (char)186<<endl;

    for(int x=1;x<=40;x++){
    cout << " ";
    }

    cout << (char)200;

    for(int x=1;x<=29;x++){
    cout << (char)205;
    }

    cout << (char)188;

    cout << endl;



    dibujarDado(25, 1, 1, 7);
    dibujarDado(25, 5, 2, 7);
    dibujarDado(25, 9, 3, 7);
    dibujarDado(25, 13, 4, 7);
    dibujarDado(25, 17, 5, 7);
    dibujarDado(25, 21, 6, 7);

    dibujarDado(78, 1, 1, 7);
    dibujarDado(78, 5, 2, 7);
    dibujarDado(78, 9, 3, 7);
    dibujarDado(78, 13, 4, 7);
    dibujarDado(78, 17, 5, 7);
    dibujarDado(78, 21, 6, 7);

    rlutil::locate(48,12);
    cout << "- INGRESE OPCION -";

    rlutil::locate(56,13);
    cin >> accion;


    rlutil::locate(37,15);
    system("pause");
    rlutil::cls();
    }


        int d=0, puntajemasalto, win;
        bool empate=false;


    ///TIRADA DE DADOS DEPENDIENDO SI ES MODO SIMULADO O AL AZAR
    void tirardados(int p1,bool p2){

    int posicion =15;
    int aux= 5 - p1 ;
    int y1=2, y2=12;

     if (p2 == false){
            y1=2;
        cargarAleatorio(v, p1, 6);


        for(i=0;i<p1;i++){
        if(c==0){
            maximo=v[i];
            c++;
        }
        else if(v[i]>maximo){
            maximo=v[i];
        }
        }

        dados[aux]=maximo;
        maximo = 0;
        c=0;


         for(int i=0;i<5;i++){
            for(int x=1;x<=6;x++){

        if(v[i]==x){
             dibujarDado(y1, 2, x, 7);
        }
            }
            y1=y1+10;
         }



        cout << endl;

         for(int a = 0;a<5;a++){
            if(dados[a]>0) {
            dibujarDado(posicion, 6, dados[a],7);
            posicion = posicion + 10;
           }
        }

         for(int i=0; i<p1; i++){
            v[i] = 0;
        }
    }

        else{
                y1=12;
        for(int i=0;i<p1;i++){
            cout << endl<<"Ingrese Valor del Dado "<<i+1<<" :";
            cin >> v[i];
        }

        for(i=0;i<p1;i++){
        if(c==0){
            maximo=v[i];
            c++;
        }
        else if(v[i]>maximo){
            maximo=v[i];
        }
        }

        dados[aux]=maximo;
        maximo = 0;
        c=0;



        for(int i=0;i<5;i++){
            for(int x=1;x<=6;x++){

        if(v[i]==x){
             dibujarDado(y1, y2, x, 7);
        }
            }
            y1=y1+10;
         }

        cout << endl;

         for(int a = 0;a<5;a++){
            if(dados[a]>0) {
            dibujarDado(posicion, 16, dados[a],7);
            posicion = posicion + 10;
           }
        }

         for(int i=0; i<p1; i++){
            v[i] = 0;
        }

        }

    }


    string high_player;
    int high_score=0;

    ///INGRESA LOS JUGADORES, REALIZA LAS RONDAS Y TIRADAS, DEPENDIENDO SI ES MODO SIMULADO O MODO NORMAL
    void f_jugadores(int cantidad,bool modo){
        string *j;
        j= new string[cantidad];
        string jugador;
        int *puntos;
        puntos = new int[cantidad];

        menu2();

        switch (accion){
    case 1:
        for(int i=0;i<cantidad;i++){
            cout << "Ingrese nombre de jugador "<< i+1<<": ";
            cin>>jugador;

            j[i]=jugador;
        }

        cout << endl;
        cout << "Ingrese cantidad de rondas: ";
        cin >> rondas;

        //RECORRE JUGADORES///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        for(int i=0;i<cantidad;i++){

            //RECORRE RONDAS///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            for (int x=1;x<=rondas;x++){
            rlutil::cls();
             cout << endl << "Jugador "<<i+1<<": "<<j[i]<<endl;
             cout << "Apuesta Ronda "<<x<<": ";
            cin >> apuesta;

             rlutil::locate(1,17);
            system("pause");
            rlutil::cls();

            //RECORRE LAS 5 TIRADAS POR RONDA///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            int tiradas = 5;

            for(int z=1;z<=5;z++){
                cout << "Nombre del jugador: " << j[i] << "        |     " <<    "Tirada: " << z << "     |     "<< "Ronda " << x << "     |     " << "Puntaje acumulado: "<<puntajetotal <<  "     |"<<endl;
              for(int i=1;i<=99;i++){
                            cout << "*";
              }

              tirardados(tiradas,modo);
              tiradas = tiradas - 1;

                if(modo==false){
                cout << "Dados Tomados: "<<endl;

                system("pause");
                rlutil::cls();
                }
                else{

                rlutil::locate(1, 19);
                cout << "Dados Tomados: "<<endl;

                rlutil::locate(1, 28);
                    system("pause");
                    rlutil::cls();
                }



              }


            ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

            for(int a = 0;a<5;a++){
            suma = suma + dados[a];
            dados[a] = 0;
        }


        if(suma>19){
            cout <<"Nombre del jugador: " <<j[i] << "        |     " << "Tirada por puntos: " << "     |     "<< "Ronda " << x<< "     |     " << "Puntaje acumulado: "<<puntajetotal << "     |"<<endl;
        for(int i=1;i<=109;i++){
            cout << "*";
        }

            tirarpuntos();

            if(puntaje==0){
                sinpuntos++;
            }

            system("pause");
            rlutil::cls();

        }
        if (suma<=19){
            rlutil::cls();
        cout << "La suma de sus maximos no llega a 20."<<endl;
        cout << "Perdio: " << apuesta << " puntos."<<endl;
        puntajetotal=puntajetotal-apuesta;
        perdida++;

        system("pause");
            rlutil::cls();
        }
            rlutil::cls();
            suma = 0;
        }
        puntos[i]=puntajetotal;

        puntajetotal=0;
        }

        // VERIFICA PUNTAJES DEPENDIENDO EL MODO DE JUEGO

        if(cantidad>1){
        for(int i=0;i<cantidad;i++){
            if(d==0){
            puntajemasalto=puntos[i];
            win=i;
            d++;
            if(modo==false){
            if(puntajemasalto>high_score){
                high_score=puntajemasalto;
                high_player=j[win];
            }
            }
            }
            else if (puntajemasalto<puntos[i]){
                puntajemasalto=puntos[i];
                win=i;
                if(modo==false){
                if(puntajemasalto>high_score){
                high_score=puntajemasalto;
                high_player=j[win];
                }
            }
            }
            else if (puntajemasalto==puntos[i]){
                empate=true;
            }

        }





        if (empate==false){
            cout << "Jugador Ganador: "<<j[win] <<endl;
            cout << "Puntaje total acumulado: "<<puntos[win]<<endl;
        }
        else{
            cout << "Empate";
        }

        puntajemasalto=0;
        win=0;
        empate=false;
        d=0;
        sinpuntos=0;
        perdida=0;

        system("pause");
        rlutil::cls();
        }
        else if (cantidad==1){
        dibujarDado(26, 2, 1, 7);
        dibujarDado(26, 6, 1, 7);
        dibujarDado(26, 10, 1, 7);

        dibujarDado(78, 2, 1, 7);
        dibujarDado(78, 6, 1, 7);
        dibujarDado(78, 10, 1, 7);

        rlutil::locate(36,5);
        for(int i=1;i<43;i++){
        cout << (char)3;
        }

        rlutil::locate(36,12);
        for(int i=1;i<43;i++){
        cout << (char)3;
        }

        rlutil::locate(45,7);
        cout << "Nombre del jugador: "<<jugador<<endl;

        rlutil::locate(41,8);
        cout << "Total de rondas sin puntos: "<<sinpuntos<<endl;

        rlutil::locate(37,9);
        cout << "Total de rondas con perdida de puntos: "<<perdida<<endl;

        rlutil::locate(43,10);
        cout << "Puntaje total acumulado: "<<puntos[0]<<endl;

        if(modo==false){
        if(puntos[0]>=high_score){
            high_score=puntos[0];
            high_player=jugador;
            }
        }

        puntajetotal=0;
        sinpuntos=0;
        perdida=0;

        rlutil::locate(1,20);
        system("pause");
        rlutil::cls();
        }


        break;
    case 2:
        menu();
        rlutil::cls();
        break;
    default:
        break;
        }
    }

    ///FUNCION PARA MOSTRAR EL MEJOR PUNTAJE Y JUGADOR DE TODO EL PROGRAMA
    void mejorjugador(){
        if(high_score!=0){
        cout << "Mejor Puntaje: ";
        cout << high_score<<endl;
        cout << "Jugador: ";
        cout << high_player<<endl;
        }
        else{
            cout << "Todavia nadie jugo o sumo puntos :("<<endl;
        }
    }



