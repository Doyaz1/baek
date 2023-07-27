#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string binomial) {
    int answer = 0;
    stringstream str(binomial);
    int a, b;
    string op;
    
    str >> a >> op >> b;
    
    answer = (op == "+" ? a + b : op == "-" ? a - b : a * b);
    
    return answer;
}