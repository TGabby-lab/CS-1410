#include <iostream>
#include <iomanip>


using namespace std;
double cuenta, propina, total,propina_1;

int main() {
    cout << "ingrese el monto de la cuenta: " << endl;
    cin >> cuenta;
    cout << "ingrese el monto de la propina: " << endl;
    cin >> propina;

    propina_1=cuenta*(propina/100);
    total=propina_1+cuenta;

    cout << fixed << setprecision(2) << "Propina: $" << propina_1 << endl;
    cout << fixed << setprecision(2) << "Total a pagar: $" << total << endl;

    return 0;
}
// NO UTILICE IA
