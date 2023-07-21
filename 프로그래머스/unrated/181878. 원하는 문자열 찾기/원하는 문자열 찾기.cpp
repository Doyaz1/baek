#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    
    int mysize = myString.size();
    int patsize = pat.size();
    
    for(int i = 0; i <= mysize - patsize; i++){
        bool match = true;
        
        //pat 문자와 myStirng의 해당 위치의 문자를 소문자로 변환 후 비교
        for(int j = 0; j < patsize; j++){
            if(tolower(myString[i + j]) != tolower(pat[j])){
                match = false; // 일치하지 않으면 false 후 종료
                break;
            }
        }
        if(match){
            answer = 1;
        }
    }
    
    return answer;
}