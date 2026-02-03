#include <iostream>

using namespace std;

int main() {
    
    int n;
    double sum = 0;
    cin >> n;

    while (n--) {
        double q, y;
        
        cin >> q >> y;

        sum += q * y;

    }
    cout.precision(3);
    cout << fixed;
    cout << sum << endl;

    return 0;
}