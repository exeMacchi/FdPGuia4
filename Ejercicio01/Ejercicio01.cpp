// 1. Hacer un programa que solicite el ingreso de 10 números y que muestre el mayor de ellos por pantalla. 
//    Solo se debe emitir UN valor por pantalla.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int N, Max;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese un numero: ";
        cin >> N;
        if (i == 0) {
            Max = N;
        }
        else if (N > Max) {
            Max = N;
        }
    }

    cout << "\nEl maximo es: " << Max << endl;
    return 0;
}
