// 11. Hacer un programa para ingresar 10 números y luego calcule y emita el mayor de los primos de la lista. 
//     En caso de no haber ningún número primo, deberá aclararlo con un cartel.


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    bool Primo = false;
    bool Hprimo = false;
    int N, MaxP;

    for (int i = 0; i < 10; i++)
    {
        cout << i + 1 << ". Ingrese un numero: ";
        cin >> N;
        int Cont = 0;

        for (int x = 1; x <= N; x++)
        {
            if (N % x == 0)
            {
                Cont++;
            }
        }

        if (Cont == 2)
        {
            if (!Primo)
            {
                MaxP = N;
                Primo = true;
            }
            else if (N > MaxP)
            {
                MaxP = N;
            }
            Hprimo = true;
        }
    }

    if (Hprimo)
    {
        cout << "\nEl maximo primo es: " << MaxP << endl;
    }
    else
    {
        cout << "\nEn la lista no hay numeros primos." << endl;
    }
    return 0;
}