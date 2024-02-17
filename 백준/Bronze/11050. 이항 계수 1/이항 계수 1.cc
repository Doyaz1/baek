#include <iostream>

using namespace std;
 
int main(){
    int a, b, ans = 1;
    
    cin >> a >> b;
    
    for(int i = a; i > a - b; i--){
        ans *= i;
    }
    
    for(int i = 1; i <= b; i++){
        ans /= i;
    }
    
    cout << ans;
    
    return 0;
}
