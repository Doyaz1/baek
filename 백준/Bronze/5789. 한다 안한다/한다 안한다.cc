#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;

    cin >> n;

    while (n--) {
        string s;

        cin >> s;

        int mid = s.size() / 2;
        char left = s[mid - 1];
        char right = s[mid];

        if (left == right) {
            cout << "Do-it" << endl;
        }
        else {
            cout << "Do-it-Not" << endl;
        }
    }
    return 0;
}