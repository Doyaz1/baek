#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    
    vector<string> v = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    while(numbers.length() != 0){
        for(int i = 0; i < v.size(); i++){
            if(numbers.substr(0, v[i].length()) == v[i]){
                answer = answer * 10 + i;
                numbers = numbers.substr(v[i].length());
                break;
            }
        }
    }
    
    return answer;
}