#include <iostream>
#include <iomanip>
using namespace std;

main() {
    int n, quantia, total_coelhos = 0, total_ratos = 0, total_sapos = 0;
    char tipo;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> quantia >> tipo;

        switch (tipo) {
            case 'C':   total_coelhos += quantia;   break;
            case 'R':   total_ratos += quantia;     break;
            case 'S':   total_sapos += quantia;     break;
        }
    }

    cout << "Total: " << (total_coelhos + total_ratos + total_sapos) << " cobaias" << endl;

    cout << "Total de coelhos: " << total_coelhos << endl;
    cout << "Total de ratos: " << total_ratos << endl;
    cout << "Total de sapos: " << total_sapos << endl;

    cout << fixed << setprecision(2);
    float percentual;

    percentual = (float) total_coelhos / (total_coelhos + total_ratos + total_sapos) * 100;
    cout << "Percentual de coelhos: " << percentual << " %" << endl;

    percentual = (float) total_ratos / (total_coelhos + total_ratos + total_sapos) * 100;
    cout << "Percentual de ratos: " << percentual << " %" << endl;

    percentual = (float) total_sapos / (total_coelhos + total_ratos + total_sapos) * 100;
    cout << "Percentual de sapos: " << percentual << " %" << endl;
}
