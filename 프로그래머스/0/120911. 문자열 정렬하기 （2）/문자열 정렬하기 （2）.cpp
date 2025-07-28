#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for(const char& ch : my_string){
        answer += tolower(ch);
    }
    
    sort(answer.begin(), answer.end());
    
    return answer;
}