#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;

    long long score = 0;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;  

        for (char c : s) {
            switch (c) {
            case 'A': 
                score += 4; 
                break;
            case 'K': 
                score += 3; 
                break;
            case 'Q': 
                score += 2; 
                break;
            case 'J': 
                score += 1; 
                break;
            }
        }
    }

    cout << score << '\n';
    return 0;
}