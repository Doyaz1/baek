// 다시 풀어보고 이해하기 

#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    int answer = -1;
    
    // 1. A와 B의 길이가 다르면 -1
    if(A.size() != B.size()){
        return answer;
    }
    // A를 오른쪽으로 한 칸씩 밀면서 B와 일치하는지 확인
    for(int i = 0; i < A.size(); i++){
        if(A == B){
            return i; // A와 B가 일치하는 경우 현재까지의 밀기 횟수 반환 --> 왜? (입출력 예 #3에 조건)
        }
        // A의 마지막 문자를 맨 앞으로 이동
        char LastChar = A.back();
        A.pop_back();
        A = LastChar + A;
    }
    // 반복이 종료되고도 A와 B가 일치하는 경우 0 반환
    if(A == B){
        return 0;
    }
    
    
    return answer;
}