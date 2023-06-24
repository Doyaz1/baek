#include <iostream>
#include <string>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    string A = to_string(a);
    string B = to_string(b);
    
    
    if(stoi(A + B) >= 2 * a * b){
        answer = stoi(A + B);
    }
    
    else{
        answer = 2 * a * b;
    }
    
    return answer;
}

int main(void){
    int n1, n2;
    
    cin >> n1 >> n2;
    
    cout << solution(n1, n2);
    
    return 0;
}