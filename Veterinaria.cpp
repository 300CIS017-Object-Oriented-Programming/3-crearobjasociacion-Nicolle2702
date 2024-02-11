//
// Created by nicol on 11/02/2024.
//
#include <string>
#include "Veterinaria.h"
#include <iostream>
using namespace std;


Veterinaria::Veterinaria() {
    aniosexp= 0;
    nombrevet= "";
}

Veterinaria::Veterinaria(int aniosexp, string nombrevet) {
    this->aniosexp= aniosexp;
    this->nombrevet= nombrevet;
}

int Veterinaria::getaniosexp() {
    return aniosexp;
}

string Veterinaria::getnombrevet() {
    return nombrevet;
}

void Veterinaria::setaniosexp(int aniosexp) {
    this->aniosexp= aniosexp;
}

void Veterinaria::setnombrevet(string nombrevet) {
    this->nombrevet= nombrevet;
}