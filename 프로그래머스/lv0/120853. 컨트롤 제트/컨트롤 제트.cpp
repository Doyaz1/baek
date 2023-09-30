#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int prev = 0;
    string temp = "";
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            answer += stoi(temp);
            prev = stoi(temp);
            temp = "";
        }
        else if(s[i] == 'Z'){
            answer -= prev;
            i += 1;
        }
        else{
            temp += s[i];
        }
    }
    
    if(temp.size() > 0){
        answer += stoi(temp);
    }
    
    return answer;
}