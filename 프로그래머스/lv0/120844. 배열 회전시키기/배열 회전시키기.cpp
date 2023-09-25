#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer;
    
    if(direction == "right"){
        int last = numbers[numbers.size() - 1];
        answer.push_back(last);
        
        for(int i = 0; i < numbers.size() - 1; i++){
            answer.push_back(numbers[i]);
        }
    }
    
    else{
        int first = numbers[0];
        for(int i = 1; i < numbers.size(); i++){
            answer.push_back(numbers[i]);    
        }
        answer.push_back(first);
    }
    
    return answer;
}