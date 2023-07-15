#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    
    for(int i = n; i < num_list.size(); i++){
        answer.push_back(num_list[i]);
    }
    
    for(int i = 0; i < n; i++){
        answer.push_back(num_list[i]);
    }
    
    return answer;
}

/*
다른 풀이
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

rotate 함수
지정된 횟수 만큼 오른쪽으로 회전시키거나 왼쪽으로 회전시킬 수 있다.
다만, 회전 시킬 때마다 원소들간 swap이 일어남.


vector<int> solution(vector<int> num_list, int n) {    
    rotate(num_list.begin(),num_list.begin() + n,num_list.end());        
    return num_list;
} */