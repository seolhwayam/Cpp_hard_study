//
// Created by rudnf on 2023-02-16.
//
#include <iostream>
#include <string>
using namespace std;

int main(){
    /*리터럴 표현식 - 리터럴 표현식을 몇 가지 보여주는 프로그램*/

    cout << false << " " <<'A' << " " << "Hello"<< endl;
    //       bool         char            string

    cout << 23412 << " " << 12897234L << endl;
    //        int           long int

    cout << 245.78F << " "<< 114.782 << " "<< 2.051L;
    //       float            double       long double


    /*     표현식
     *   : 특정 값을 가진 엔티티(개체)
     *   ① 19개의 표현식 존재
     *   ② 종류 > 이름 > 연산자 > 연산자 사용 행태 > 결합방향
     *   ③ 우선순위 1~19
     *
     *  1. 기본표현식
     *    : 연산자 없이 구성된 간단한 표현식
     *    : 우선순위 19 / 우선순위가 가장 높음
     * */
    return 0;
}