#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    int num = 0;
    int max1 = 0;

    for (int i = 0; i < n; i++) {
        int a, b;

        cin >> a >> b;

        num -= a;
        num += b;

        max1 = max(max1, num);
    }

    cout << max1 << endl; 

    return 0;
}