//
// Created by rudnf on 2023-02-13.
//
#include <iostream>
using namespace std;

int main(){
    // 리터럴 값을 단독으로 사용하는 프로그램

    // 변수 선언
    int x;
    unsigned long int y;

    // 할당
    x = 1456;
    y = -14567;

    // 출력
    cout << x << endl;
    cout << y << endl;  // 부호 없는 정수를 나타내는 변수 >> 음수 할당하여 문제
    cout << 1234 << endl;
    cout << 143267L << endl;
    return 0;

    /* 정수 자료형
     * 정수 : 소수점이 없는 숫자
     * short int / int / long int
     * 부호 없이 만들 때 : unsigend
     *
     * - 정수 변수
     * 변수의 자료형을 short int / int / long int 지정
     *
     * - 정수 리터럴(상수 값)
     * 리터럴 : 어떤 자료형의 값을 고정하여 사용할 때
     * ① 변수 초기화  ② 독립적인 값(계산)
     *
     * long int  : 접미사 l or L
     *   부호X    : 접미사 U or u
     *
     * 1234   부호있는 integer
     * 1234U  부호없는 integer
     * 1234L  부호있는 long integer
     * 1234UL 부호없는 long integer
     *
     * */

}