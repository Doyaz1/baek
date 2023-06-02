#include <iostream>
  

  int array[101] = {}; 
  int n, m;
  int a, b;

  void swap(int index1, int index2){
    int temp = array[index1];
    array[index1] = array[index2];
    array[index2] = temp;
  }

int main(){
  
  std::cin >> n >> m;

  for(int i = 0; i <= n; i++){
    array[i] = i;
  }

  for(int i = 0; i < m; i++){
    std::cin >> a >> b;
    swap(a , b);
  }

  for(int i = 1; i <= n; i++){
    std::cout << array[i] << " ";
  }
  return 0;
}
    