#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    
    my_string.erase(remove(my_string.begin(), my_string.end(), letter[0]), my_string.end());
    
    return my_string;
}

/* #include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    
    for(int i = 0; i < my_string.size(); i++){
        if(my_string[i] == letter[0]){
            continue;
        }
        answer.push_back(my_string[i]);
    }
    
    return answer;
} */