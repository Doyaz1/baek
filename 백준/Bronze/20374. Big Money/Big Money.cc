#include <iostream>

using namespace std;

int main() {
    double x;
    long long sum = 0;

    while (cin >> x) {
        sum += (long long)(x * 100 + 0.5);
    }

    cout << sum / 100 << '.';
    if (sum % 100 < 10) cout << '0';
    cout << sum % 100;

    return 0;
}