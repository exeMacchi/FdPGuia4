// 5. Hacer un programa que muestre los números del 1 al 100 de 5 en 5. Ejemplo: 0, 5, 10, 15, 20.... 100.

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    for (int i = 0; i <= 100; i += 5) {
        if (i < 100) {
            cout << i << ", ";
        }
        else {
            cout << i << "." << endl;
        }
    }

    return 0;
}
