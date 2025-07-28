#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    
    sort(numbers.begin(), numbers.end());
    
    int size = numbers.size();
    int a = numbers[size - 1] * numbers[size - 2];
    int b = numbers[0] * numbers[1];
    
    answer = max(a, b);
    

    
    return answer;
}