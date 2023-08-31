#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    int b = 0;
    for(int a = i; a <= j; a++){
        b = a;
        
        while(b != 0){
            if( b % 10 == k){
                answer++;
            }
        b /= 10;
        }
    }
    
    return answer;
}