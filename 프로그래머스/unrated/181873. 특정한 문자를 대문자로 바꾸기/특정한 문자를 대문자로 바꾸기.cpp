#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string alp) {
    string answer = my_string;
    
    for(char& c : answer){
        if(c == alp[0]){ //왜 0? => '영소문자 1글자로 이루어진 문자열 alp'
            c = toupper(c);
        }
    }
    
    return answer;
}