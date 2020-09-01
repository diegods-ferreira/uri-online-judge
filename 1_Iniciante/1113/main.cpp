#include <iostream>
using namespace std;

main() {
    while (true) {
        int x, y;
        cin >> x >> y;

        if (x == y)
            break;
        else if (x > y)
            cout << "Decrescente" << endl;
        else if (x < y)
            cout << "Crescente" << endl;
    }
}
