#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    
    int n;

    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        v.push_back(b - a);
    }

    int cur = 0;
    int ans = 0;

    for (int x : v) {
        cur += x;
        ans = max(ans, cur);
    }

    cout << ans << endl;

    return 0;
}