#include <iostream>
using namespace std;

main() {
	int hora_inicial, hora_final, duracao;

	cin >> hora_inicial >> hora_final;

	if (hora_inicial == hora_final)
		duracao = 24;
	else if (hora_inicial > hora_final)
		duracao = (24 - hora_inicial) + hora_final;
	else
		duracao = hora_final - hora_inicial;

	cout << "O JOGO DUROU " << duracao << " HORA(S)" << endl;

	system("pause");
}
