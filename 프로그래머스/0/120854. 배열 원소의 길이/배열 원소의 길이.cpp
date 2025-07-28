#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> strlist) {
    vector<int> answer;
    
    for(const string& str1 : strlist){
        answer.push_back(str1.size());
    }
    
    return answer;
}