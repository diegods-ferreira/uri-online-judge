#include <iostream>
#include <math.h>

using namespace std;

int main() {
	double lados[3], n = 3;

	for (int i = 0; i < 3; i++)
		cin >> lados[i];


	// Ordenando o vetor utilizando o BubbleSort inverso...
	for (int i = 0; i < n; i++)
		for (int j = 0; j < (n - 1); j++)
			if (lados[j] < lados[j + 1])
			{
				int temp = lados[j];
				lados[j] = lados[j + 1];
				lados[j + 1] = temp;
			}

	if (lados[0] >= lados[1] + lados[2]) {
		cout << "NAO FORMA TRIANGULO" << endl;
	}
	else {
		if (pow(lados[0], 2) == pow(lados[1], 2) + pow(lados[2], 2))
			cout << "TRIANGULO RETANGULO" << endl;

		if (pow(lados[0], 2) > pow(lados[1], 2) + pow(lados[2], 2))
			cout << "TRIANGULO OBTUSANGULO" << endl;

		if (pow(lados[0], 2) < pow(lados[1], 2) + pow(lados[2], 2))
			cout << "TRIANGULO ACUTANGULO" << endl;

		if (lados[0] == lados[1] && lados[1] == lados[2])
			cout << "TRIANGULO EQUILATERO" << endl;

		if ((lados[0] == lados[1] && lados[1] != lados[2]) ||
			(lados[1] == lados[2] && lados[2] != lados[0]) ||
			(lados[2] == lados[0] && lados[0] != lados[1]))
			cout << "TRIANGULO ISOSCELES" << endl;
	}

	system("pause");
	return 0;
}