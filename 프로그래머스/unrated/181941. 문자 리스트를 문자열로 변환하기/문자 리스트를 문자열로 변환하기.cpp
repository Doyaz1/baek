#include <string>
#include <vector>
#include <sstream>

std::string solution(std::vector<std::string> array){
    std::string result = "";
    std::stringstream s;
    
    //기존 벡터에 접근해서 값을 변경하는 for문
    for(auto i = array.begin(); i != array.end(); i++){
        s << *i;
    }
    result = s.str();
    return result;
}