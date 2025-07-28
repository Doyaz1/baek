#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int maxNum = 0;
    int Index = 0;
    
    for(int i = 0; i < array.size(); i++){
        if(maxNum < array[i]){
            maxNum = array[i];
            Index = i;
        }
    }
    answer.push_back(maxNum);
    answer.push_back(Index);
    return answer;
}