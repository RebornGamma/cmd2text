#include <iostream>
#include <stdio.h>
#include "header.h"
#include "menu.h"
#include "team.h"
using namespace std;

int main() {
    int opcionMenu = 0; //Incializar el seleccinador del menú
    system("title Cmd 2 Txt");
    system("color 0a"); //Brindar de colores a la consola
    char reiniciar;
    
    //Inicio del programa
    while(opcionMenu < 1 || opcionMenu > 5) {
        //Menu del programa
        system("cls");
        getHeader();
        getDesc();
        cout << "> ";
        cin >> opcionMenu;
        getMenu(opcionMenu);
        //Ciclo infinito
        system("cls");
        getHeader();
        cout << "Desea salir de la aplicacion? (Y/N)\n > ";
        cin >> reiniciar;
        if(reiniciar == 'Y' || reiniciar == 'y') {
            opcionMenu = 5;
        } else {
            opcionMenu = 0;
        }
    }

    cout << endl << endl <<"Presione cualquier boton para ver quienes elaboraron este trabajo. ;)";
    system("pause >nul");

    //Hecho por: LegacyDevs
    system("cls");
    madeBy();
    cout << endl << "Muchas gracias!" << endl << endl;
    cout << "Presione cualquier boton para salir del programa... ";
    system("pause >nul");
}