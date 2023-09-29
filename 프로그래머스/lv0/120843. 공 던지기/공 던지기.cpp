#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    int answer_idx = 0;
    
    for(int i = 0; i < k - 1; i++){
        answer_idx += 2;
        answer_idx %= numbers.size();
    }
    answer = numbers[answer_idx];
    
    return answer;
}