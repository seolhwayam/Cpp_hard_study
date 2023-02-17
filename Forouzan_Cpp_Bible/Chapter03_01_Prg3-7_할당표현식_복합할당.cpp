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
}


