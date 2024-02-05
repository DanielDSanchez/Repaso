#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int tipoLlamada;
    int duracionLlamada;
    int costoMinuto;

    cout << "Ingrese el tipo de llamada 0: Fijo | 1: Celular | 2: Internacional " << endl;
    cin >> tipoLlamada;
    switch (tipoLlamada)
    {
    case 0:
        costoMinuto = 200;
        break;

    case 1:
        costoMinuto = 300;
        break;

    case 2:
        costoMinuto = 500;
        break;

    default:
        cout << "Tipo de llamada invalido" << endl;
        costoMinuto = 0;
        break;
    }

    cout << "Ingrese la duracion de la llamada" << endl;
    cin >> duracionLlamada;

    cout << "El valor de la llamada es de " << (costoMinuto * duracionLlamada) << endl;
    return 0;
}
