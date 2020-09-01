#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

main() {
    int resposta = 1;

    while (resposta == 1) {
        float nota1 = -1, nota2 = -1, media;
        
        while (nota1 < 0 || nota1 > 10) {
            cin >> nota1;
            if (nota1 < 0 || nota1 > 10)
                cout << "nota invalida" << endl;
        }

        while (nota2 < 0 || nota2 > 10) {
            cin >> nota2;
            if (nota2 < 0 || nota2 > 10)
                cout << "nota invalida" << endl;
        }

        media = (float) ((nota1 + nota2) / 2);

        cout << fixed << setprecision(2);
        cout << "media = " << media << endl;

        do {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> resposta;
        }
        while (resposta != 1 && resposta != 2);
    }
}
