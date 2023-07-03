#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> stk;
    
    for(int i = 0; i < arr.size();){
        if(stk.empty() || stk.back() < arr[i]){
            stk.push_back(arr[i]);
            i++;
        }
        else{
            stk.pop_back(); // stk의 마지막 원소를 제거
        }
    }
    
    return stk;
}