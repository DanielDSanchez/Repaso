
#include <iostream>
using namespace std;
int main()
{

    string usuario;
    string contrasena;
    string usuario2 = "prueba";
    string contrasena2 = "123";

    cout << "Ingrese el usuario: " << endl;
    cin >> usuario;

    if (usuario == usuario2)
    {
        cout << "El usuario es correcto, por favor ingrese su contraseña." << endl;
        cout << "Ingrese su contraseña: " << endl;
        cin >> contrasena;

        if (contrasena == contrasena2)
        {
            cout << "La contraseña es correcta, usted ha ingresado con exito" << endl;
        }
        else
        {
            cout << "La contraseña es incorrecta." << endl;
        }
    }
    else
    {
        cout << "El usuario ingresado no es correcto" << endl;
    }

    return 0;
}