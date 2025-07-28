#include <string>
#include <vector>
#include <cctype>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    for(const int& ch : my_string){
        if(isdigit(ch) == true){
            answer += (ch - '0');
        }
    }
    
    return answer;
}