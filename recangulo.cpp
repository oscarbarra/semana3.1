#include <iostream>
#include <math.h> // no lo use // xd

using namespace std;

class Rectangulo{
    public:
    int width, heigth;

    void valorWidht(){
        cout << "ingresar el valor del ancho: "; cin >> width;
    }

    void valorHeight(){
        cout << "ingresar el valor del alto: "; cin >> heigth;
    }

    void area(){
        cout << width * heigth << endl;
    }

    void perimetro(){
        cout << 2 * (width + heigth) << endl;
    }

    void cambiarValorWidht(){
        cout << "ingresar el nuevo valor del ancho: "; cin >> width;
    }

    void cambiarValorHeght(){
        cout << "ingresar el nuevo valor del alto:  "; cin >> heigth;
    }
};


int main(){
    //nombre de la instancia
    Rectangulo myObj;
    myObj.valorWidht();
    myObj.valorHeight();
    myObj.area();
    myObj.perimetro();
    myObj.cambiarValorWidht();
    myObj.cambiarValorHeght();
    myObj.area();
    myObj.perimetro();

}