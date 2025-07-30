#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s) {
    int answer = 0;
    int last = 0;
    
    istringstream iss(s);
    string token;
    
    while(iss >> token){
        if(token == "Z"){
            answer -= last;
        }else{
            last = stoi(token);
            answer += last;
        }
    }
    
    return answer;
}