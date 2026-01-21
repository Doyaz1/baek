#include <iostream>

using namespace std;

int main() {
    int x, y;
    int t1 = 0;
    int t2 = 0;

    cin >> x >> y;

    if (x > y) {
        t1 = x + y;
        cout << t1;
    }
    else {
        t2 = y - x;
        cout << t2;
    }


    return 0;
}