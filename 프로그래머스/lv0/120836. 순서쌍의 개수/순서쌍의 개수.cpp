#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            answer++;
        }
    }
    
    return answer;
}

/* // 내가 짜려했던 코드의 정답
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i = 1; i <= n; i++){
        for(int j = n/i; j >= 1; j--){
            if(i * j == n)  answer++;
        }
    }
    return answer;
}  */