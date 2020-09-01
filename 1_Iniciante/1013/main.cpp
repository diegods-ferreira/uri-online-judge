#include <iostream>
#include <math.h>
using namespace std;

main() {
	int a, b, c, maior_ab;

	cin >> a >> b >> c;

	maior_ab = (a + b + abs(a - b)) / 2;

	if (maior_ab > c)
		cout << maior_ab << " eh o maior" << endl;
	else
		cout << c << " eh o maior" << endl;

	system("pause");
}