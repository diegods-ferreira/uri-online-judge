#include <iostream>
using namespace std;

main() {
    int i = 1, aux = 7;

    while (i <= 9) {
        for (int j = aux; j > aux - 3; j--)
            cout << "I=" << i << " J=" << j << endl;

        i += 2;
        aux += 2;
    }
}
