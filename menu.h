#include <iostream>
#include "enterdata.h"
using namespace std;

int getMenu(int opcion) {
	switch(opcion) {
		case 1:
			//Mostrar datos
			system("cls");
			getHeader();
			ingresar();
			system("cls");
			showData();
			system("pause");
			break;
		case 2:
			system("cls");
			getHeader();
			leer();
			listar();
			system("pause");
			break;
		case 3:
			system("cls");
			getHeader();
			cout<<"No disponible..." << endl;
			system("pause");
			break;
		case 4:
			system("cls");
			getHeader();
			cout<<"No disponible..." << endl;
			system("pause");
			break;
		case 5:
			system("cls");
			break;
		default:
			break;
	}
}
