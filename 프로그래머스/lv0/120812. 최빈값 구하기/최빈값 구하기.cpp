#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int ary[1001] = {0, };
    
    for(int i = 0; i < array.size(); i++){
        ary[array[i]]++;
    }
    
    int max = 0;
    int max_index = 0;
    
    for(int i = 0; i < 1001; i++){
        if(ary[i] > max){
            max = ary[i];
            max_index = i;
        }
    }
    
    int count = 0;
    
    for(int i = 0; i < 1001; i++){
        if(ary[i] == max){
            count++;
        }
    }
    
    if(count > 1){
        return -1;
    }
    
    answer = max_index;
    
    return answer;
}