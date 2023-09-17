#include "circulo.h"

float Circulo::area(){
    float pi = 3.1416;
    return pi*raio*raio;
}

float Circulo::perimetro(){
    float pi = 3.1416;
    return 2 * pi * raio;
}


float Circulo::getraio(){
    return raio;
}

void Circulo::setraio(float rai){
    raio = rai;

}
