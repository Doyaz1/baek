#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int answer = 0;
    int a = 0;
    int b = 0;
    
    while(chicken){
        answer += chicken / 10;
        a += chicken % 10;
        chicken /= 10;
        
        if(a >= 10){
            answer += a / 10;
            a += a / 10;
            a %= 10;
        }
    }
    
    
    return answer;
}