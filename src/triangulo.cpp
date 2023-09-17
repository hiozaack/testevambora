#include "triangulo.h"

int Triangulo::area(){
    return (lado1*altura)/2;
}

int Triangulo::perimetro(){
    return lado1 + lado2 + lado3;
}


int Triangulo::getaltura(){
    return altura;
}
int Triangulo::getlad1(){
    return lado1;
}
int Triangulo::getlad2(){
    return lado2;
}
int Triangulo::getlad3(){
    return lado3;
}

void Triangulo::setaltura(int alt){
    altura = alt;
}

void Triangulo::setlad1(int lad1){
    lado1 = lad1;

}
void Triangulo::setlad2(int lad2){
    lado2 = lad2;

}
void Triangulo::setlad3(int lad3){
    lado3 = lad3;

}