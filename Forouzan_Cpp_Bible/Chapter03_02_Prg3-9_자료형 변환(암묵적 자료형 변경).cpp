//
// Created by rudnf on 2023-02-19.
//
#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
    /*암묵적 자료형 변환(부가 작용 없음)
     * -부가작용이 없는 여러가지 자료형이 사용된
     * -표현식의 암묵적 자료형 변환
     * */

    //선언
    int x =123;
    long y = 140;
    double z = 114.56;

    //표현식 x + y 의 자료형과 값 확인
    cout << "x + y의 자료형 : "<< typeid(x+y).name()<<endl;
    cout << "x + y의 값 : "<<x+y<<endl;

    //표현식 x + y + z의 자료형과 값 확인
    cout << "x + y +z의 자료형 : "<< typeid(x+y+z).name()<<endl;
    cout << "x + y +z의 값 : "<<x+y+z<<endl;

    /* 자료형 변환
    * 1. 암묵적 자료형 변환(자동)
    *  : 자료형이 자동으로 변환되는 것
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
     *       계층이 변환된 상태 이므로 암묵적 자료형 변경 x
     *
    * */










    return 0;
}
