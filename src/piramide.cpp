#include "piramide.h"

float Piramide::area(){
    return area_base+area_lateral;
}

float Piramide::volume(){
    return 1/3*area_base*altura;
}


float Piramide::getarea_base(){
    return area_base;
}

float Piramide::getarea_lateral(){
    return area_lateral;
}

float Piramide::getaltura(){
    return altura;
}

void Piramide::setarea_base(float abase){
    area_base = abase;
}

void Piramide::setarea_lateral(float alat){
    area_lateral = alat;
}
void Piramide::setaltura(float alt){
    altura = alt;
}