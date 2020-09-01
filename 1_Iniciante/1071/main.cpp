#include <iostream>
using namespace std;

main() {

    int inicio, fim, soma_impares;

    cin >> inicio >> fim;
    soma_impares = 0;

    if (inicio == fim) {
        soma_impares = 0;
    }

    else if (inicio < fim) {
        for (int i = inicio + 1; i < fim; i++)
            if (i % 2 != 0)
                soma_impares += i;
    }

    else {
        for (int i = fim + 1; i < inicio; i++)
            if (i % 2 != 0)
                soma_impares += i;
    }

    cout << soma_impares << endl;
}
