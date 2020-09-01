#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
using namespace std;

main() {
	string nome;
	double salario_fixo, valor_total_vendas, total_a_receber;

	cin >> nome;
	cin >> salario_fixo;
	cin >> valor_total_vendas;

	total_a_receber = salario_fixo + (valor_total_vendas * 0.15);

	cout << fixed << setprecision(2);
	cout << "TOTAL = R$ " << total_a_receber << endl;

	system("pause");
}