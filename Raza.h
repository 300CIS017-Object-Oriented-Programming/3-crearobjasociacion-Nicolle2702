//
// Created by nicol on 11/02/2024.
//

#ifndef INC_3_CREAROBJASOCIACION_NICOLLE2702_RAZA_H
#define INC_3_CREAROBJASOCIACION_NICOLLE2702_RAZA_H

#include <string>
#include <iostream>
using namespace std;

class Raza {
    private:
        string nombreR;
        string paisDeOrg;
    public:

        //Constructores
        Raza();
        Raza(string nombreR, string paisDeOrg);

        //Analizadores
        string getnombreR();
        string getpaisDeOrg();

        //Modificadores
        void setnombreR(string nombreR);
        void setpaisDeOrg(string paisDeorg);

};


#endif //INC_3_CREAROBJASOCIACION_NICOLLE2702_RAZA_H
