#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";
    // 범위는 my_string 만큼 / false면 종료
    vector<bool> remove(my_string.size(), false);
    
    for(int i : indices){
        remove[i] = true;
    }
    
    for(int i = 0; i < my_string.size(); i++){
        if(!remove[i]){
            answer += my_string[i];
        }
    }
    
    return answer;
}