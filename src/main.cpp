#include <iostream>
#include <string.h>
#include "quadrado.h"
#include "retangulo.h"
#include "triangulo.h"
#include "circulo.h"
#include "cubo.h"
#include "paralelepipedo.h"
#include "piramide.h"
#include "esfera.h"

int main(int argc, char* argv[]) {

    if(!strcmp(argv[1],"quadrado")){
        Quadrado quad;
        quad.setLado(std::stoi(argv[2]));

        std::cout<<"Area do quadrado: "<<quad.area()<<"\n";
        std::cout<<"Perimetro do quadrado: "<<quad.perimetro();
    }
    if(!strcmp(argv[1],"retangulo")){
        Retangulo ret;
        ret.setaltura(std::stoi(argv[2]));
        ret.setlargura(std::stoi(argv[3]));

        std::cout<<"Area do retangulo: "<<ret.area()<<"\n";
        std::cout<<"Perimetro do retangulo: "<<ret.perimetro();
        
    }
    if(!strcmp(argv[1],"triangulo")){
        Triangulo tri;
        tri.setaltura(std::stoi(argv[2]));
        tri.setlad1(std::stoi(argv[3]));
        tri.setlad2(std::stoi(argv[4]));
        tri.setlad3(std::stoi(argv[5]));

        std::cout<<"Area do triangulo: "<<tri.area()<<"\n";
        std::cout<<"Perimetro do triangulo: "<<tri.perimetro();
        

    }
    if(!strcmp(argv[1],"circulo")){
        Circulo cir;
        cir.setraio(std::stof(argv[2]));

        std::cout<<"Area do circulo: "<<cir.area()<<"\n";
        std::cout<<"Perimetro do circulo: "<<cir.perimetro();

    }
    if(!strcmp(argv[1],"cubo")){
        Cubo cub;
        cub.setaresta(std::stoi(argv[2]));

        std::cout<<"Area do cubo: "<<cub.area()<<"\n";
        std::cout<<"Volume do cubo: "<<cub.volume();

    }
    if(!strcmp(argv[1],"paralelepipedo")){
        Paralelepipedo parl;
        parl.setaret1(std::stof(argv[2]));
        parl.setaret2(std::stof(argv[3]));
        parl.setaret3(std::stof(argv[4]));

        std::cout<<"Area do paralelepipedo: "<<parl.area()<<"\n";
        std::cout<<"Volume do paralelepipedo: "<<parl.volume();
        
    }
    if(!strcmp(argv[1],"piramide")){
        Piramide pir;

        pir.setaltura(std::stoi(argv[2]));
        pir.setarea_base(std::stoi(argv[3]));
        pir.setarea_lateral(std::stoi(argv[4]));
        
        std::cout<<"Area da piramide: "<<pir.area()<<"\n";
        std::cout<<"Volume da piramide: "<<pir.volume();
    }
    if(!strcmp(argv[1],"esfera")){
        Esfera esf;
        esf.setraio(std::stof(argv[2]));

        std::cout<<"Area da esfera: "<<esf.area()<<"\n";
        std::cout<<"Volume da esfera: "<<esf.volume();
    }

    return 0;

}