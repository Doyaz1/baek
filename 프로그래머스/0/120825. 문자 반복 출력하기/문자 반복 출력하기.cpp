#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    
    for(char ms : my_string){
        for(int i = 0; i < n; i++){
            answer += ms;
        }
    }
    
    return answer;
}