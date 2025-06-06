#include <iostream>
using namespace std;
int main()
{
    int opcion;
    int moneda, conversion;
    cout << "Hola, por favor seleccina la opcion a la que deseas convertir tu dinero: " << endl;
    cout << "1. USD (dolares) a EUR (euros)" << endl;
    cout << "2. USD (dolares) a JPY (yenes)" << endl;
    cout << "3. USD (dolares) a GBP (libras)" << endl;
    cout << "Opcion: ";
    cin >> opcion;
    switch (opcion)
    {
    case 1:
        cout << "Ingresa el monto de dinero que quieres convertir a euros: "; // valor del euro = 6 dolares americanos
        cin >> moneda;
        conversion = (moneda * 6);
        cout << "El dinero que ingresaste en euros es: " << conversion << endl;
        break;
    case 2:
        cout << "Ingresa el monto de dinero que quieres convertir a yenes: "; // valor del yen = 4 dolares americanos
        cin >> moneda;
        conversion = (moneda * 4);
        cout << "El dinero que ingresaste en yenes es: " << conversion << endl;
        break;
    case 3:
        cout << "Ingresa el monto de dinero que quieres convertir a libras: "; // valor del euro = 5 dolares americanos
        cin >> moneda;
        conversion = (moneda * 5);
        cout << "El dinero que ingresaste en libras es: " << conversion << endl;
        break;
    default:
        cout << "Ingresa una opcion valida por favor :)" << endl;
        break;
    }
    return 0;
}