// 6. Hacer un programa que solicite UN número y luego calcule y emita un cartel aclaratorio si el mismo 
//    es primo o no es primo.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int N;
    int Con = 0;

    cout << "Ingrese un numero: ";
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            Con++;
        }
    }

    if (Con == 2)
    {
        cout << "\nEl numero es primo." << endl;
    }
    else
    {
        cout << "\nEl numero no es primo." << endl;
    }
    return 0;
}