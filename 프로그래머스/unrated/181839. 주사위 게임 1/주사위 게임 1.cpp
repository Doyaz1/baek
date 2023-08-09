#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    if((a % 2 == 1) && (b % 2 == 1)){
        return pow(a, 2) + pow(b, 2);
    }
    
    else if(a % 2 == 1 || b % 2 == 1){
        return 2 * (a + b);
    }
    
    else{
        return abs(a - b);
    }
    
    return answer;
}