#include <iostream>
using namespace std;

main() {
    int n;

    while (true) {
        cin >> n;

        if (n == 0)
            break;

        for (int i = 1; i <= n; i++) {
            cout << i;

            if (i < n)
                cout << " ";
            else
                cout << endl;
        }
    }
}
