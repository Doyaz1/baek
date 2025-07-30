#include <string>
#include <vector>

using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
    
    int num1 = stoi(bin1, 0, 2);
    int num2 = stoi(bin2, 0, 2);
    
    int sum = num1 + num2;
    
    if(sum == 0){ return "0";}
    
    while(sum > 0){
        int bit = sum % 2;
        answer = char(bit + '0') + answer;
        sum /= 2;
    }
    
    return answer;
}