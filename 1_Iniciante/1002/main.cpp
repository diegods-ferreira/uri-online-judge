#include <iostream>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main() {

	/*
		ID DO PROBLEMA 1002
	*/
 
    const double Pi = 3.14159;
    double raio, area;

    //cout << " - Entre com o raio da circunferencia: ";
    cin >> raio;

    area = Pi * pow(raio, 2);

    cout << fixed << setprecision(4);
    cout << "A=" << area << endl;

    system("pause"); 
    return 0;
}