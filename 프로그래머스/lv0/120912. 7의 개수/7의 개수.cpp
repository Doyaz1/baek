#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    
    for(int i = 0; i < array.size(); i++){
        //10씩 나눴을 때 나머지가 7이 되면 +1, 0이 되기 전까지 반복
        while(array[i] != 0){
            if(array[i] % 10 == 7){
                answer++;
            }
            array[i] /= 10;
        }
    }
    
    return answer;
}