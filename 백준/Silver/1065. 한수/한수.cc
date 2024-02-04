#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 99;

    if(n <= 99) {
        cout << n;
        return 0;
    }

    for(int i = 100; i <= n; i++) {
        int fir = i / 100;
        int sec = (i / 10) % 10;
        int thi = i % 10;

        if(fir - sec == sec - thi) {
            cnt++;
        }
    }

    cout << cnt;
}