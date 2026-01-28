#include <iostream>

using namespace std;

int main() {
    int w, n;
    // 1마일은 5280 피트

    cin >> w >> n;

    int water = (w * 5280) / n;

    cout << water << endl;

    return 0;
}