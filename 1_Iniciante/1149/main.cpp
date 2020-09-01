#include <iostream>
using namespace std;

main() {
    int a, n, soma;
    cin >> a;

    do {
        cin >> n;
    }
    while (n <= 0);

    soma = 0;
    for (int i = a; i < (a + n); i++)
        soma += i;

    cout << soma << endl;
}
