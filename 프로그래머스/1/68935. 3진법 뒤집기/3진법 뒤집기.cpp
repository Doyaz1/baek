#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int temp = n;
    
    vector<int> three;
    
    while(temp){
        three.push_back(temp % 3);
        temp /= 3;
    }
    
    int m = 1;
    
    for(int i = three.size() - 1; i >= 0; i--){
        answer += three[i] * m;
        m *= 3;
    }
    
    return answer;
}