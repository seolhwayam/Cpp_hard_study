//
// Created by rudnf on 2023-05-22.
//
#include <iostream>
using namespace  std;

int getSum(const int*, int); //프로토 타입

int main(){
    /*배열 요소의 합 구하기
     *  : 포인터를 사용해서 배열의 요소에 접근하는 방법은 보여주는 프로그램*/

    // 배열 선언 및 초기화
    int arr[5] = {10,11,12,13,14};

    // 함수 호출
    cout << "요소의 합:" << getSum(arr,5);




    return 0;
}