#include <iostream>
using namespace std;

main() {
	int x, z, qtde = 0, soma = 0;
	cin >> x;

	while (true) {
		cin >> z;
		if (z > x) break;
	}

	int i = x;
	while (soma <= z) {
		soma += i;
		qtde++;
		i++;
	}

	cout << qtde << endl;
	system("pause");
}