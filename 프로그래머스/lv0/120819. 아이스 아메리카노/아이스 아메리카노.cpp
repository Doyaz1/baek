#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    vector<int> answer;
    int price = 5500;
    int num1 = money / price;
    int num2 = money % price;
    
    answer.push_back(num1);
    answer.push_back(num2);
    
    return answer;
}