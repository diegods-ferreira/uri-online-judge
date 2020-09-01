#include <iostream>
#include <iomanip>
using namespace std;

const int KM_POR_LITRO = 12;

main() {
	int tempo_viagem, velocidade_media, distancia_percorrida;
	double litros_combustivel_necessarios;

	cin >> tempo_viagem;
	cin >> velocidade_media;

	distancia_percorrida = tempo_viagem * velocidade_media;

	litros_combustivel_necessarios = (double) distancia_percorrida / KM_POR_LITRO;

	cout << fixed << setprecision(3);
	cout << litros_combustivel_necessarios << endl;

	system("pause");
}