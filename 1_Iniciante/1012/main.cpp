#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

const double PI = 3.14159;

main() {
	double a, b, c;
	double area_triangulo, area_circulo, area_trapezio, area_quadrado, area_retangulo;

	cin >> a >> b >> c;

	area_triangulo = (a * c) / 2;
	area_circulo = PI * pow(c, 2);
	area_trapezio = ((a + b) * c) / 2;
	area_quadrado = pow(b, 2);
	area_retangulo = a * b;

	cout << fixed << setprecision(3);
	cout << "TRIANGULO: " << area_triangulo << endl;
	cout << "CIRCULO: " << area_circulo << endl;
	cout << "TRAPEZIO: " << area_trapezio << endl;
	cout << "QUADRADO: " << area_quadrado << endl;
	cout << "RETANGULO: " << area_retangulo << endl;

	system("pause");
}
