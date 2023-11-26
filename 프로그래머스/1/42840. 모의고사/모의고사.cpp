/* #include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<vector<int>> math{ {1,2,3,4,5}, {2,1,2,3,2,4,2,5}, {3,3,1,1,2,2,4,4,5,5} };
    vector<int> count = {0, 0, 0};
    
    for(int i = 0; i < answer.size(); i++){
        if (answers[i] == math[0][i % math[0].size()])    count[0]++;
        if (answers[i] == math[1][i % math[1].size()])    count[1]++;
        if (answers[i] == math[2][i % math[2].size()])    count[2]++;
    }
    
    int max = *max_element(count.begin(), count.end());
    
    for(int i = 0; i < 3; i++){
        if(max == count[i]){
            answer.push_back(i + 1);
        }
    }
    
    return answer;
}

*/

#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int len = answers.size();

    int one[5] = {1, 2, 3, 4, 5};
    int two[8] = {2, 1, 2, 3, 2, 4, 2, 5};
    int thr[10] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    int oneCnt = 0;
    int twoCnt = 0;
    int thrCnt = 0;
    
    for(int i=0; i<len; i++){
        if(one[i%5] == answers[i]) oneCnt++;
        if(two[i%8] == answers[i]) twoCnt++;
        if(thr[i%10] == answers[i]) thrCnt++;            
    }

    int maxCnt = max(oneCnt, twoCnt);
    maxCnt = max(maxCnt, thrCnt);

    if(maxCnt == oneCnt) answer.push_back(1);
    if(maxCnt == twoCnt) answer.push_back(2);
    if(maxCnt == thrCnt) answer.push_back(3);

    return answer;
}
    
