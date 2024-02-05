#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float pesoBebe;
    int mesesBebe;

    cout << "Ingrese los meses del bebe" << endl;
    cin >> mesesBebe;

    if (mesesBebe < 12)
    {
        cout << "Ingrese el peso del bebe" << endl;
        cin >> pesoBebe;

        int dosisVacuna = ((pesoBebe + 10) / (mesesBebe * 10)) * 8;
        cout << "La dosis de la vacuna es " << dosisVacuna << " mlg" << endl;
    }
    else
    {
        cout << "El bebe no cumple con la edad necesaria" << endl;
    }

    return 0;
}
