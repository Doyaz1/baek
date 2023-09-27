#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string letter) {
    string answer = "";
    vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    vector<string> temp;
    string temp_str = "";
    
    for(int i = 0; i < letter.size(); i++){
        if(letter[i] != ' '){
            temp_str += letter[i];
        }
        else{
            temp.push_back(temp_str);
            temp_str = "";
        }
    }
    temp.push_back(temp_str);
    
    for(auto& v : temp){
        auto a = find(morse.begin(), morse.end(), v);
        if( a != temp.end()){
            answer += char(a - morse.begin() + 97);
        }
    }
    
    return answer;
}