#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;
    int right = -1;
    int left = -1;
    
    for(int i = 0; i < str_list.size(); i++){
        if(str_list[i] == "l"){
            left = i;
            break;
        }
        
        else if(str_list[i] == "r"){
            right = i;
            break;
        }
    }
    
    if(left != -1 && right == -1){
        answer.insert(answer.begin(), str_list.begin(), str_list.begin() + left);
    }
    
    else if(left == -1 && right != -1){
        answer.insert(answer.begin(), str_list.begin() + right + 1, str_list.end());
    }
    
    return answer;
}