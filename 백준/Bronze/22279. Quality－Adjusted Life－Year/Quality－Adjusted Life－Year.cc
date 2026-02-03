#include <iostream>
#include <iomanip>

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
    cout << fixed << setprecision(3) << sum;

    return 0;
}