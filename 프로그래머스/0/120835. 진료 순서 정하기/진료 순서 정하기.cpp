#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    vector<int> sorted = emergency;

    sort(sorted.begin(), sorted.end(), greater<int>());
    
    unordered_map<int, int> num;
    for(int i = 0; i < sorted.size(); i++){
        num[sorted[i]] = i + 1;
    }
    for(const int& e : emergency){
        answer.push_back(num[e]);
    }
    
    
    return answer;
}

// 처음 생각해낸 접근 방법은 내림차순으로 정리 후 인덱스 위치 값 받기?
