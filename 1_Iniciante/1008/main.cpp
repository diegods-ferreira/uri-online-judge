#include <iostream>
#include <iomanip>
using namespace std;

main() {
	int matricula, horas_trabalhadas;
	float valor_hora;

	cin >> matricula;
	cin >> horas_trabalhadas;
	cin >> valor_hora;

	cout << "NUMBER = " << matricula << endl;
	cout << fixed << setprecision(2);
	cout << "SALARY = U$ " << (horas_trabalhadas * valor_hora) << endl;

	system("pause");
}