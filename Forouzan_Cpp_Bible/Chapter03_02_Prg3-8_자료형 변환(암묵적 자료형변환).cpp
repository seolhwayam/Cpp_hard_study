//
// Created by rudnf on 2023-02-19.
//
#include <iostream>
using namespace std;

int main(){
    /*암묵적 자료형 승격
     * - 산술 연산자가 없는 자료형(bool,char,short,float)
     * - 산술 연산자를 적용해서 암묵적 자료형 변환하기       */

    //선언
    bool x = true;
    char y = 'A';
    short z = 14;
    float t = 24.5;

    //bool에서 int로 자료형 변환
    cout << "x + 100의 자료형 : "<<typeid(x + 100).name()<<endl;
    cout << "x + 100의 값 : "<<x+100<<endl;

    //char에서 int로 자료형 변환
    cout <<"y + 1000의 자료형 : "<<typeid(y + 1000).name()<<endl;
    cout << "y + 1000의 값 : "<<y + 1000<<endl;

    //short에서 int로 자료형 변환
    cout <<"z + 100의 자료형 : "<<typeid(z * 100).name()<<endl;
    cout << "z + 100의 값 : "<<z * 100<<endl;

    //float에서 double로 자료형 변환
    cout <<"t + 15000.2의 자료형 : "<<typeid(t + 15000.2).name()<<endl;
    cout << "t + 15000.2의 값 : "<<t + 15000.2<<endl;

    return 0;

    /* 자료형 변환
     * 1. 암묵적 자료형 변환(자동)
     *  : 자료형이 자동으로 변환되는 것
     *
     *  1) 암묵적 자료형 승격
     *     : 작은 자료형의 피연산자를 더 큰 자료형으로 승격
     *       ① 피연산자의 자료형이 산술 연산에 적합하지 않는 경우(불 또는 문자)
     *       ② 피연산자의 자료형에 맞은 연산자가 없는 경우(short 또는 float)
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
     * */
}