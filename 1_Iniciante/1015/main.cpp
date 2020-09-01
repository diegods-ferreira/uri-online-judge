#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

main() {
	float x1, y1, x2, y2;
	double distancia;

	cin >> x1 >> y1;
	cin >> x2 >> y2;

	distancia = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));

	cout << fixed << setprecision(4);
	cout << distancia << endl;

	system("pause");
}