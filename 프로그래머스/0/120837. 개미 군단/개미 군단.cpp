#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = 0;
    int ant1 = 5;
    int ant2 = 3;
    int ant3 = 1;
    
    
    answer += hp / ant1;
    hp %= ant1;
    
    answer += hp / ant2;
    hp %= ant2;
    
    answer += hp / ant3;
    hp %= ant3;
    
    return answer;
}