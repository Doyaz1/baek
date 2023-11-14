#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int len = p.size();
    
    for(int i = 0; i <= t.size() - len; i++){
        string temp = t.substr(i, len);
        long tempInt = stol(temp), pInt = stol(p);
        
        if(tempInt <= pInt){
            answer += 1;
        }
    }
    
    return answer;
}