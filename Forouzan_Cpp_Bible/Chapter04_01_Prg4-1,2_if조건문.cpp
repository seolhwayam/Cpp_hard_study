//
// Created by rudnf on 2023-02-26.
//

#include <iostream>
using namespace std;

int main(){
    /*절대값 출력하기
     * : if 조건문을 사용해서 절대값을 계산하고 출력하는 프로그램*/

    //변수 선언
    int number ;

    //입력받기
    cout << "정수를 입력하세요 : ";
    cin >> number;

    //절대값 찾기
    if(number < 0){
        number = -number;
    }

    //절대값 출력
    cout <<"입력한 숫자의 절대값 = "<<number;

    /*조건문
     *  : 조건이 참이라면 어떤 문장을 실행하고, 거짓이라면 다른 문잔을 실행하는 것
     *  : 조건분기 => 조건문의 동작 | 참, 거짓을 도출하는 표현식 사용
     *
     *  - 관계 표현식(우선순위 11)
     *     : 두 값을 비교하기 위해 4가지 종류의 관계 연산자
     *       < , <= , >  , >=
     *
     */




    return 0;
}