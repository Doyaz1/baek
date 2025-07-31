#include <string>
#include <vector>
#include <sstream>
using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    stringstream ss(my_string);
    
    int num;
    char op;
    
    ss >> answer;
    
    while(ss >> op >> num){
        if(op == '+'){
            answer += num;
        }
        else if(op == '-'){
            answer -= num;
        }   
    }
    
    return answer;
}