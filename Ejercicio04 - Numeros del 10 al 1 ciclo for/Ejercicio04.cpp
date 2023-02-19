// 4. Hacer un programa para mostrar los números del 10 al 1. No se debe realizar ningún pedido de datos.

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    for (int i = 10; i > 0; i--)
    {
        if (i > 1)
        {
            cout << i << ", ";
        }
        else
        {
            cout << i << "." << endl;
        }
    }
    return 0;
}