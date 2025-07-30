#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    int close = array[0];
    int min = abs(array[0] - n);
    
    for(int i = 1; i < array.size(); i++){
        int num = abs(array[i] - n);
        if(num < min){
            min = num;
            close = array[i];
        }
        else if(num == min && array[i] < close){
            close = array[i];
        }
    }
    answer = close;
    
    return answer;
}


