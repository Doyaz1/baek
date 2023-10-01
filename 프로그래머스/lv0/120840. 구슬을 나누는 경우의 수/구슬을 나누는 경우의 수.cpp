#include <string>
#include <vector>

using namespace std;

int combl(int n, int r){
    if(r == 0){
        return 1;
    }
    else if(n == 1){
        return 1;
    }
    
    else if(r >= n){
        return 1;
    }
    
    return combl(n-1, r) + combl(n - 1, r - 1);
}

int solution(int balls, int share) {
    int answer = 0;
    
    answer = combl(balls, share);
    
    return answer;
}