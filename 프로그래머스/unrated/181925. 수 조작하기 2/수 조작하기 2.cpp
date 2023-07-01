#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    string str = "wasd";
    
    for(int i = 1; i < numLog.size(); i++){
        int num = numLog[i] - numLog[i - 1];
        char s;
        
        if(num == 1){
            s = 'w';
        }
        else if(num == -1){
            s = 's';
        }
        else if(num == 10){
            s = 'd';
        }
        else if(num == -10){
            s = 'a';
        }
        
        answer += s;
    }
    
    return answer;
}