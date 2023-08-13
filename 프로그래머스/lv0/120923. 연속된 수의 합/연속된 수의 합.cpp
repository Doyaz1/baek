#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int s = total / num - (num - 1) / 2;
    
    for(int i = 0; i < num; i++){
        answer.push_back(s + i);
    }
    
    return answer;
}