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
}