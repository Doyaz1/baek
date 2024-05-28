// 큰 수의 덧셈은 배열, 문자열 두 방법을 이용해 풀 수 있다.
// 문자열
#include <iostream>
#include <string>

using namespace std;
/* size() 함수는 컨테이너의 크기를 반환하는 함수이며, 표준 라이브러리에서 제공되는 함수로
벡터, 리스트, 배영 들의 컨테이너에서 사용할 수 있다.

length() 함수는 주로 문자열 객체인 string 클래스에서 사용되며, 해당 문자열의 길이를 변환하는
역학ㄹ을 한다. length() 함수는 문자열의 실제 길이를 구하는 데 사용된다. */

// 문자열을 이용한 풀이이기 때문에 length()를 사용

// 풀이 1
string big_integer(string& a, string& b){
    int aSize = a.length();
    int bSize = b.length();

    string rans = "";

    int c = 0;

    // 뒤에서 부터 계산
    while (aSize > 0 || bSize > 0){
        int k1 = 0;
        if(aSize > 0){
            k1 = a[--aSize] - '0';
        }

        int k2 = 0;
        if(bSize > 0){
            k2 = b[--bSize] - '0';
        }
        int ret = k1 + k2 + c;
        c = ret / 10;
        ret %= 10;
        char cur = ret + '0';
        rans += cur;
    }
    if (c > 0){
        rans += c + '0';
    }
    string ans = "";

    for(int i = (int)rans.length() -1; i >= 0; --i){
        ans += rans[i];
    }

    return ans;
}
int main(void){
    string a, b;
    cin >> a;
    cin >> b;

    cout << big_integer(a, b) << "\n";

    return 0;    
}
/*
// 풀이 2

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string addNum(string a, string b);

int main(){
    string a, b;
    
    cin >> a >> b;

    string sum = addNum(a, b);

    cout << sum;

    return 0;
}

string addNum(string a, string b){
    string res;

    // 큰 수로 자릿수 맞추기
    // 입력된 두 수의 자릿수가 다를 경우를 생각해 0으로 자릿수를 맞춰준다
    int maxLen = max(a.length(), b.length());
    a = string(maxLen - a.length(), '0') + a;
    b = string(maxLen - b.length(), '0') + b;

    int carry = 0; // 올림
    for(int i = maxLen -1; i >= 0; i--){
        int digitSum = (a[i] - '0') + (b[i] - '0') + carry; // 각 자릿수 계산
        carry = digitSum / 10; // 올림 계산
        res += (digitSum % 10) + '0' // 자리수를 결과에 더한다
    }
    // 결과를 담는 res는 string이기 때문에 다시 아스키 코드 값을 활용해 변환환

    // 연산을 모두 마친 후에 올림 값이 남아있다면 올림 값을 결과에 더해준다.

    if(carry > 0){
        res += carry + '0';
    }

    // 결과를 뒤집어 출력하면 원하는 연산 결과를 얻을 수 있다.
    reverse(res.begin(), res.end());

    return res;
}
*/