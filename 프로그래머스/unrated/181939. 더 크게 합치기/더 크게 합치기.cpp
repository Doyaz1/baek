#include <string>
#include <vector>

int solution(int a, int b) {
    int answer = 0;
    std::string a_str = std::to_string(a);
    std::string b_str = std::to_string(b);
    
    std::string a_b = a_str + b_str;
    std::string b_a = b_str + a_str;
    
    //stoi(string to int)는 string을 int로 바꿔주는 코드
    // 예) string"123"을 정수 123으로
    if(a_b > b_a){
        answer = stoi(a_b);
    }
    else{
        answer = stoi(b_a);
    }
    
    return answer;
}