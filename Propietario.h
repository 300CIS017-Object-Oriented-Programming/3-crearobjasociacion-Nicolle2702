//
// Created by lufe y Gonzo Feb2024.
//

#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <string>

//Respuesta del punto: El método agregarPropietario crea un nuevo propietario para el perro, asignándolo a la variable de instancia pPropietario. Utiliza los parámetros proporcionados para crear dinámicamente un nuevo objeto de la clase

class Propietario {
private:
    std::string nombre;
    std::string docIdentidad;
    int edad;
public:
    Propietario(); //-> Constructor vacio
    Propietario(std::string nombre, std::string docIdentidad); //-> Constructor con parametros
    void mostrarInfo();
    std::string getNombre();
    void setNombre(std::string nombre);



};


#endif //PROPIETARIO_H
