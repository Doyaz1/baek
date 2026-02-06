#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, m;

    while (cin >> n >> m) {
        if (n == 0 && m == 0) {
            break;
        }
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int s = m / n;
        int sum = 0;

        for (int i : v) {
            sum += min(i, s);
        }
        cout << sum << endl;

    }


    return 0;
}