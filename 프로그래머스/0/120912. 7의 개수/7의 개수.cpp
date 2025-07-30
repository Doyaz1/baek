#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    
    for(const int& num : array){
        string s = to_string(num);
        for(const char& ch : s){
            if(ch == '7'){
                answer++;
            }
        }
    }
    
    return answer;
}