#include <iostream>
using namespace std;
int main()
{
    int monto, descuento;
    cout << "Ingrese el monto total de su compra: ";
    cin >> monto;

    if (monto >  100)
    {
        descuento = monto - 0.10;
        cout << "El total de su compra es: " << descuento <<endl; //aplicar el 10% de descuentro a las compras mayores de 100
    } else {
        cout << "El total de su compra es: "<< monto <<endl;
    }
    return 0;
}