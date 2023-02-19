// 8. Hacer un programa que solicite 20 números y luego mostrar por pantalla el menor de ellos y la 
//    posición en la que fue encontrado.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int N, Min, PMin;

    for (int i = 0; i < 20; i++)
    {
        cout << i + 1 << ". Ingrese un numero: ";
        cin >> N;
        if (i == 0)
        {
            Min = N;
            PMin = i + 1;
        }
        else if (N < Min)
        {
            Min = N;
            PMin = i + 1;
        }
    }

    cout << "\nMinimo: " << Min << endl;
    cout << "Posicion: " << PMin << endl;
    return 0;
}