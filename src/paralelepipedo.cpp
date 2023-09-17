#include "paralelepipedo.h"

int Paralelepipedo::area(){
    return (2*aresta1*aresta2)+(2*aresta2*aresta3)+(2*aresta3*aresta1);
}

int Paralelepipedo::volume(){
    return aresta1*aresta2*aresta3;
}


int Paralelepipedo::getaret1(){
    return aresta1;
}
int Paralelepipedo::getaret2(){
    return aresta2;
}
int Paralelepipedo::getaret3(){
    return aresta3;
}

void Paralelepipedo::setaret1(int art1){
    aresta1 = art1;
}

void Paralelepipedo::setaret2(int art2){
    aresta2 = art2;

}
void Paralelepipedo::setaret3(int art3){
    aresta3 = aresta3;

}