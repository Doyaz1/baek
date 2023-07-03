#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    answer.push_back(n); // 초기값 n 
    
    while(n != 1){
        if(n % 2 == 0){
            n = n / 2; // 짝수일 경우
        }
        else{
            n = 3 * n + 1;   // 홀수일 경우
        }
        answer.push_back(n); // 초기값이 n인 수열
    }
        
    return answer;
}