//
// Created by rudnf on 2023-02-19.
//
#include <iostream>
using namespace std;

int main(){
    /*괄호를 가진 간단한 표현식 - 괄호를 표현하는 단순 표현식의 평가*/

    //선언
    int x = 5;
    //표현식의 값 출력
    cout << "(x+6)*7의 값 : "<<(x+6)*7<<endl;

    /*부가 효과를 가진 표현식 - 부가 효과를 가진 단순 표현식의 평가*/

    //선언과 초기화
    int z=8;
    int y=10;

    //할당
    y *= z+5;
    //① y = y*(z+5)
    //② y = y*13
    //③ y = 130


    //변수 y의 값 출력
    cout << "y의 값 : "<<y;


    // 우선 순위를 변경하고 싶을 때는 "괄호"를 사용

    return 0;
}
