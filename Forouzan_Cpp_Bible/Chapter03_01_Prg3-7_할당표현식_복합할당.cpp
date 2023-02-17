//
// Created by rudnf on 2023-02-18.
//
#include <iostream>
using namespace std;

int main(){
    /*복합 할당 - 복합 할당 표현식을 몇 가지 보여주는 프로그램*/

    // 5개의 변수 선언과 초기화
    int x = 20;
    int y = 30;
    int z = 40;
    int t = 50;
    int u = 60;

    // 복합 할당 사용
    x += 5;
    y -= 3;
    z *= 10;
    t /= 8;
    u %= 7;

    //결과
    cout << "x의 값 : "<<x<<endl;
    cout << "y의 값 : "<<y<<endl;
    cout << "z의 값 : "<<z<<endl;
    cout << "t의 값 : "<<t<<endl;
    cout << "u의 값 : "<<u<<endl;

    return 0;

    /* 2) 복합 할당
     *   : ① 연산자는 2개 사용
     *     ② 특별 연산자 제공( += | -= | *= | /= | %= )
     *
     *  - lvalue & rvalue
     *    lvalue(값의 목적지) = rvalue(값의 소스)
     *
     *    (x += 3) == (x = x+3)
     *                x가 왼쪽, 오른쪽 모두 있음
     *
     *     >> 값의 목적지이자 소스로 동작 >> lvalue이자 rvalue
     *   */

}