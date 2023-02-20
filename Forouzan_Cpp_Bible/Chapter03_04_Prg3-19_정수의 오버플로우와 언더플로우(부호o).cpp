//
// Created by rudnf on 2023-02-20.
//
#include <iostream>
#include <limits>
using namespace std;

int main(){
    /*int자료형의 오버플로우와 언더플로우
     * : 부호있는 정수 자료형의 오버플로우와 언더플로우 확인하기*/

    //부호있는 정수의 최대값과 최소값 검색
    int num1 = numeric_limits<int>::max();
    int num2 = numeric_limits<int>::min();

    //최대값과 최솟값 출력
    cout << "부호 있는 정수의 최대값 : "<<num1 <<endl;
    cout << "부호 없는 정수의 최소값 : "<<num2 <<endl;

    //강제로 오버플로우 발생
    num1 +=1;
    num2 -=1;

    //오버플로우와 언더플로우된 값 출력
    cout << "오버플로우와 일어난 num1 + 1의 값 : "<<num1<<endl;
    cout << "언더플로우와 일어난 num2 - 1의 값 : "<<num2<<endl;

    return 0
    /*정수의 오버플로우와 언더플로우
   * 정수자료형
   * 1. 부호 없는 정수의 오버플로우와 언더플로우
   *    최대값보다 큰 값 사용 시 >> 오버플로우
   *    최소값보다 적은 값 사용 시 >> 언더플로우
   *
   *    오버플로우와 언더플로우 발생하면 한 바퀴를 돌아서 범위를 지키려고 합니다.
   * 2. 부호 있는 정수의 오버플로우와 언더플로우
   * */
}