// 10. Hacer un programa que solicite 20 n�meros y luego emitir por pantalla el m�ximo de los n�meros pares y 
//     el m�nimo de los n�meros impares.

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