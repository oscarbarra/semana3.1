#include <iostream>
#include <math.h>

using namespace std;

class Circulo{
    public:
    int pi, radio;

    //pow permite elever a 'n' numero
    void area(){
        cout << pi * (pow(radio, 2)) << endl;
    }

    void perimetro(){
        cout << pi * radio * 2;
    }
};


int main(){
    Circulo myObj;
    myObj.radio = 3;
    myObj.pi = 3.1415;
    myObj.area();
    myObj.perimetro();
}