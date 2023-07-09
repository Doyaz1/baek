#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c) {
    string answer = "";
    
    // m개의 길이만큼 쪼개서 c번째의 글자들만 모은다
    /* ex)  1 2 3 4
            i h r h
            b a k r
            f p n d
            o p l j
            h y g c */
    for(int i = 0; i < my_string.size(); i++){
        if(i % m + 1 == c)
            answer.push_back(my_string[i]);
    }
    
    return answer;
}