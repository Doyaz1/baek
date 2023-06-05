// 6월 5일 10811번 바구니 뒤집기 (C++)
#include <iostream>

int main(){

  int N, M, a, b;
  int basket[100] = {0, };
  // 바구니 개수 N / M번 바구니의 순서를 역순
  std::cin >> N >> M;
  // 입력값 받기
  for(int i = 1; i <= N; i++){
    basket[i] = i;
  }
  // M이 0번이 될 때까지 반복
  while(M --> 0){
    std::cin >> a >> b;
  // a가 b보다 작을때까지 바구니 a와 b를 바꿔준다
    while(a < b){
      std::swap(basket[a], basket[b]);
      a++;
      b--;
    }
  }
  // 출력문
  for(int i = 1; i <= N; i++){
    std::cout << basket[i] << " ";
  }
  return 0;
}

// 6월 5일 10811번 바구니 뒤집기 (또 다른 풀이)
// #include <iostream>

// void swap(int *a, int *b){
//   int temp = *a;
//   *a = *b;
//   *b = temp;
// }
// int main(){

//   int N, M, a, b;
//   int basket[100] = {0, };

//   std::cin >> N >> M;
  
//   for(int i = 1; i <= N; i++){
//     basket[i] = i;
//   }
  
//   for(int i = 1; i <= M; i++){
//     std::cin >> a >> b;
//     for(int j = 0; j <= (b - a) / 2; j++){
//       swap(&basket[a + j], &basket[b - j]);
//     }
//   }
  
//   for(int i = 1; i <= N; i++){
//     std::cout << basket[i] << " ";
//   }
//   return 0;
// }