#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer = num_list;
    int last = answer.back();
    int prev = answer[answer.size() - 2];
    
        if(last > prev){
            answer.push_back(last - prev);
        }
        else{
            answer.push_back(last * 2);
        }
    
    return answer;
}