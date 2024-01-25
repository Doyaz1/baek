#include <iostream>

using namespace std;

int main(){

    int a, b, c, d;
    int n, m, x, y, r;

    cin >> a >> b >> c >> d;

    n = x = a*d + b*c;
    m = y = b*d;

    while(y != 0){
        r = x % y;
        x = y;
        y = r;
    }
    
    cout << n/x << " " << m/x << endl;

    return 0;
}