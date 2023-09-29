#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int binary_string_toint(string bin){
    int bin_num = 0;
    for(int i = 0; i < bin.size(); i++){
        bin_num += (bin[i] - '0') * pow(2, (bin.size() - i - 1));
    }
    return bin_num;
}

string solution(string bin1, string bin2) {
    string answer = "";
    int bin1_num = binary_string_toint(bin1);
    int bin2_num = binary_string_toint(bin2);
    int sum = bin1_num + bin2_num;
    
    // 이진수로 바꾸기
    while(true){
        int remain = sum % 2;
        answer += remain + '0';
        sum /= 2;
        
        if(sum == 0){
            break;
        }
    }
    reverse(answer.begin(), answer.end());
    
    return answer;
}