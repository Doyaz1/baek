#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    string tmp = "";
    vector<string> arr = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    for(auto c : s){
        if(isdigit(c)){
            answer = answer * 10 + c - '0'; // 숫자면
        }
        
        else{
            tmp.push_back(c);   // 아니면 임시 판별하는 문자열에 담기
        }
        
        for(int i = 0; i <= 9; i++){
            if(arr[i] == tmp){
                answer = answer * 10 + i; 
                tmp = "";
                break;
            }
        }
    }
    
    
    return answer;
}