#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    int slices = lcm(n, 6);
    
    answer = slices / 6;
    
    return answer;
}