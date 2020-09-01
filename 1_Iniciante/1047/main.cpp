#include <iostream>

using namespace std;

const int UM_DIA_EM_MINUTOS = (24 * 60);

int horas_duracao;
int minutos_duracao;

int main() {
	int hora_inicial, minuto_inicial, hora_final, minuto_final;

	cin >> hora_inicial >> minuto_inicial >> hora_final >> minuto_final;

	minutos_duracao = ((hora_final * 60) + minuto_final) - ((hora_inicial * 60) + minuto_inicial);

	if (minutos_duracao == 0) {
		horas_duracao = 24;
		minutos_duracao = 0;
	}
	else {
		if (minutos_duracao < 0)
			minutos_duracao = minutos_duracao + UM_DIA_EM_MINUTOS;

		while (minutos_duracao >= 60) {
			if (minutos_duracao >= 60) {
				horas_duracao++;
				minutos_duracao -= 60;
			}
		}
	}

	cout << "O JOGO DUROU " << horas_duracao << " HORA(S) E " << minutos_duracao << " MINUTO(S)" << endl;

	system("pause");
	return 0;
}