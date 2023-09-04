#include <iostream>
#include <math.h>

using namespace std;

class Circulo{
    public:
    int pi, radio;

    void valorRadio(){
        cout << "ingresar el valor del radio: "; cin >> radio;
    }

    //pow permite elever a 'n' numero
    void area(){
        cout << pi * (pow(radio, 2)) << endl;
    }

    void perimetro(){
        cout << pi * radio * 2 << endl;
    }

    void cambiarRadio(){
        cout << "ingresar el nueva valor del radio: "; cin >> radio;
    }
};


int main(){
    Circulo myObj;
    myObj.pi = 3.1415;
    myObj.valorRadio();
    myObj.area();
    myObj.perimetro();
    myObj.cambiarRadio();
    myObj.area();
    myObj.perimetro();
}