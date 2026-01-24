#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    double a, b, x, y;
    
    cin >> t;

    while (t--) {
        int score1 = 0;
        int score2 = 0;

        for (int j = 0; j < 3; j++) {
            cin >> a >> b;      // p1

            double result = sqrt(a * a + b * b);

            if (result <= 3) {
                score1 += 100;
            }
            else if (result <= 6) {
                score1 += 80;
            }
            else if (result <= 9) {
                score1 += 60;
            }
            else if (result <= 12) {
                score1 += 40;
            }
            else if (result <= 15) {
                score1 += 20;
            }
            else {
                score1 += 0;
            }
        }

        for (int j = 0; j < 3; j++) {
            cin >> x >> y;      // p2

            double result = sqrt(x * x + y * y);

            if (result <= 3) {
                score2 += 100;
            }
            else if (result <= 6) {
                score2 += 80;
            }
            else if (result <= 9) {
                score2 += 60;
            }
            else if (result <= 12) {
                score2 += 40;
            }
            else if (result <= 15) {
                score2 += 20;
            }
            else {
                score2 += 0;
            }
        }
        cout << "SCORE: " << score1 << " to " << score2 << ", ";

        if (score1 > score2) {
            cout << "PLAYER 1 WINS." << endl;
        }
        else if (score1 < score2) {
            cout << "PLAYER 2 WINS." << endl;
        }
        else {
            cout << "TIE." << endl;
        }
    }
    return 0;
}