#include <iostream>
using namespace std;

main() {
    int resposta, gols_inter, gols_gremio,
        grenais = 0,
        vitorias_inter = 0,
        vitorias_gremio = 0,
        empates = 0;

    do {
        grenais++;

        cin >> gols_inter >> gols_gremio;

        if (gols_inter == gols_gremio)      empates++;
        else if (gols_inter > gols_gremio)  vitorias_inter++;
        else if (gols_gremio > gols_inter)  vitorias_gremio++;

        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> resposta;
    }
    while (resposta == 1);

    cout << grenais << " grenais" << endl;
    cout << "Inter:" << vitorias_inter << endl;
    cout << "Gremio:" << vitorias_gremio << endl;
    cout << "Empates:" << empates << endl;

    if (vitorias_inter == vitorias_gremio)      cout << "Nao houve vencedor" << endl;
    else if (vitorias_inter > vitorias_gremio)  cout << "Inter venceu mais" << endl;
    else if (vitorias_gremio > vitorias_inter)  cout << "Gremio venceu mais" << endl;
}
