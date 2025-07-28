#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int money) {
    vector<int> answer;
    int americano = 5500;
    
    if(money % americano == 0){
        answer.push_back(money / americano);
        answer.push_back(0);
    }
    else if(money % americano != 0){
        answer.push_back(money / americano);
        answer.push_back(money - (americano * (money / americano)));
    }
    
    return answer;
}

// return vector <int> {money / 5500, money % 5500;}