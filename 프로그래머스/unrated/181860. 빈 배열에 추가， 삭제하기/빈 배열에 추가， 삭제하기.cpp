#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<bool> flag) {
    vector<int> answer;
    
    //list.insert = 추가 / list.erase = 삭제
    // erase 함수와 다르게 insert 함수는 아무것도 반환하지 않음
    for(int i = 0; i < flag.size(); i++){
        if(flag[i]){
            answer.insert(answer.end(), arr[i] * 2, arr[i]);
        }
        
        else{
            answer.erase(answer.end() - arr[i], answer.end());
        }
    }
    return answer;
}