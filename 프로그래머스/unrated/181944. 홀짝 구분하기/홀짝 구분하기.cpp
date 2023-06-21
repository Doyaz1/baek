#include <iostream>

int main(){
    
    int a;
    
    std::cin >> a;
    
    
    if((a % 2) == 0)
        std::cout << a << " "<< "is even";
    
    else if((a % 2) == 1)
        std::cout << a << " "<< "is odd";
        
    return 0;
}