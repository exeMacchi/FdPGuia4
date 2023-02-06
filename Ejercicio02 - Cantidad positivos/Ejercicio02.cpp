// 2. Hacer un programa que solicite 20 números y calcule y emita por pantalla cuántos son positivos (mayores a cero). 
//    Se debe mostrar un solo valor: el conteo final.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int N, Con = 0;

    for (int i = 0; i < 20; i++) {
        cout << "Ingrese un numero: ";
        cin >> N;
        if (N > 0) {
            Con++;
        }
    }

    cout << "\nCantidad de numeros positivos: " << Con << endl;
    return 0;
}

