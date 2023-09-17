#include "retangulo.h"

int Retangulo::area(){
    return largura*altura;
}

int Retangulo::perimetro(){
    return (2*largura + 2*altura);
}


int Retangulo::getaltura(){
    return altura;
}

int Retangulo::getlargura(){
    return largura;
}

void Retangulo::setaltura(int alt){
    altura = alt;

}

void Retangulo::setlargura(int larg){
    largura = larg;
    
}
