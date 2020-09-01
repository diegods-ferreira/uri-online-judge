#include <iostream>
#include <iomanip>
using namespace std;

main() {
    int n, divisor, dividendo;
    float divisao;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> dividendo >> divisor;

        if (divisor == 0)
            cout << "divisao impossivel" << endl;
        else {
            divisao = (float) dividendo / divisor;
            cout << fixed << setprecision(1);
            cout << divisao << endl;
        }
    }
}
