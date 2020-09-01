#include <iostream>
using namespace std;

const int DISTANCIA_ALCANCADA_CARROY_UMA_HORA = 30;
const int SESSENTA_MINUTOS = 60;

main() {
	int distancia;

	cin >> distancia;

	float distancia_por_minuto;
	int tempo_levado;

	// Calculando quanto o carro y se distancia do carro x por minuto...
	distancia_por_minuto = (float) DISTANCIA_ALCANCADA_CARROY_UMA_HORA / SESSENTA_MINUTOS;

	tempo_levado = (int) distancia / distancia_por_minuto;

	cout << tempo_levado << " minutos" << endl;

	system("pause");
}