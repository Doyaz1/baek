#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int arr[5];
    int sum = 0;
    int m = 0;
    
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    
    sort(arr, arr + 5);
    
    m = arr[2];
    
    cout << sum / 5 << endl;
    cout << m << endl;
    
    return 0;
}