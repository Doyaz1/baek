#include <iostream>

int main(){
  
  int temp[10] = {0, }; // 배열의 크기를 10으로 설정
  int count = 10; // 10개의 나머지 중 같은 값이 있을때마다 1씩 감소시키기 위한 변수 설정
  
  for(int i = 0; i < 10; i++){
    std::cin >> temp[i]; // 입력값
    for(int j = 0; j < i; j++){
      if(temp[i] % 42 == temp[j] % 42){
        count--;
        break; // 브레이크를 걸지 않으면 2번 이상이 차감될 수 있기 때문 ex) 2 3 3 ~ ~  일 경우 temp[1]에서 브레이크를 걸지 않으면 temp[2]를 넘어 쭉쭉 진행
      }
    }
  }
  std::cout << count;
  return 0;
}

/*
또 다른 풀이 방법
#include <iostream>

int main(){

  int a;
  int temp[42] = {0, };

  for(int i = 0; i < 10; i++){
    std::cin >> a;
    temp[a % 42]++;
  }

  int count = 0;

  for(int j = 0; j < 42; j++){
    if(temp[j] > 0){
      count++;
    }
  }
  std::cout << count;
  return 0;
} */