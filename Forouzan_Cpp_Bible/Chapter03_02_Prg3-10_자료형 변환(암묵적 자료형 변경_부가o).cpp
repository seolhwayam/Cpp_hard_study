//
// Created by rudnf on 2023-02-19.
//
#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
    /*암묵적 자료형 변환(부가작용 있움) - 자료형이 섞인 표현식의 자료형 변환 확인하기*/

    //선언
    int x;
    double y;

    //할당
    x = 23.67; //부동소수점 자리 잘려서 할당됨
    y = 130;

    //x의 자료형과 값 확인
    cout << "x = 23.67의 자료형 : "<<typeid(x=23.67).name()<<endl;
    cout << "할당 후 x의 값 : "<<x <<endl<<endl;


    //y의 자료형과 값 확인
    cout << "x = 130의 자료형 : "<<typeid(y=130).name()<<endl;
    cout << "할당 후 y의 값 : "<<y <<endl;

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
 */

    return 0;
}