//
// Created by rudnf on 2023-02-21.
//
#include <iostream>
using namespace std;

int main(){

    /*boolalpha 조정자 사용하기
     * : 불 자료형에 boolalpha 조정자 사용하기*/

    //선언
    bool x = true;
    bool y = false;

    //조정자 없이 출력
    cout << "기본적인 x의 출력 : "<<x <<endl;
    cout << "기본적인 y의 출력 : "<<y <<endl;

    //조정자를 사용하여 출력
    cout << "조정자를 사용한 x의 값 : "<<boolalpha<<x<<endl;
    cout << "y의 값 : "<<y;

    /*정수를 여러 진법으로 출력할 수 있게 하는 조정자
     * : 정수를 여러 진법(10진법, 8진법, 16진법)으로 출력하는 프로그램*/

    //변수 선언
    int z = 1237;

    //showbase없이 3개의 숫자를 진법별로 입력받기
    cout << "z의 10진수 값 : "<<z <<endl;
    cout << "z의 8진수 값 : "<<oct <<z <<endl;
    cout << "z의 16진수 값 : "<<hex <<z <<endl;

    //showbase를 사용한 상태로 z를 각각의 진법으로 출력
    cout << "z의 10진수 값 : "<<showbase<<dec<<z <<endl;
    cout << "z의 8진수 값 : "<<showbase<<oct<<z <<endl;
    cout << "z의 16진수 값 : "<<showbase<<hex <<z <<endl;

    /*부동 소수점 조정자 사용하기
     * : 부동 소수점 자료형과 관련된 몇 가지 조정자 사용하기*/

    //선언
    double t = 1237;
    double v = 12376745.5623;

    //fixed와 showpoint 조정자 사용
    cout << "t의 고정 소수점 형식 : "<<t<<endl;
    cout << "t의 고정 소주점 형식"<<showpoint<<t<<endl;

    //seientific 조정자 사용
    cout << "v의 과학 표기법 형식 : "<<v<<scientific;
    return 0;

    /*조정자의 개요
     * :상황에 따라서 입출력 형식을 바꿔서 출력할 때 사용
     *
     * 1. 출력 조정자
     *  1) 매개변수가 없는 조정자
     *   -추가 헤더파일 불필요 | <iostream> 포함
     *
     *   ① endl 조정자(전체)
     *     : 줄바꿈
     *       스트림의 상태 변경x유일 조정자
     *       필요할 때마다 사용
     *
     *   ② 불리터럴 조정자(bool)
     *      : noboolalpha >    0    1    출력
     *        boolalpha   > false  true  출력
     *
     *   ③ 숫자 진법을 변경하는 조정자(정수)
     *      : 10진접(dec) | 8진법(oct) | 16진법(hex)
     *
     *   ④ 진법의 접두사를 붙이는 조정자
     *      : noshowbase > 기본값
     *        showbase   > 10진법 변화x | 8진수 0 | 16진수 0x  접두사
     *
     *   ⑤ 고정 소수점 출력 조정자와 과학 표기법 출력 조정자
     *      : fixed  > 고정 소수점 형식
     *        scientific > 부호 + 정수 부분이 한 자리로 고정 + e or E +지수 부호 +지수
     *
     *   ⑥ 소수점 아래 부분을 출력하는 조정자
     *      : noshowpoint > 기본값
     *        showpoint   > 소수점 아래부분 출력(0이여도 출력)
     *
     *   ⑦ 양수 부호를 붙이는 조정자
     *      : noshowpos > 기본값
     *        showpos   > 양수부호 +  출력
     *
     *   ⑧ 숫자 관련 문자를 대문자로 출력하는 조정자
     *      : nouppercase > 기본값
     *        uppercase   > 숫자 관련 문자 대문자 출력
     *
     *   ⑨ 숫자의 배치를 조정하는 조정자
     *      : left > 숫자 왼쪽정렬(기본값)
     *        internal > 부호 왼쪽 + 숫자 오른쪽
     *        right > 숫자 오른쪽 정렬
     *
     *
     *
     * */
}