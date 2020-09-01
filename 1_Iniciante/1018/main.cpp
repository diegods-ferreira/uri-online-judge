#include <iostream>

using namespace std;

int main() {
	/*
		CÓDIGO DO PROBLEMA 1018
	*/

	int valor, notas_1, notas_2, notas_5, notas_10, notas_20, notas_50, notas_100, aux;

	cin >> valor;
	cout << valor << endl;

	aux = valor;

	notas_100 = (int) aux / 100;
	aux = aux - (notas_100 * 100);

	notas_50 = (int) aux / 50;
	aux = aux - (notas_50 * 50);

	notas_20 = (int) aux / 20;
	aux = aux - (notas_20 * 20);

	notas_10 = (int) aux / 10;
	aux = aux - (notas_10 * 10);

	notas_5 = (int) aux / 5;
	aux = aux - (notas_5 * 5);

	notas_2 = (int) aux / 2;
	aux = aux - (notas_2 * 2);

	notas_1 = (int) aux / 1;
	aux = aux - (notas_1 * 1);


	cout << notas_100 << " nota(s) de R$ 100,00" << endl;
	cout << notas_50 << " nota(s) de R$ 50,00" << endl;
	cout << notas_20 << " nota(s) de R$ 20,00" << endl;
	cout << notas_10 << " nota(s) de R$ 10,00" << endl;
	cout << notas_5 << " nota(s) de R$ 5,00" << endl;
	cout << notas_2 << " nota(s) de R$ 2,00" << endl;
	cout << notas_1 << " nota(s) de R$ 1,00" << endl;

	system("pause");
	return 0;
}