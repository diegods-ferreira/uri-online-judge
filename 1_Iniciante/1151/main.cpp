#include <iostream>
using namespace std;

int fibonacci(int);

main() {
	int n;
	cin >> n;

	if (n > 1 && n < 46) {
		for (int i = 0; i < n; i++) {
			if (i > 0) {
				cout << ' ';
			}

			cout << fibonacci(i);
		}
		cout << endl;
	}

	system("pause");
}

int fibonacci(int n) {
	if (n == 0) {
		return 0;
	}
	else if (n == 1 || n == 2) {
		return 1;
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}