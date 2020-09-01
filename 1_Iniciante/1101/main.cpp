#include <iostream>
using namespace std;

main() {
    while (true) {
        int M = 1, N = 1;
        cin >> M >> N;

        if (M <= 0 || N <= 0)
            break;

        int sum = 0;

        if (M > N)
            for (int i = N; i <= M; i++) {
                cout << i << " ";
                sum += i;
            }

        else if (N > M)
            for (int i = M; i <= N; i++) {
                cout << i << " ";
                sum += i;
            }

        cout << "Sum=" << sum << endl;
    }
}
