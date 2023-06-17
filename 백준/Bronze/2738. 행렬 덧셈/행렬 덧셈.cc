//6월 17일 2738번 행렬 덧셈 (C++)
#include <iostream>

int main(){
  //행렬의 크기
  int n, m;
  //행렬 array
  int array[100][100];
  //행렬 array1
  int array1[100][100];
  //행렬 array1과 array2의 원소를 더한 행렬을 출력하기 위한 행렬
  int array2[100][100];

  std::cin >> n >> m;
  //행렬 array에 원소 값 저장
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      std::cin >> array[i][j];
    }
  }
  //행렬 array1에 원소 값 저장
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      std::cin >> array1[i][j];
    }
  }
  //행렬 array2에 array의 원소들과 array1의 원소 더한 값 저장
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      array2[i][j] = array[i][j] + array1[i][j];
    }
  }
  //행렬 array2를 출력
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      std::cout << array2[i][j] << " ";
    }
    std::cout << std::endl;
  }
  return 0;
}