#include <iostream>

using namespace std;

int main() {
    int n, m;
    int a, b, c;

    cin >> n >> m;
    
    int min = 1000000;

    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;

        int cost = a + b + (c * m);
        
        if (cost < min) {
            min = cost;
        }
    }

    cout << min;


    return 0;
}