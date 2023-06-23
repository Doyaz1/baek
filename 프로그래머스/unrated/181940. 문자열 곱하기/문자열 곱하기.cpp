#include <iostream>
#include <string>
#include <vector>


std::string solution(std::string str1, int k) {
    std::string answer = "";
    
    for(int i = 0; i < k; i++){
        answer += str1;
    }
    return answer;
}