#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>

using namespace std;

int main() {
	string dia;
	char pontos;
	int dia_inicio, horas_inicio, minutos_inicio, segundos_inicio;
	int dia_fim, horas_fim, minutos_fim, segundos_fim;

	fflush(stdin);
	cin >> dia >> dia_inicio;
	fflush(stdin);
	cin >> horas_inicio >> pontos >> minutos_inicio >> pontos >> segundos_inicio;

	fflush(stdin);
	cin >> dia >> dia_fim;
	fflush(stdin);
	cin >> horas_fim >> pontos >> minutos_fim >> pontos >> segundos_fim;

	double inicio = 0;
		inicio += dia_inicio * 24 * 60 * 60;
		inicio += horas_inicio * 60 * 60;
		inicio += minutos_inicio * 60;
		inicio += segundos_inicio;

	double fim = 0;
		fim += dia_fim * 24 * 60 * 60;
		fim += horas_fim * 60 * 60;
		fim += minutos_fim * 60;
		fim += segundos_fim;

	double segundos_diferenca = fim - inicio;
	double minutos_diferenca = 0;
	double horas_diferenca = 0;
	double dias_diferenca = 0;

	while (segundos_diferenca >= 60) {
		if (segundos_diferenca >= 60) {
			minutos_diferenca++;
			segundos_diferenca -= 60;

			if (minutos_diferenca >= 60) {
				horas_diferenca++;
				minutos_diferenca -= 60;

				if (horas_diferenca >= 24) {
					dias_diferenca++;
					horas_diferenca -= 24;
				}
			}
		}
	}


	cout << fixed << setprecision(0);
	cout << dias_diferenca << " dia(s)" << endl;
	cout << horas_diferenca << " hora(s)" << endl;
	cout << minutos_diferenca << " minuto(s)" << endl;
	cout << segundos_diferenca << " segundo(s)" << endl;

	system("pause");
	return 0;
}