#include <iostream>
using namespace std;

main() {
	int a, b, modulo;

	cin >> a >> b;

	if (a > b)
		modulo = a % b;
	else if (b > a)
		modulo = b % a;
	else
		modulo = 0;


	if (modulo == 0)
		cout << "Sao Multiplos" << endl;
	else
		cout << "Nao sao Multiplos" << endl;

	system("pause");
}