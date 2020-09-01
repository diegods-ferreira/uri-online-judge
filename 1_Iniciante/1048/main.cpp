#include <iostream>
#include <iomanip>
using namespace std;

main() {
	float salario, salario_novo, reajuste;
	int percentual;

	cin >> salario;

	if (salario > 0 && salario <= 400)				percentual = 15;
	else if (salario > 400 && salario <= 800)		percentual = 12;
	else if (salario > 800 && salario <= 1200)		percentual = 10;
	else if (salario > 1200 && salario <= 2000)		percentual = 7;
	else if (salario > 2000)						percentual = 4;


	reajuste = salario * ((float) percentual / 100);
	salario_novo = salario + reajuste;


	cout << fixed << setprecision(2);
	cout << "Novo salario: " << salario_novo << endl;
	cout << "Reajuste ganho: " << reajuste << endl;
	cout << "Em percentual: " << percentual << " %" << endl;

	system("pause");
}