#ifndef TRIANGULO_H

class Triangulo{
    int altura;
    int lado1, lado2, lado3;
    //lado 1 = base

public:
    int area();    
    int perimetro();

    int getaltura();
    void setaltura(int alt);

    int getlad1();
    int getlad2();
    int getlad3();
    void setlad1(int lad1);
    void setlad2(int lad2);
    void setlad3(int lad3);

};
#endif