#include <iostream>
using namespace std;

main() {
	int entrada, pares = 0, impares = 0, positivos = 0, negativos = 0;

	for (int i = 0; i < 5; i++){
		cin >> entrada;

		if (entrada % 2 == 0) pares++;
		else impares++;

		if (entrada > 0) positivos++;
		else if (entrada < 0) negativos++;
	}

	cout << pares << " valor(es) par(es)" << endl;
	cout << impares << " valor(es) impar(es)" << endl;
	cout << positivos << " valor(es) positivo(s)" << endl;
	cout << negativos << " valor(es) negativo(s)" << endl;

	system("pause");
}