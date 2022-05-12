#include <iostream>
#include <string>
using namespace std;

const string HEADER =   "  ___          _   ___   _______  _______   __       _  _ _____ __  __ _    \n"
                        " / __|_ __  __| | |_  ) |_   _\\ \\/ |_   _| / _|___  | || |_   _|  \\/  | |   \n"
                        "| (__| '  \\/ _` |  / /    | |  >  <  | |   > _|_ _| | __ | | | | |\\/| | |__ \n"
                        " \\___|_|_|_\\__,_| /___|   |_| /_/\\_\\ |_|   \\_____|  |_||_| |_| |_|  |_|____|\n";

const string DESC = "Escoge una de las opciones disponibles:\n\n1. Agregar alumno\n2. Listar alumno\n3. Eliminar alumno\n4. Actualizar alumno\n5. Salir\n\nNo se permiten parametros diferentes.\n\nEn caso de ingresar un parametro invalido, se le pedira de nuevo que ingrese los datos correctamente.\n\n";

void getHeader() {
    cout << HEADER << endl;
}

void getDesc() {
    cout << DESC;
}