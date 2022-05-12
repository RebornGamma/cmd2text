#include <iostream>

using namespace std;

/*
Declarar variables puntero para el ciclo que evita
que pongas un grado invalido
*/
int loop, *dir_loop;

string devolverGrado(string _grado) {
	return _grado;
}

string devolverGradoAnt(string _gradoAnt) {
	return _gradoAnt;
}

void _lista() {
	cout<<"Que grado esta el alumno cursando?\n"<<endl;
	cout<<"1. Primer grado"<<endl;
	cout<<"2. Segundo grado"<<endl;
	cout<<"3. Tercer grado"<<endl;
	cout<<"4. Cuarto grado"<<endl;
	cout<<"5. Quinto grado"<<endl;
	cout<<"6. Sexto grado "<<endl;
	cout<<"7. Septimo grado"<<endl;
	cout<<"8. Octavo grado"<<endl;
	cout<<"9. Noveno grado"<<endl;
	cout<<"10. Primer anio de bachillerato"<<endl;
	cout<<"11. Segundo anio de bachillerato"<<endl;
	cout<<"12. Tercer anio de bachillerato"<<endl<<endl;
}

int listarGrados(int grado, int gradoAnt) {
	string opcion1 = "";
	string opcion2 = "";

	switch (grado) {
		case 1:
			opcion1 = "Primer Grado";
			loop = 1;
			dir_loop = &loop;
			break;
		case 2:
			opcion1 = "Segundo Grado";
			loop = 1;
			dir_loop = &loop;
			break;
		case 3:
			opcion1 = "Tercer Grado";
			loop = 1;
			dir_loop = &loop;
			break;
		case 4:
			loop = 1;
			dir_loop = &loop;
			break;
		case 5:
			opcion1 = "Quinto Grado";
			loop = 1;
			dir_loop = &loop;
			break;
		case 6:
			opcion1 = "Sexto Grado";
			loop = 1;
			dir_loop = &loop;
			break;
		case 7:
			opcion1 = "Septimo Grado";
			loop = 1;
			dir_loop = &loop;
			break;
		case 8:
			opcion1 = "Octavo Grado";
			loop = 1;
			dir_loop = &loop;
			break;
		case 9:
			opcion1 = "Noveno Grado";
			loop = 1;
			dir_loop = &loop;
			break;
		case 10:
			opcion1 = "Primer anio de bachillerato";
			loop = 1;
			dir_loop = &loop;
			break;
		case 11:
			opcion1 = "Segundo anio de bachillerato";
			loop = 1;
			dir_loop = &loop;
			break;
		case 12:
			opcion1 = "Tercer anio de bachillerato";
			loop = 1;
			dir_loop = &loop;
			break;
		default:
			loop = 0;
			dir_loop = &loop;
			break;
	}
	switch (gradoAnt) {
		case 1:
			opcion2 = "Primer Grado";
			loop = 1;
			dir_loop = &loop;
			break;
		case 2:
			opcion2 = "Segundo Grado";
			loop = 1;
			dir_loop = &loop;
			break;
		case 3:
			opcion2 = "Tercer Grado";
			loop = 1;
			dir_loop = &loop;
			break;
		case 4:
			opcion2 = "Cuarto Grado";
			loop = 1;
			dir_loop = &loop;
			break;
		case 5:
			opcion2 = "Quinto Grado";
			loop = 1;
			dir_loop = &loop;
			break;
		case 6:
			opcion2 = "Sexto Grado";
			loop = 1;
			dir_loop = &loop;
			break;
		case 7:
			opcion2 = "Septimo Grado";
			loop = 1;
			dir_loop = &loop;
			break;
		case 8:
			opcion2 = "Octavo Grado";
			loop = 1;
			dir_loop = &loop;
			break;
		case 9:
			opcion2 = "Noveno Grado";
			loop = 1;
			dir_loop = &loop;
			break;
		case 10:
			opcion2 = "Primer anio de bachillerato";
			loop = 1;
			dir_loop = &loop;
			break;
		case 11:
			opcion2 = "Segundo anio de bachillerato";
			loop = 1;
			dir_loop = &loop;
			break;
		case 12:
			opcion2 = "Tercer anio de bachillerato";
			loop = 1;
			dir_loop = &loop;
			break;
		default:
			loop = 0;
			dir_loop = &loop;
			break;
	}
	devolverGrado(opcion1);
	devolverGradoAnt(opcion2);
	return grado, gradoAnt;
}