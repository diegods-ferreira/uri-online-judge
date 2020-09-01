#include <iostream>
using namespace std;

main() {
    int tipo_combustivel, alcool = 0, gasolina = 0, diesel = 0;

    while (true) {
        cin >> tipo_combustivel;

        if (tipo_combustivel == 1)      alcool++;
        else if (tipo_combustivel == 2) gasolina++;
        else if (tipo_combustivel == 3) diesel++;
        else if (tipo_combustivel == 4) break;
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasolina << endl;
    cout << "Diesel: " << diesel << endl;
}
