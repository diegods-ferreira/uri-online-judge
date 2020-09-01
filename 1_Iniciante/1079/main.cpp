#include <iostream>
#include <iomanip>
using namespace std;

main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        float peso_nota1 = 2, peso_nota2 = 3, peso_nota3 = 5;
        float nota1, nota2, nota3, media;

        cin >> nota1 >> nota2 >> nota3;

        media = ((nota1 * peso_nota1) + (nota2 * peso_nota2) + (nota3 * peso_nota3)) / (peso_nota1 + peso_nota2 + peso_nota3);

        cout << fixed << setprecision(1);
        cout << media << endl;
    }
}
