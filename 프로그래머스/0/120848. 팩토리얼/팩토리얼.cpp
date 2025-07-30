#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    int num = 1;
    
    while(true){
        if(answer > n){
            break;
        }
        num++;
        answer *= num;
    }
    
    return num-1;
}