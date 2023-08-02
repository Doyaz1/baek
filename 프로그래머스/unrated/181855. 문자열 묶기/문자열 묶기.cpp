#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> strArr) {
    int cnt[31]{};
    
    for(const auto& s : strArr){
        cnt[s.size()]++;
    }
    //cnt 범위중 최댓값을 리턴
    //min_element : 최솟값
    return *max_element(cnt, cnt + 31);
}