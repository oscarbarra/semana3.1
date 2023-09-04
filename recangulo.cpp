#include <iostream>
#include <math.h> // no lo use // xd

using namespace std;

class Rectangulo{
    public:
    int width, heigth;

    void area(){
        cout << width * heigth << endl;
    }

    void perimetro(){
        cout << 2 * (width + heigth) << endl;
    }
};


int main(){
    //nombre de la instancia
    Rectangulo myObj;
    myObj.width = 10;
    myObj.heigth = 5;
    myObj.area();
    myObj.perimetro();
}