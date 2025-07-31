#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    int ball = 0;
    
    for(int i = 0; i < k; i++){
        answer = numbers[2*(k -1) % numbers.size()];   
    }
    
    
    return answer;
}