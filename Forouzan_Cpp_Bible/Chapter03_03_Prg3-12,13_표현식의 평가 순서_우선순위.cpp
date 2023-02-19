//
// Created by rudnf on 2023-02-19.
//
#include <iostream>
using namespace std;

int main(){
    /*단순 표현식의 평가 - 우선 순위가 다른 2개의 표현식 평가 순서*/
    cout << "표현식의 결과 : "<<5+7*4<<endl;
    // ① 7*4 = 28
    // ② 5+28 = 33


    /*복잡한 표현식의 평가 - 우선 순위가 다른 3개의 표현식 평가 순서*/

    //변수 선언
    int result;

    //표현식을 평가하고, 값을 변수 result에 저장
    result = 5-15%4;

    //변수 result에 저장된 값 출력
    cout << "result에 저장된 값 : "<<result;


    return 0;
}