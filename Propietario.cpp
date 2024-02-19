//
// Created by lufe y Gonzo Feb2024.
//

#include "Propietario.h"

using namespace std;

//TODO Agrege el constructor por defecto y agrege un constructor con dos parametros


Propietario::Propietario() {
    nombre= "";
    docIdentidad= "";
}

Propietario::Propietario(std::string nombre, std::string docIdentidad) {
 this->nombre = nombre;
 this->docIdentidad = docIdentidad;
}

string Propietario::getNombre()  {
    return nombre;
}

void Propietario::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void Propietario::mostrarInfo() {
    cout<< "El nombre del propietario es: "<<nombre<<endl;
    cout<< "El documento del propietario es: "<<docIdentidad<<endl;
}