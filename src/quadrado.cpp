#include "quadrado.h"


int Quadrado::area(){
    return lado*lado;
}

int Quadrado::perimetro(){
    return 4*lado;
}


int Quadrado::getLado(){
    return lado;
}

void Quadrado::setLado(int lad){
    lado = lad;
}