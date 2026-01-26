#include <iostream>

using namespace std;

int main() {
    int D, E, Q;
    char op;
    cin >> D >> E;

    for (int i = 0; i < E; i++) {
        cin >> op;
        if (op == '+') {
            cin >> Q;
            D += Q;
        }
        else {
            cin >> Q;
            D -= Q;
        }
    }
    cout << D;
    
    return 0;
}