// 9. Hacer un programa que solicite 20 edades y luego calcule el promedio de edad de aquellas personas 
//    mayores a 18 años.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    float E, AcuE = 0, ConE = 0;
    float P;

    for (int i = 0; i < 20; i++) {
        cout << i + 1 << ". Ingrese una edad: ";
        cin >> E;
        if (E > 18) {
            AcuE += E;
            ConE++;
        }
    }

    if (ConE > 0) {
        P = AcuE / ConE;
        cout << "\nEl promedio de edad de personas mayores de 18: " << P << endl;
    }
    else {
        cout << "\nNo se ingresaron edades mayores a 18." << endl;
    }
    return 0;
}
