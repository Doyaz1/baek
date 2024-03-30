#include <iostream>
 
using namespace std;
 
int main()
{
    int count = 0;
    int max = 0;
 
    for (int i = 0; i < 4; i++) {
        int down, up;
        
        cin >> down >> up;
 
        count -= down;
        max < count ? max = count : max;
        count += up;
        max < count ? max = count : max;
    }
 
    cout << max;
 
    return 0;
}
 