#include <iostream>
using namespace std;

main() {
    int i = 1;

    while (i <= 9) {
        for (int j = 7; j > 4; j--)
            cout << "I=" << i << " J=" << j << endl;

        i += 2;
    }
}
