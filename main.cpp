#include <iostream>
#include "Perro.h"
#include "Perro.cpp"
#include "Propietario.h"
#include "Propietario.cpp"
#include "Veterinaria.h"
#include "Veterinaria.cpp"
#include "Raza.h"
#include "Raza.cpp"
using namespace std;
int main() {

    Perro firulais;
    firulais.setNombre("Firulais");
    firulais.setColor("Negro");
    firulais.setEdad(5);
    firulais.setTamanio("Grande");
    firulais.setRaza("Mastin napolitano");
    Propietario pPropetario;

    firulais.agregarPropietario("Nicolle Ruiz", "102842313");
    std::cout<< "El nombre del pPropietario del perro "<<firulais.getNombre() << " es " << firulais.getPropietario()->getNombre()<<std::endl;

    firulais.agregarRaza("Maltes","Italia");
    cout << "La raza del perro " << firulais.getNombre() << " es " << firulais.getrRaza()->getnombreR() << endl;

    return 0;
}
