#include <iostream>

using namespace std;

int main() {
    int a, b;
    int chi;
    int sum = 0;
    int balance = 0;

    cin >> a >> b;
    cin >> chi;

    sum = a + b;

    if (sum < (chi * 2)) {
        cout << sum << endl;
    }
    else {
        balance = sum - (chi * 2);
        cout << balance << endl;
    }
    return 0;
}