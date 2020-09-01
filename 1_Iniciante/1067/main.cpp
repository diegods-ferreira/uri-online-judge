#include <iostream> 
using namespace std;
 
main() {
 
    int entrada;

    cin >> entrada;
    
    for (int i = 1; i <= entrada; i++)
        if (i % 2 != 0)
            cout << i << endl;
 
    system("pause");
}