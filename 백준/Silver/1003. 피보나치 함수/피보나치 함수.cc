#include <iostream>

using namespace std;

int fibo[40] = { 0, 1, };

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return fibo[n];
    }
    for (int i = 2; i <= n; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

    return fibo[n];
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        if (n == 0) {
            cout << "1 0\n";
            continue;
        }
        fibonacci(n);
        cout << fibo[n - 1] << " " << fibo[n] << "\n";
    }

    return 0;
}