#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    
    for(int i = l; i <= r; i++){
        string numStr = to_string(i);
        bool num = true;
        
        for(char c : numStr){
            if(c != '0' && c != '5'){
                num = false;
                break;
            }
        }
        if(num){
            answer.push_back(i);
        }
    }
    // 객체가 없을때 -1이 담긴 배열을 리턴
    if(answer.empty()){
        answer.push_back(-1);
    }
    return answer;
}