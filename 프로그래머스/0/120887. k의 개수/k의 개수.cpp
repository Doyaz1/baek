#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    
    for(int a = i; a <= j; a++){
        string s1 = to_string(a);
        for(const char& ch : s1){
            if(ch - '0' == k){
                answer++;
            }
        }
    }
    
    return answer;
}