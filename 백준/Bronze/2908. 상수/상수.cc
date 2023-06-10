// 6월 10일 2908번 상수 (C++)
#include <iostream>
#include <string>

int main(){

    std::string max;
    std::string a, b;

    std::cin >> a >> b;

    for(int i = 2; i >= 0; i--){
        if(a[i] > b[i]){
            max = a;
            break;
        }
        
        else if(a[i] < b[i]){
            max = b;
            break;
        }
    }

    for(int i = 2; i >= 0; i--){
        std::cout << max[i];
    }
    return 0;
}