#include <iostream>

using namespace std;

int main() {
    
    int a, b, c;
    int sum = 0;

    cin >> a >> b;

    while (a--) {
        cin >> c;

        sum += c;
    }

    cout << sum;

    return 0;
}