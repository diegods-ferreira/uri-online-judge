#include <iostream>
#include <iomanip>
using namespace std;

main() {
	double renda, imposto_de_renda = 0;

	cin >> renda;

	if (renda > 0 && renda <= 2000)
		imposto_de_renda = 0;

	else if (renda > 2000 && renda <= 3000)
		imposto_de_renda = (renda - 2000) * 0.08;

	else if (renda > 3000 && renda <= 4500)
		imposto_de_renda = (1000 * 0.08) + ((renda - 3000) * 0.18);

	else if (renda > 4500) 
		imposto_de_renda = (1000 * 0.08) + (1500 * 0.18) + ((renda - 4500) * 0.28);


	cout << fixed << setprecision(2);

	if (imposto_de_renda == 0)
		cout << "Isento" << endl;
	else
		cout << "R$ " << imposto_de_renda << endl;

	system("pause");
}