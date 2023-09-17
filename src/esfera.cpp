#include "esfera.h"

float Esfera::area(){
    float pi = 3.1416;
    return 4* pi * raio * raio;
}

float Esfera::volume(){
    float pi = 3.1416;
    return 4/3 * pi * raio* raio * raio;
}


float Esfera::getraio(){
    return raio;
}

void Esfera::setraio(float rai){
    raio = rai;

}
