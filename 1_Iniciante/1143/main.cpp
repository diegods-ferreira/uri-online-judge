#include <iostream>
#include <math.h>
using namespace std;

main() {
    int n;
    cin >> n;

    if (n > 1 && n < 100)
        for (int i = 1; i <= n; i++)
            cout << i << " " << pow(i, 2) << " " << pow(i, 3) << endl;
}
