#include <iostream>
using namespace std;

main() {
    int n;
    cin >> n;

    if (n > 2 && n < 1000)
        for (int i = 1; i <= 10; i++)
            cout << i << " x " << n << " = " << (i * n) << endl;
}
