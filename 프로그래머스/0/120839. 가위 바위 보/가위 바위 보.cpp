#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string answer = "";
    char rock = '0';
    char scissors = '2';
    char paper = '5';
    
    
    for(const char& orsp : rsp){
        if(orsp == rock){
            answer += paper;
        }
        else if(orsp == scissors){
            answer += rock;
        }
        else if(orsp == paper){
            answer += scissors;
        }
    }
    
    return answer;
}