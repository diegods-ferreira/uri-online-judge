#include <iostream>
using namespace std;

main() {
	int entrada, pares = 0;

	for (int i = 0; i < 5; i++) {
		cin >> entrada;
		if (entrada % 2 == 0)
			pares++;
	}

	cout << pares << " valores pares" << endl;

	system("pause");
}