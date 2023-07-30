#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {
    vector<int> answer;
    // 첫번째 구간의 시작과 끝
    int start1 = intervals[0][0];
    int end1 = intervals[0][1];
    // 두번째 구간의 시작과 끝
    int start2 = intervals[1][0];
    int end2 = intervals[1][1];
    
    for(int i = start1; i <= end1; i++){
        answer.push_back(arr[i]);
    }
    
    for(int i = start2; i <= end2; i++){
        answer.push_back(arr[i]);
    }
    
    return answer;
}