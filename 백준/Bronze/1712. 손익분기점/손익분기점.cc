#include <iostream>

int main(){
    int a, b, c;
    
    std::cin >> a >> b >> c;
    
    int ret = -1;
    if(c > b){
         ret = a / (c - b) + 1;
    }
    std::cout << ret;
}