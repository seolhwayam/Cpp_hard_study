//
// Created by rudnf on 2023-02-16.
//
#include <iostream>
using namespace std;

int main(){
    /* +,- 기호 테스트 - 뎃셈/뺄셈 표현식을 몇 가지 보여주는 프로그램 */

    // 변수 선언과 초기화
    int x = 4;
    int y = -10;

    //변수 x에 양수 음수 연산자 적용
    cout << "x에 양수 연산자 적용하기 : "<< +x << endl;
    cout << "x에 음수 연산자 적용하기 : "<< -x << endl;

    //변수 y에 양수 음수 연산자 적용
    cout << "y에 양수 연산자 적용하기 : "<< +y << endl;
    cout << "y에 음수 연산자 적용하기 : "<< -y ;

    /* 2. 단항 표현식
     *  : 하나의 값(피연산자)에 +,- 등의 연산자를 같이 사용
     *  1) sizeof표현식
     *     : 표현식의 크키나 자료형의 크기를 확인할 때 사용
     *     ① sizeof (expression >> 기본표현식)
     *     ② sizeof (type)
     * */
    return 0;
}
