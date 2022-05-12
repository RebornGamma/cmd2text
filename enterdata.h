#include <iostream>
#include <string.h>
#include <fstream>
#include "grados.h"
using namespace std;

// Prototipo de funcion
void guardar();
void leer();

struct Datos {                                                                   
	char codigo[40];
    char nombre[40]; // Nombre del alumno
	char departamento[40];
	char municipio[40];
	char direccion[40];
    int dia;
	int mes;
	int anio;

	int fecha[3]; //Un arreglo de 3 posiciones para la fecha

    char responsable[40];
	char tel[40]; //Telefono

	char inst[40]; //Instituto Anterior
    int grado;
	int gradoAnt; //Grado Anterior

	char afeccion[40];
	char alergia[40];
	char discapacidad[40];
	char enfCronica[40];

	// Esta variable es para evitar tener problemas
	// con la lectura y que se muestre facil en pantalla
	char fechaLect[10];
};

// Variable que usara para poder
// leer el archivo .txt los alumnos 
Datos alumno[40];

// Variable contador temporal
// solo para la funcion listar
int contador_listar = 0;

void listar() {
	for(int i = 0; i < contador_listar; i++) {
		cout << "*******************************" << endl;
		cout << "DATOS DEL ALUMNO #" << alumno[i].codigo << endl;
		cout << "Nombre: " << alumno[i].nombre << endl;
		cout << "Departamento del alumno: " << alumno[i].departamento << endl;
		cout << "Municipio del alumno: " << alumno[i].municipio << endl;
		cout << "Direccion del alumno: " << alumno[i].direccion << endl;
		cout << "Fecha de nacimiento del alumno: " << alumno[i].fechaLect << endl;
		
		cout << "DATOS DEL RESPONSABLE" << endl;
		cout << "Nombre del responsable: " << alumno[i].responsable << endl;
		cout << "Telefono del responsable: " << alumno[i].tel << endl;
		
		cout << "EXPEDIENTE MEDICO DEL ALUMNO" << endl;
		cout << "Tiene afecciones el alumno? " << alumno[i].afeccion << endl;
		cout << "Tiene alergias el alumno? " << alumno[i].alergia << endl;
		cout << "Tiene una discapacidad el alumno? " << alumno[i].discapacidad << endl;
		cout << "Tiene una enfermedad cronica el alumno? " << alumno[i].enfCronica << endl;
	}
}

void showData() {
	for(int i = 0; i < contador_listar; i++) {
		cout << "*******************************" << endl;
		cout << "DATOS DEL ALUMNO #" << alumno[i].codigo << endl;
		cout << "Nombre: " << alumno[i].nombre << endl;
		cout << "Departamento del alumno: " << alumno[i].departamento << endl;
		cout << "Municipio del alumno: " << alumno[i].municipio << endl;
		cout << "Direccion del alumno: " << alumno[i].direccion << endl;
		cout << "Fecha de nacimiento del alumno: " << alumno[i].fecha[0] << "/" << alumno[i].fecha[1] << "/" << alumno[i].fecha[2] << endl << endl;
		
		cout << "DATOS DEL RESPONSABLE" << endl;
		cout << "Nombre del responsable: " << alumno[i].responsable << endl;
		cout << "Telefono del responsable: " << alumno[i].tel << endl << endl;
		
		cout << "EXPEDIENTE MEDICO DEL ALUMNO" << endl;
		cout << "Tiene afecciones el alumno? " << alumno[i].afeccion << endl;
		cout << "Tiene alergias el alumno? " << alumno[i].alergia << endl;
		cout << "Tiene una discapacidad el alumno? " << alumno[i].discapacidad << endl;
		cout << "Tiene una enfermedad cronica el alumno? " << alumno[i].enfCronica << endl << endl;
		fflush(stdin);
	}
}

void ingresar() {

	cout << "Datos del alumno" << endl << endl;

	fflush(stdin);

    cout<<"Digite su codigo\n> ";
    gets(alumno[contador_listar].codigo);

    cout << endl;

    cout << "Digite el nombre del alumno:\n> ";
    gets(alumno[contador_listar].nombre);

	cout << endl;

    cout << "Digite el departamento al que pertenece el alumno:\n> ";
	gets(alumno[contador_listar].departamento);

	cout << endl;

	cout << "Digite el municipio al que pertenece el alumno:\n> ";
	gets(alumno[contador_listar].municipio);

	cout << endl;
	
	cout << "Digite la direccion al que pertenece el alumno:\n> ";
	gets(alumno[contador_listar].direccion);

	cout << endl;
	//Datos académicos

	cout << "Digite el instituto al que asistio el alumno el anio pasado:\n> ";
	gets(alumno[contador_listar].inst);

	cout << endl;

	loop = 0;
	dir_loop = &loop;

	while(*dir_loop == 0) {
		system("cls"); //Aquí se debe mostrar la lista de los grados existentes
		getHeader();
		_lista();
		cout << "Digite el grado que va a cursar el alumno este anio:\n> ";
		cin >> alumno[contador_listar].grado;
		cout << endl;
		cout << "Digite el grado que ha cursado el alumno el anio pasado:\n> ";
		cin >> alumno[contador_listar].gradoAnt;

		//Funcion para devolver los grados correctos del alumno
		listarGrados(alumno[contador_listar].grado, alumno[contador_listar].gradoAnt);
	}

	system("cls"); //Limpiar pantalla
	getHeader();
	
	cout << "Fecha de nacimiento" << endl << endl;
	cout << "Digite el dia en el que nacio el alumno:\n> ";
	cin >> alumno[contador_listar].dia;

	cout << endl;

	cout << "Digite el mes que nacio el alumno:\n> ";
	cin >> alumno[contador_listar].mes;

	cout << endl;

	cout << "Digite el anio que nacio el alumno:\n> ";
	cin >> alumno[contador_listar].anio;

	//Crear la fecha a base de arreglos
	alumno[contador_listar].fecha[0] = alumno[contador_listar].dia;
	alumno[contador_listar].fecha[1] = alumno[contador_listar].mes;
	alumno[contador_listar].fecha[2] = alumno[contador_listar].anio;

	//Datos del responsable

	system("cls");
	getHeader();

	cin.ignore();

	cout << "Datos del responsable" << endl << endl;

	cout << "Digite el nombre del responsable del alumno:\n> ";
	gets(alumno[contador_listar].responsable);

	cout << endl;
	
	cout << "Digite el telefono del responsable:\n> ";
	gets(alumno[contador_listar].tel);

	system("cls");
	getHeader();

	cout << "EXPENDIENTE MEDICO DEL ALUMNO" << endl << endl;

	cout << "Tiene afecciones el alumno?\n> ";
	gets(alumno[contador_listar].afeccion);

	cout << "Tiene alergias el alumno?\n> ";
	gets(alumno[contador_listar].alergia);

	cout << "Tiene una discapacidad el alumno?\n> ";
	gets(alumno[contador_listar].discapacidad);

	cout << "Tiene una enfermedad cronica el alumno?\n> ";
	gets(alumno[contador_listar].enfCronica);

	guardar();
	fflush(stdin);

    contador_listar++;
}

void guardar() {
    // Instancia de un flujo de datos
    ofstream guardar("datos.txt", ios::app);
        //Aqui se guardarán los datos del alumno 
		guardar << alumno[contador_listar].codigo << endl;
		guardar << alumno[contador_listar].nombre << endl;
		guardar << alumno[contador_listar].departamento << endl;
		guardar << alumno[contador_listar].municipio << endl;
		guardar << alumno[contador_listar].direccion << endl;
		guardar << alumno[contador_listar].fecha[0] << "/" << alumno[contador_listar].fecha[1] << "/" << alumno[contador_listar].fecha[2] << endl;
		guardar << alumno[contador_listar].responsable << endl;
		guardar << alumno[contador_listar].tel << endl;
		guardar << alumno[contador_listar].afeccion << endl;
		guardar << alumno[contador_listar].alergia << endl;
		guardar << alumno[contador_listar].discapacidad << endl;
		guardar << alumno[contador_listar].enfCronica << endl;
	guardar.close();
}

void leer() {
    ifstream leer("datos.txt", ios::in);
    char _lines[40]; //Variable temporal donde iremos leyendo todas las líneas
    
    if(!leer) {
        cout << "El archivo no se pudo abrir" << endl;
        system("pause");
		exit(1);
    }
    else {
        //Creamos un ciclo infinito
        while(true) {
            //Leeremos desde el archivo y lo almacenaremos en nuestra estructura
            leer.getline(_lines, 40);

            if(strlen(_lines) != 0) {
                strcpy(alumno[contador_listar].codigo, _lines);
            }
            else {
                break;
            }

			if (strlen(_lines) != 0) {
                strcpy(alumno[contador_listar].nombre, _lines);
			}
			else {
                break;
            }

			if (strlen(_lines) != 0) {
                strcpy(alumno[contador_listar].departamento, _lines);
			}
			else {
                break;
            }

			if (strlen(_lines) != 0) {
                strcpy(alumno[contador_listar].direccion, _lines);
			}
			else {
                break;
            }

			if (strlen(_lines) != 0) {
                strcpy(alumno[contador_listar].municipio, _lines);
			}
			else {
                break;
            }

			if (strlen(_lines) != 0) {
                strcpy(alumno[contador_listar].direccion, _lines);
			}
			else {
                break;
            }

			if (strlen(_lines) != 0) {
                strcpy(alumno[contador_listar].fechaLect, _lines);
			}
			else {
                break;
            }

			if (strlen(_lines) != 0) {
                strcpy(alumno[contador_listar].responsable, _lines);
			}
			else {
                break;
            }

			if (strlen(_lines) != 0) {
				strcpy(alumno[contador_listar].tel, _lines);
			}
			else {
				break;
			}

			if (strlen(_lines) != 0) {
				strcpy(alumno[contador_listar].afeccion, _lines);
			}
			else {
				break;
			}

			if (strlen(_lines) != 0) {
				strcpy(alumno[contador_listar].alergia, _lines);
			}
			else {
				break;
			}

			if (strlen(_lines) != 0) {
				strcpy(alumno[contador_listar].discapacidad, _lines);
			}
			else {
				break;
			}

			if (strlen(_lines) != 0) {
				strcpy(alumno[contador_listar].enfCronica, _lines);
			}
			else {
				break;
			}
		}
		contador_listar++;
	}
	leer.close();
}