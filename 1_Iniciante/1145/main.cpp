#include <iostream>

using namespace std;

int main() {
	int X, Y, aux;

	cin >> X >> Y;

	aux = 0;
	for (int i = 1; i <= Y; i++) {
		cout << i ;
		aux++;

		if (aux == X) {
			cout << endl;
			aux = 0;
		}
		else
			cout << " ";
	}

	system("pause");
	return 0;
}