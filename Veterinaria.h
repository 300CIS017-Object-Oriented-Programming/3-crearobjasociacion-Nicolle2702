//
// Created by nicol on 11/02/2024.
//

#ifndef INC_3_CREAROBJASOCIACION_NICOLLE2702_VETERINARIA_H
#define INC_3_CREAROBJASOCIACION_NICOLLE2702_VETERINARIA_H

#include <string>
#include <iostream>
#include "Propietario.h"
#include "Perro.h"

using namespace std;

class Veterinaria{
private:
    int aniosexp;
    string nombrevet;
public:
    //Constructores
    Veterinaria();
    Veterinaria(int aniosexp, string nombrevet);

    //Analizadores
    int getaniosexp();
    string getnombrevet();

    //Modificadoras
    void setaniosexp(int aniosexp);
    void setnombrevet(string nombrevet);

};




















#endif //INC_3_CREAROBJASOCIACION_NICOLLE2702_VETERINARIA_H
