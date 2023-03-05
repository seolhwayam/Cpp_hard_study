//
// Created by rudnf on 2023-03-05.
//
#include <iostream>
using namespace std;

int main(){
    /*조건부 표현식
     *  : 두 숫자를 입력받은 뒤에 두 숫자 중에 더 큰 숫자 또는 같을 경우 첫 번째 숫자를 조건부 표현식으로 찾아 출력하기*/

    // 변수선언
    int num1,num2;
    int larger;

    // 입력받기
    cout << "첫 번째 숫자 입력 : ";
    cin >> num1;
    cout << "두 번째 숫자 입력 : ";
    cin >> num2;

    // 의사 결정
    larger = num1>=num2 ? num1 : num2;

    // 출력
    cout << "더 큰 숫자 = "<< larger;

    /*조건부 표현식(삼항연산자)
     * ① 조건 ? 표현식1 : 표현식2 ;
     * ⑤ 조건이 true >> 표현식 1 | false >>> 표현식2
     * ③ 조건의 자료형은 true 또는 false값으로 변환가능한 표현식
     * */


    return 0;
}