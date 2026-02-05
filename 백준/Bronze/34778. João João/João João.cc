#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    
    bool exist[5] = { false };
    int n;

    for (int i = 0; i < 10; i++) {
        cin >> n;
        exist[n] = true;
    }

    int answer = 0;
    for (int i = 1; i <= 4; i++) {
        if (!exist[i]) {
            answer++;
        }
    }

    cout << answer << endl;

    

    return 0;
}