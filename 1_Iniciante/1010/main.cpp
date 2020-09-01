#include <iostream>
#include <iomanip>
using namespace std;

main() {
	int cod_peca1, cod_peca2, qtde_peca1, qtde_peca2;
	float valor_peca1, valor_peca2, total_a_pagar;

	cin >> cod_peca1 >> qtde_peca1 >> valor_peca1;
	cin >> cod_peca2 >> qtde_peca2 >> valor_peca2;

	total_a_pagar = (qtde_peca1 * valor_peca1) + (qtde_peca2 * valor_peca2);

	cout << fixed << setprecision(2);
	cout << "VALOR A PAGAR: R$ " << total_a_pagar << endl;

	system("pause");
}