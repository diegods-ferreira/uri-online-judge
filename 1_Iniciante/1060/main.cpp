#include <iostream>
#include <iomanip>
using namespace std;

main() {
	float entrada[6], soma_valores_positivos = 0, media = 0;
	int valores_positivos = 0;

	for (int i = 0; i < 6; i++) {
		cin >> entrada[i];

		if (entrada[i] > 0) {
			valores_positivos++;
			soma_valores_positivos += entrada[i];
		}
	}

	media = soma_valores_positivos / valores_positivos;

	cout << valores_positivos << " valores positivos" << endl;
	cout << fixed << setprecision(1);
	cout << media << endl;

	system("pause");
}