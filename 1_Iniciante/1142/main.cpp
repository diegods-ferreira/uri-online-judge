#include <iostream>
using namespace std;

main() {
    int n, contador = 1;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cout << contador << " ";
            contador++;
        }
        cout << "PUM" << endl;
        contador++;
    }
}
