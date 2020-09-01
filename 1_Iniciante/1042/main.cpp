#include <iostream>
using namespace std;

void bubble_sort(int[], int);

main() {
	int entrada[3], entrada_ordenada[3];

	for (int i = 0; i < 3; i++)
		cin >> entrada[i];

	for (int i = 0; i < 3; i++)
		entrada_ordenada[i] = entrada[i];
	bubble_sort(entrada_ordenada, 3);

	for (int i = 0; i < 3; i++)
		cout << entrada_ordenada[i] << endl;

	cout << endl;

	for (int i = 0; i < 3; i++)
		cout << entrada[i] << endl;

	system("pause");
}

void bubble_sort(int *vetor_copia, int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < (n - 1); j++)
			if (vetor_copia[j] > vetor_copia[j + 1])
			{
				int temp = vetor_copia[j];
				vetor_copia[j] = vetor_copia[j + 1];
				vetor_copia[j + 1] = temp;
			}
}