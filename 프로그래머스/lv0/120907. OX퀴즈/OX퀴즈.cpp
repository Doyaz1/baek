#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    
    for (string s: quiz) {
        
        std::istringstream iss(s);
        int x, y, z;
        char op, eq;
        
        iss >> x >> op >> y >> eq >> z;
        
        if(op == '+') {
            if(x + y == z) {
                answer.push_back("O");
            } else {
                answer.push_back("X");
            }
        } else if(op == '-') {
            if(x - y == z) {
                answer.push_back("O");
            } else {
                answer.push_back("X");
            }
        }
    }
    return answer;
}