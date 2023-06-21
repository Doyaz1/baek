#include <string>
       
std::string solution(std::string str1, std::string str2, int s){
    
    str1.replace(s, str2.length(), str2);
    
    return str1;

}
    