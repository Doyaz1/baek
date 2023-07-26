#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    int count = 0;
    
    for(int i = 0; i < myString.size(); i++){
        if(myString[i] == 'x'){
            answer.emplace_back(i - count);
            count = i + 1;
        }
    }
    answer.emplace_back(myString.size() - count);
    return answer;
}