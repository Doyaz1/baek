#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    
    for(const string& str1 : s1){
            for(const string& str2 : s2){
                if(str1 == str2){
                    answer++;
                }
            }
    }
    
    return answer;
}