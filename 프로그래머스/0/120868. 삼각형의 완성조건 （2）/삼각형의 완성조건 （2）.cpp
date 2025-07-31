#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int a = sides[0];
    int b = sides[1];
    
    return (a + b - 1) - abs(a - b);
}