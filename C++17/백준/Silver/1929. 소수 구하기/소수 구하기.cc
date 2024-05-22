/* 시간초과 
#include <iostream>

using namespace std;

int main(){
    int m, n;
    bool x;

    cin >> m >> n;

    if(m == 2 || n == 2){
        cout << "2" << "\n";
    }

    for(int i = m; i <= n; i++){
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                x = false;
                break;
            }
            x = true;
        }
        if(x){
            cout << i << "\n";
        }
    }

    return 0;
}   */

// 에라토스테네스의 체를 이용한 풀이
#include <iostream>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    bool arr[1000005];

    for (int i = 2; i <= n; i++) {
        arr[i] = true;
    }

    for (int i = 2; i * i <= n; i++) {
        if (arr[i]) {
            for (int j = i * i; j <= n; j += i) {
                arr[j] = false;
            }
        }
    }

    for (int i = m; i <= n; i++) {
        if (arr[i]) {
            cout << i << "\n";
        }
    }

    return 0;
}