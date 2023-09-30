#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int a = 2;
    
    while(n > 1){
        if(n % a == 0){
            answer.emplace_back(a);
            while(n % a == 0){
                n /= a;
            }
        }
        a++;
    }
    
    return answer;
}