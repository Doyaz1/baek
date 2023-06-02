#include <iostream>

int main(){
  // N(1 <= N <= 100) M (1 <= M <= 100)
  int array[101] = {}; 
  int n, m;
  int a, b, c;
  
  std::cin >> n >> m;
  /* M개의 줄에 걸쳐서 공을 넣고 a번 바구니부터 b번 바구니까지에
  c번 번호가 적혀져 있는 공을 넣는 코드 */
  for(int i = 0; i < m; i++){
    std::cin >> a >> b >> c;
    for(int j = a; j <= b; j++){
      array[j] = c;
    }
  }
  /* 1번 바구니부터 n번 바구니에 들어있는 공의 번호를 공백으로 구분,
  공이 없으면 0을 출력 */
  for(int i = 1; i <= n; i++){
    std::cout << array[i] << " ";
  }
  return 0;
}
    