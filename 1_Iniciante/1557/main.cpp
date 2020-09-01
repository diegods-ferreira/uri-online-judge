#include <iostream>
#include <math.h>

using namespace std;

int Tamanho;
void lpad(int, int, char);
int pegar_tamanho(int);

int main() {
	int N, ultimo_elemento;

	do {
		cin >> N;

		if (N > 0 && N <= 15)
		{
			ultimo_elemento = pow(pow(2, N - 1), 2);

			Tamanho = pegar_tamanho(ultimo_elemento);

			for (int i = 0; i < N; i++) {
				int conteudo = pow(2, i);

				for (int j = 0; j < N; j++) {
					if (j > 0)
						conteudo = conteudo * 2;

					lpad(conteudo, pegar_tamanho(conteudo), ' ');

					if (j < N - 1)
						cout << " ";
				}
				cout << endl;
			}
			cout << endl;
		}
		else break;
	}
	while (N != 0);

	//system("pause");
	return 0;
}

void lpad(int conteudo, int redutor, char caracter) {
	for (int i = 0; i < (Tamanho - redutor); ++i)
		cout << caracter;
	cout << conteudo;
}

int pegar_tamanho(int numero) {
	if (numero >= 100000000)
		return 9;
	else if (numero >= 10000000)
		return 8;
	else if (numero >= 1000000)
		return 7;
	else if (numero >= 100000)
		return 6;
	else if (numero >= 10000)
		return 5;
	else if (numero >= 1000)
		return 4;
	else if (numero >= 100)
		return 3;
	else if (numero >= 10)
		return 2;
	else
		return 1;
}
