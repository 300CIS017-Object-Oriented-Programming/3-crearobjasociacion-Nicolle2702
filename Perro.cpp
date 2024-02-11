#include "Perro.h"
#include <iostream>


using namespace std;


// constructor por defecto con lista inicializadora
Perro::Perro() : edad(0), raza(""), tamanio(""), color("") {}

void Perro::ladrar() {
    std::cout << "Guau Guau" << std::endl;
}

void Perro::agregarPropietario(std::string nombre, std::string docIdentidad) {
    // Asocia a la variable de instancia pPropietario un nuevo pPropietario
    // Es memoria dinámica, en el destructor se debe liberar
    this->pPropietario = new Propietario(nombre, docIdentidad);
}

void Perro::setPropietario(Propietario *pPropietario) {
    this->pPropietario = pPropietario;
}
Propietario *Perro::getPropietario() {
    return this->pPropietario;
}

int Perro::getEdad() {
    return edad;
}

void Perro::setEdad(int edad) {
    this->edad = edad;
}

std::string Perro::getRaza() {
    return raza;
}

void Perro::setRaza(std::string raza) {
    this->raza = raza;
}

std::string Perro::getTamanio() {
    return tamanio;
}

void Perro::setTamanio(std::string tamanio) {
    this->tamanio = tamanio;
}

std::string Perro::getNombre() {
    return nombre;
}

void Perro::setNombre(std::string nombre) {
    this->nombre = nombre;
}

std::string Perro::getColor() {
    return color;
}

void Perro::setColor(std::string color) {
    this->color = color;
}

Perro::~Perro() {
    delete pPropietario;
}

void Perro::setVete(Veterinaria *vVeterinaria) {
    this->vVeterinaria = vVeterinaria;
}

void Perro::vetperro() {
    cout << "A la veterinaria que pertenece " << nombre << " es " << vVeterinaria->getnombrevet();
}

void Perro::setRaza(Raza *rRaza) {
    this->rRaza= rRaza;
}
Raza* Perro::getrRaza() {
    return rRaza;
}

void Perro::agregarRaza(string nombreR, string paisDeOrg) {
    this->rRaza = new Raza(nombreR, paisDeOrg);
}



