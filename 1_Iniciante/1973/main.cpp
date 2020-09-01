#include <iostream>
using namespace std;

main() {
	/*
		CÓDIGO DO PROBLEMA 1973
	*/

	int quantidade_estrelas;
	cin >> quantidade_estrelas;


	int estrelas_carneiros[quantidade_estrelas], i, estrelas_atacadas, carneiros_nao_roubados, num_carneiros, ja_atacadas;

	for (i = 0; i < quantidade_estrelas; i++)
		cin >> estrelas_carneiros[i];


	estrelas_atacadas = 0;
	ja_atacadas = estrelas_atacadas - 1;
	i = 0;
	while (i >= 0 && i < quantidade_estrelas)
	{
		num_carneiros = estrelas_carneiros[i];

		if (num_carneiros > 0) {
			estrelas_carneiros[i]--;

			if (i > ja_atacadas) {
				estrelas_atacadas++;
				ja_atacadas++;
			}
		}

		if (num_carneiros % 2 != 0)
			i++;
		else
			i--;
	}

	carneiros_nao_roubados = 0;
	for (i = 0; i < quantidade_estrelas; i++)
		carneiros_nao_roubados += estrelas_carneiros[i];

	cout << estrelas_atacadas << " " << carneiros_nao_roubados << endl;

	system("pause");
}