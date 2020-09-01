#include <iostream>
using namespace std;

main() {
	int idade, dias = 0, meses = 0, anos = 0;

	cin >> idade;

	anos = (int) idade / 365;
	meses = (int) (idade % 365) / 30;
	dias = (int) (idade % 365) % 30;

	cout << anos << " ano(s)" << endl;
	cout << meses << " mes(es)" << endl;
	cout << dias << " dia(s)" << endl;

	system("pause");
}
