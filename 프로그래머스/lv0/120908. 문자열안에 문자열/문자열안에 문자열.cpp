#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    
    for(int i = 0; i < str1.size(); i++){
        if(str1.find(str2) != std::string::npos){
            answer = 1;
        }
        else{
            answer = 2;
        }
    }
    
    return answer;
}