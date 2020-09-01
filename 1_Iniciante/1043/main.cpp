#include <iostream>
#include <iomanip>
using namespace std;

main() {
	double a, b, c, area, perimetro;

	cin >> a >> b >> c;
	cout << fixed << setprecision(1);

	if ((a >= b + c) || (b >= c + a) || (c >= a + b)) {
		area = ((a + b) * c) / 2;
		cout << "Area = " << area << endl;
	}
	else {
		perimetro = a + b + c;
		cout << "Perimetro = " << perimetro << endl;
	}

	system("pause");
}