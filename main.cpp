#include <iostream>
#include <string>
using namespace std;
class Rectangulo
{
private:
    // Aca se estaria aplicando el ocultamiento de datos
    int area=5;
    string color="Rojo";
public:
    //Aca se aplica el encapsulamiento
    //se utlz datos privados en metodos publicos.
    void mostrarArea()
    {
        cout<<"El area es de "<<area<<"\n";
    }
    void mostrarColor()
    {
        cout<<"El color es "<<color;
    }

};
int main() {
    Rectangulo rectangulo;
    rectangulo.mostrarArea();
    rectangulo.mostrarColor();
    return 0;
}
