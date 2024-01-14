#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a, string b) {
    int i = 0;
    if(a.size() == b.size())
    {
        for(int i = 0; i < a.size(); i++)
        {
            if(a[i] != b[i])
                return a[i] < b[i];
        }
    }
    return a.size() < b.size();
}

int main(){
  int num;
  string tmp;

  cin >> num;

  vector<string> arr;

  for(int i = 0; i < num; i++){
    cin >> tmp;
    arr.push_back(tmp);
  }

  sort(arr.begin(), arr.end(), compare);

  cout << arr[0] << '\n';

  for(int i = 1; i < num; i++){
    if(arr[i - 1] == arr[i]){
      continue;
    }
    cout << arr[i] << '\n';
  }
}