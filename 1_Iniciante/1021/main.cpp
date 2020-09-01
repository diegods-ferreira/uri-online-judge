#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
	/*
		CÓDIGO DO PROBLEMA 1021
	*/
	double valor;
	int parte_inteira, parte_flutuante, notas, moedas;
	
	cin >> valor;

	if (valor >= 0 && valor <= 1000000.00)
	{
		parte_inteira = floor(valor);
		parte_flutuante = round((valor - parte_inteira) * 100);

		cout << "NOTAS:" << endl;

		// Notas de 100 reais
		notas = parte_inteira / 100;
		cout << notas << " nota(s) de R$ 100.00" << endl;

		// Notas de 50 reais
		notas = (parte_inteira % 100) / 50;
		cout << notas << " nota(s) de R$ 50.00" << endl;

		// Notas de 20 reais
		notas = ((parte_inteira % 100) % 50) / 20;
		cout << notas << " nota(s) de R$ 20.00" << endl;

		// Notas de 10 reais
		notas = (((parte_inteira % 100) % 50) % 20) / 10;
		cout << notas << " nota(s) de R$ 10.00" << endl;

		// Notas de 5 reais
		notas = ((((parte_inteira % 100) % 50) % 20) % 10) / 5;
		cout << notas << " nota(s) de R$ 5.00" << endl;

		// Notas de 2 reais
		notas = (((((parte_inteira % 100) % 50) % 20) % 10) % 5) / 2;
		cout << notas << " nota(s) de R$ 2.00" << endl;


		cout << "MOEDAS:" << endl;

		// Moedas de 1 real
		notas = ((((((parte_inteira % 100) % 50) % 20) % 10) % 5) % 2) / 1;
		moedas = notas;
		cout << moedas << " moeda(s) de R$ 1.00" << endl;

		// Moedas de 50 centavos
		moedas = (parte_flutuante % 100) / 50;
		cout << moedas << " moeda(s) de R$ 0.50" << endl;

		// Moedas de 25 centavos
		moedas = ((parte_flutuante % 100) % 50) / 25;
		cout << moedas << " moeda(s) de R$ 0.25" << endl;

		// Moedas de 10 centavos
		moedas = (((parte_flutuante % 100) % 50) % 25) / 10;
		cout << moedas << " moeda(s) de R$ 0.10" << endl;

		// Moedas de 5 centavos
		moedas = ((((parte_flutuante % 100) % 50) % 25) % 10) / 5;
		cout << moedas << " moeda(s) de R$ 0.05" << endl;

		// Moedas de 1 centavo
		moedas = (((((parte_flutuante % 100) % 50) % 25) % 10) % 5) / 1;
		cout << moedas << " moeda(s) de R$ 0.01" << endl;
	}

	system("pause");
	return 0;
}