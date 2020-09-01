#include <iostream>
#include <iomanip>
using namespace std;

main() {
	float nota1, nota2;
	float peso_nota1 = 3.5, peso_nota2 = 7.5;
	double media;

	cin >> nota1;
	cin >> nota2;

	media = ((nota1 * peso_nota1) + (nota2 * peso_nota2)) / (peso_nota1 + peso_nota2);

	cout << fixed << setprecision(5);
	cout << "MEDIA = " << media << endl;

	system("pause");
}