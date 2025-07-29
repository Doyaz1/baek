#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    int seen[26] = {0};
    
    for(const char& ch : s){
        seen[ch - 'a']++;
    }
    
    for(int i = 0; i < 26; i++){
        if(seen[i] == 1){
            answer += (char)(i + 'a');
        }
    }
    
    
    
    return answer;
}