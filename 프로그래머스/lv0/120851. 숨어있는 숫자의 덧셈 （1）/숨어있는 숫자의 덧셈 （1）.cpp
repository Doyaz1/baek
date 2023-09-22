#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    for(int i = 0; i < my_string.size(); i++){
        auto character = my_string[i];
        if(isdigit(character)){
            answer += int(character) - '0';
        }
    }
    
    return answer;
}