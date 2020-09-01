#include <iostream>
using namespace std;

main() {
    int maior = 0, posicao = 0;

    for (int i = 0; i < 100; i++) {
        int numero;
        cin >> numero;

        if (numero > maior) {
            maior = numero;
            posicao = i + 1;
        }
    }

    cout << maior << endl;
    cout << posicao << endl;
}
