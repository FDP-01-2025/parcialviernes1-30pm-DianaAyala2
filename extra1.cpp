#include <iostream>
using namespace std;
int main()
{
    int dui, cuenta, opcion; // el dui debe de validar 9 caracteres y el numero de cuenta 6
    cout << "Hola, por favor ingresa tu numero de dui y cuenta bancaria para continuar: " << endl;
    cout << "NUmero de dui (sin guiones): ";
    cin >> dui;
    cout << "Numero de cuenta: ";
    cin >> cuenta;

    cout << "Bienvenido, selecciona la accion que deseas realizar para continuar: "<<endl;
    cout << "1. Realizar un deposito."<<endl;
    cout << "2. Realizar un retiro."<<endl;
    cout << "3. Realizar consulta."<<endl;
    cout << "4. Salir"<<endl;
    cout << "Opcion: "<<endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "Ingresa la cantida de dinero que deseas depositar: ";
        cin >> cuenta;
        for (int i = 0; i == 1; i++)
        {
            cout << "La operacion se ha realizado correctamente." << endl;
            cout << "1. Realizar un deposito.";
            cout << "2. Realizar un retiro.";
            cout << "3. Realizar consulta.";
            cout << "4. Salir";
            cout << "Opcion: ";
            cin >> opcion;
        }
        break;
    case 2:
        cout << "Revisar dinero total de la cuenta."<<endl;
    }
}