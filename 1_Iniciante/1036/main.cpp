#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

main() {
	double a, b, c, delta, raiz1, raiz2;

	cin >> a >> b >> c;

	delta = pow(b, 2) - 4 * a * c;

	if (delta < 0 || a == 0) {
		cout << "Impossivel calcular" << endl;
	}
	else {
		raiz1 = (-b + sqrt(delta)) / (2 * a);
		raiz2 = (-b - sqrt(delta)) / (2 * a);

		cout << fixed << setprecision(5);
		cout << "R1 = " << raiz1 << endl;
		cout << "R2 = " << raiz2 << endl;
	}

	system("pause");
}