#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int gradosFahrenheit;

    cout << "Ingrese los grados fahrenheit" << endl;
    cin >> gradosFahrenheit;

    int gradosCentigrados = (gradosFahrenheit - 32) / (1.8);
    cout << "Son " << gradosCentigrados << "  grados centigrados";
    return 0;
}
