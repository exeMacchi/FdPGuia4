// 3. Hacer un programa para mostrar los números del 1 al 10. No se debe realizar ningún pedido de datos.

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    for (int i = 0; i < 10; i++)
    {
        if (i < 9)
        {
            cout << i + 1 << ", ";
        }
        else
        {
            cout << i + 1 << "." << endl;
        }
    }
    return 0;
}