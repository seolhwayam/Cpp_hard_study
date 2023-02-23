//
// Created by rudnf on 2023-02-23.
//
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    /*매개변수가 있는 조정자
     * : 부동 소수점 관련 조정자 사용하기*/

    //선언
    double x = 1237234.1235;

    //기본 출력 방식 조정
    cout << fixed << setprecision(2)<<showpos<<setfill('*');   //showpos 양수부호 조정자

    //x를 3가지 형식으로 출력
    cout << setw(15) <<left<<x<<endl;
    cout << setw(15) << internal <<x <<endl;
    cout << setw(15)<<right <<x;
    return 0;

    /*조정자의 개요
     * :상황에 따라서 입출력 형식을 바꿔서 출력할 때 사용
     *
     * 1. 출력 조정자
     *  2) 매개변수가 있는 조정자
     *   - 매개변수가 하나(정수 또는 문자)인 조정자만 가능
     *   - 추가 헤더파일 필요 | <iomanip>
     *
     *   <매개변수가 하나인 조정자>
     *      조정자              불     문자    정수   부동 소수점
     *   setprecision(n)                              o
     *   setw(n)               o      o       o       o
     *   setfill(ch)           o      o       o       o
     *
     *    ① setprecision(n)
     *      - (n)으로 소수점 뒤 몇 자리까지 출력할지 지정
     *      - 고정 소수점 출력 방식에서만 사용
     *
     *    ② setw(n)
     *      - (n) 전체 필드 크기 (정수부분 + 소수점 + 소수점 아래부분)
     *      - 고정 소수점 출력 방식
     *      - 출력 스트림의 상태를 변경 x >> 필요할때마다 사용
     *
     *    ③ setfill(ch)
     *      - 필드 크키가 실제 출력보다 클 때, 패딩을 어떤 문자로 채울지 지정
     */
}