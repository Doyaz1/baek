#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    int n = 0;
    
    // isdigit : 숫자 판별
    // isspace : 공백 판별
    // isupper : 대문자 판별 ( tolower, s[i] += 32; 소문자 변환)
    // islower : 소문자 판별 ( toupper, s[i] -= 32; 대문자 변환)
    // isalpha : 알파벳 판별
    
    for(int i = 0; i < my_string.size(); i++){
        if(isdigit(my_string[i])){
            n = n * 10 + my_string[i] - '0';
        }
        else{
            answer += n;
            n = 0;
        }
    }
    
    answer += n;
    
    return answer;
}