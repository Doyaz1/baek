#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer(arr.begin(), arr.end());
    
    for(int i = 0; i < arr.size(); i++){
        if(k % 2 == 0){
            answer[i] = arr[i] + k;
        }
        else{
            answer[i] = arr[i] * k;
        }
    }
    
    return answer;
}