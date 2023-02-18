//
// Created by rudnf on 2023-02-19.
//
#include <iostream>
using namespace std;

int main(){
    /*명시적 자료형 변환 - 표현식 내부에서의 명시적 자료형 변환과 암묵적 자료형 변환 비교*/

    //선언
    double x = 23.56;
    int y =30;

    //암묵적 자료형 변환 활용
    cout << "캐스팅을 하지 않는 경우 : "<<x+y<<endl;  // 53.56


    //명시적 자료형 변환
    cout << "캐스팅을 한 경우 : "<<static_cast<int>(x)+y;  //53

    /* 자료형 변환
* 1. 암묵적 자료형 변환(자동)
*  : 자료형이 "자동"으로 변환되는 것
*
*  자료형 확인
*  #include <typeinfo>
*  typeid(표현식).name()
*
*  낮은단계                                             높은단계
*  int > unsigned > long > unsigned long > double > long double
*
*  1) 암묵적 자료형 승격
*     : 작은 자료형의 피연산자를 더 큰 자료형으로 승격
*       ① 피연산자의 자료형이 산술 연산에 적합하지 않는 경우(불 또는 문자)
*       ② 피연산자의 자료형에 맞은 연산자가 없는 경우(short 또는 float)
*
*
*       <암묵적 자료형 승격>
*         원래 자료형         승격된 자료형
*         bool                 int
*         char                 int
*         short                int
*         unsigned short       unsigned int
*         float                double
*
*        bool, char , short 자료형 >> int
*        float 자료형 >> double
*
*
*
*  2) 암묵적 자료형 변경
*     : 두 자료형의 자료형을 맞추는 행위
*     ※ 단항 연산의 경우 암묵적 자료형 변경 x
*
*     - 부가작용이 없는 표현식
*     : 암묵적 자료형 승격이 이미 일어난 경우
*       계층이 변환된 상태 이므로 암묵적 자료형 변경
*
*     - 부가작용이 있는 표현식
*      : 소스와 대상의 자료형이 다른 경우 자료형 변환 발생
*        소스의 자료형을 "대상의 자료형"에 맞게 변경
*        int x = 130;
*       (대상)   (소스)
*
*       ex) 대상 int = 소스 23.56 >> 값 23
*           대상에 맞춰 소스 변경
*2. 명시적 자료형 변환(캐스팅)
*  : 피연산자의 자료형을 원하는 형태로 "강제"로 변환하는 것
*   static_cast<자료형>(표현식)
*/

    return 0;
}