//6월 16일 25206번 너의 평점은 (C++)
#include <iostream>
#include <string>

int main(){
  // 소수점을 입력, 출력해야하기 때문에 float, double 코드를 사용
  std::string a, subject;
  double grade[20];
  double score[20];
  double average = 0;
  double sum = 0;
  // A+, B+ 등 등급에 따른 과목 평점을 배열에 저장
  for(int i = 0; i < 20; i++){
    std::cin >> subject >> grade[i] >> a;
    if(a == "A+"){
      score[i] = 4.5;
    }
    else if(a == "A0"){
      score[i] = 4.0;
    }
    else if(a == "B+"){
      score[i] = 3.5;
    }
    else if(a == "B0"){
      score[i] = 3.0;
    }
    else if(a == "C+"){
      score[i] = 2.5;
    }
    else if(a == "C0"){
      score[i] = 2.0;
    }
    else if(a == "D+"){
      score[i] = 1.5;
    }
    else if(a == "D0"){
      score[i] = 1.0;
    }
    else if(a == "F"){
      score[i] = 0.0;
    }
    else if(a == "P"){
      score[i] = 0.0;
      grade[i] = 0.0;
    }
    // 전공 평점을 출력하기 위해 (학점 * 과목 평점), 학점의 총합
    average += (grade[i] * score[i]);
    sum += grade[i];
  }
  // 전공 평점 = (학점 * 과목평점) / 학점의 총합의 값을 낸 후 소수점 6자리까지 출력
  average = average / sum;
  std::cout << std::fixed;
  std::cout.precision(6);
  std::cout << average;

  return 0;
}