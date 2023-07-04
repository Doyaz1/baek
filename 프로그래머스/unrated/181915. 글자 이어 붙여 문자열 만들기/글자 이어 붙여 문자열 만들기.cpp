#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> index_list) {
    string answer = "";
    
    for(int index : index_list){
        if(index >= my_string.size()){
            continue;
        }
        answer += my_string[index];
    }
    return answer;
}