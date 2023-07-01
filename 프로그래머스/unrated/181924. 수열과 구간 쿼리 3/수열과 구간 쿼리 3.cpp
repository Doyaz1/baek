#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> queries) {
    vector<int> answer;
    
    for(const vector<int>& query : queries){
        int i = query[0];
        int j = query[1];
        
        // 주어진 인덱스 범위를 벗어나면 코드를 실행하지 않고 무시한다.
        if( i >= array.size() || j >= array.size()){
            continue;
        }
        
        // 값 바꾸기
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
    answer = array;
    
    return answer;
}