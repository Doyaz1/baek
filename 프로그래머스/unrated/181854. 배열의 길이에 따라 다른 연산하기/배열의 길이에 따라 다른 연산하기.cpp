#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int> answer = arr;
    
    for(int i = 1; i < answer.size(); i += 2){
        if(arr.size() % 2 == 0){
            answer[i] += n;
        }
    }
    
    for(int i = 0; i < answer.size(); i += 2){
        if(arr.size() % 2 == 1){
            answer[i] += n;
        }
    }
    
    return answer;
}