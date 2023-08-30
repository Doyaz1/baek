#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    int min = n + 100;
    
    sort(array.begin(), array.end());
    
    for(int i = 0; i < array.size(); i++){
        if(abs(array[i] - n) < min){
            min = abs(array[i] - n);
            answer = array[i];
        }
    }
    
    return answer;
}