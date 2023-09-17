#include "cubo.h"


int Cubo::area(){
    return 6 * aresta * aresta;
}

int Cubo::volume(){
    return aresta * aresta * aresta;
}

int Cubo::getaresta(){
    return aresta;
}

void Cubo::setaresta(int aret){
    aresta = aret;
}