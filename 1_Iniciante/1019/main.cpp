#include <iostream>
using namespace std;

int main() {
	int duracao = 0, horas = 0, minutos = 0, segundos = 0;

	cin >> duracao;

	segundos = duracao;
	while (segundos >= 60) {
		if (segundos >= 60) {
			minutos++;
			segundos -= 60;

			if (minutos >= 60) {
				horas++;
				minutos -= 60;
			}
		}
	}

	cout << horas << ":" << minutos << ":" << segundos << endl;
}
