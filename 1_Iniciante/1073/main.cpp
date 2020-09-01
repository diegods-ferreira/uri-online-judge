#include <iostream>
#include <math.h>
using namespace std;
 
main() {
 
    int entrada;
    
    cin >> entrada;
    
    if (entrada > 5 && entrada < 2000)
	    for (int i = 1; i <= entrada; i++) {
	        if (i % 2 == 0) {
	            int quadrado = pow(i, 2);
	            cout << i << "^2 = " << quadrado << endl;
	        }
	    }
 
 	system("pause");
}