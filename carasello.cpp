#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int resultado = rand() % 2;
    if (resultado == 0)
    {
        cout << "Cara!" << endl;
    }
    else
    {
        cout << "Sello!" << endl;
    }

    return 0;
}