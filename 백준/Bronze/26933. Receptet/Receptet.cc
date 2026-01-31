#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int n;
    int h, b, k;
    int sum = 0;

    cin >> n;

    while (n--) {
        cin >> h >> b >> k;
        
        if (h < b) {
            sum += (b - h) * k;
        }

    }

    cout << sum;

    return 0;
}