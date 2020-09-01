#include <iostream>
#include <iomanip>
using namespace std;

main() {
	int distancia_percorrida;
	double combustivel_gasto, consumo_medio;

	cin >> distancia_percorrida;
	cin >> combustivel_gasto;

	consumo_medio = distancia_percorrida / combustivel_gasto;

	cout << fixed << setprecision(3);
	cout << consumo_medio << " km/l" << endl;

	system("pause");
}