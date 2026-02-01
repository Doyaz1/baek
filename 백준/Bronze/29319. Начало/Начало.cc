#include <iostream>

using namespace std;

int main() {
    
    int n, a;
    int sum = 0;
    int max = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a;

        sum += a;

        if (max < a) {
            max = a;
        }

    }

    cout << sum - max;

    return 0;
}