#include <iostream>
using namespace std;

main() {
    float i = 0, aux = 0;

    while (i < 2.2) {
        for (int j = 1; j < 4; j++)
            cout << "I=" << i << " J=" << (j + aux) << endl;

        aux += 0.2;
        i += 0.2;
    }
}
