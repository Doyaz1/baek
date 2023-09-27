#include <string>
#include <vector>

using namespace std;

int FactorialLoop(int n){
    int answer = 1;
    
    for(int i = 1; i <= n; i++){
        answer *= i;
    }
    
    return answer;
}


int solution(int n) {
    int answer = 1;
    
    for(int i = 1; i <= n; i++){
        if(FactorialLoop(i) <= n){
            answer = i;
        }
        else{
            break;
        }
    }
    
    return answer;
}