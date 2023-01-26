// 7. Hacer un programa que solicite 10 números y luego mostrar por pantalla el máximo de ellos y la 
//    posición en la que fue ingresado.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int N, Max, PMax;

    for (int i = 0; i < 10; i++) {
        cout << i + 1 << ". Ingrese un numero: ";
        cin >> N;
        if (i == 0) {
            Max = N;
            PMax = i + 1;
        }
        else if (N > Max) {
            Max = N;
            PMax = i + 1;
        }
    }

    cout << "\nMaximo: " << Max << endl;
    cout << "Posicion: " << PMax << endl;
    return 0;
}
