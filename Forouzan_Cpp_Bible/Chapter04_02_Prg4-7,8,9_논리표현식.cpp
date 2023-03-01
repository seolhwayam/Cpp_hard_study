//
// Created by rudnf on 2023-03-01.
//
#include <iostream>
using namespace std;

int main(){
    /* 나이 범위 확인하기
     *  : 자동차를 대여할 수 있는 나이 범위를 확인하는 프로그램*/

    // 변수선언
    int age;
    bool eligible;

    // 입력받기
    cout << "나이를 입력하세요 : ";
    cin >> age;

    // 조건설정
    eligible = (age >=25) && (age <= 100);

    // 조건 기반으로 출력
    if(eligible){
        cout << "자동차를 대여할 수 있습니다. ";
    }else{
        cout << "죄송합니다. 자동차를 대여할 수 없습니다.";
    }


    return 0;
}
