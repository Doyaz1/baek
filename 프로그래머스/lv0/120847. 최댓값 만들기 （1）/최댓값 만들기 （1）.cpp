#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int max = 0;
    
    
    for(int i = 0; i < numbers.size() - 1; i++){
        for(int j = i + 1; j < numbers.size(); j++){
            if(max < numbers[i] * numbers[j]){
                max = numbers[i] * numbers[j];
            }
        }
    }    
    return max;
}