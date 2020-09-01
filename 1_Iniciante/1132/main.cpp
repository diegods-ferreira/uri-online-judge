#include <iostream>
using namespace std;

main() {
    int x, y, soma = 0;
    cin >> x >> y;

    if (x == y) {
        if (x % 13 != 0)
            soma = x;
    }

    else if (x < y) {
        for (int i = x; i <= y; i++)
            if (i % 13 != 0)
                soma += i;
    }

    else if (y < x) {
        for (int i = y; i <= x; i++)
            if (i % 13 != 0)
                soma += i;
    }

    cout << soma << endl;
}
