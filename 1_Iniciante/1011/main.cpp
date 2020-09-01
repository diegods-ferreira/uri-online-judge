#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

const double PI = 3.14159;

main() {
	double raio, volume;

	cin >> raio;

	volume = (4.0 / 3) * PI * pow(raio, 3);

	cout << fixed << setprecision(3);
	cout << "VOLUME = " << volume << endl;

	system("pause");
}