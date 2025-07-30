#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    string num = "";
    
    for(const char& ch : my_string){
        if(isdigit(ch)){    // 문자열이 숫자가 있다면
            num += ch;      // num에 저장
        }else{
            if(!num.empty()){   // 만약 문자형의 숫자가 있다면
                answer += stoi(num);    // answer에 저장
                num = "";
            }
        }
    }
    if(!num.empty()){
        answer += stoi(num);
    }
    
    return answer;
}