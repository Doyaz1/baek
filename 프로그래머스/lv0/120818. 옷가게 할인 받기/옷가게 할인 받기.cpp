#include <string>
#include <vector>

using namespace std;

int solution(int price) {

    if(500000 <= price){
        return price * 0.8;
    }
    
    else if(300000 <= price){
        return price * 0.9;
    }
    
    else if(100000 <= price){
        return price * 0.95;
    }
    
    return price;
}