#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    int sumS = 0;
    int sumM = 0;
    int sumL = 0;
    
    for (int i = 0; i < n; i++) {
        char size;
        int slices;
        cin >> size >> slices;

        if (size == 'S') {
            sumS += slices;
        } else if (size == 'M') {
            sumM += slices;
        } else if (size == 'L') {
            sumL += slices;
        }
    }

    int boxes = 0;

    boxes += (sumS + 6 - 1) / 6;
    boxes += (sumM + 8 - 1) / 8;
    boxes += (sumL + 12 - 1) / 12;

    cout << boxes << endl;

    return 0;
    
    
}