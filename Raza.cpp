//
// Created by nicol on 11/02/2024.
//

#include "Raza.h"
#include <string>
#include <iostream>

using namespace std;

Raza::Raza() {
    nombreR= "";
    paisDeOrg= "";
}

Raza::Raza(string nombreR, string paisDeOrg) {
    this->nombreR= nombreR;
    this->paisDeOrg= paisDeOrg;
}

string Raza::getnombreR() {
    return nombreR;
}

string Raza::getpaisDeOrg() {
    return paisDeOrg;
}

void Raza::setnombreR(string nombreR) {
    this->nombreR= nombreR;
}

void Raza::setpaisDeOrg(string paisDeOrg) {
    this->paisDeOrg= paisDeOrg;
}