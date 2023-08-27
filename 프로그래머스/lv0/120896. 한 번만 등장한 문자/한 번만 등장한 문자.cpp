#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int array[26] = {};
    
    for(int i = 0; i < s.size(); i++){
        array[s[i] - 'a']++;
    }
    
    for(int i = 0; i < 26; i++){
        if(array[i] == 1){
            answer += i + 'a';
        }
    }
    
    return answer;
}