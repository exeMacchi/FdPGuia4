// 10. Hacer un programa que solicite 20 números y luego emitir por pantalla el máximo de los números pares y 
//     el mínimo de los números impares.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    bool BanP = false;
    bool BanImp = false;
    int N, MaxP, MinImp;

    for (int i = 0; i < 20; i++)
    {
        cout << i + 1 << ". Ingrese un numero: ";
        cin >> N;

        if (N % 2 == 0)
        {
            if (!BanP)
            {
                MaxP = N;
                BanP = true;
            }
            else if (N > MaxP)
            {
                MaxP = N;
            }
        }
        else
        {
            if (!BanImp)
            {
                MinImp = N;
                BanImp = true;
            }
            else if (N < MinImp)
            {
                MinImp = N;
            }
        }
    }

    cout << "\nEl maximo par: " << MaxP << endl;
    cout << "El minimo impar: " << MinImp << endl;

    return 0;
}