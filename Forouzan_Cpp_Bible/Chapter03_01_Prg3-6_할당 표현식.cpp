//
// Created by rudnf on 2023-02-17.
//
#include <iostream>
using namespace std;

int main(){
    /*단순 할당 연산자 - 단순 할당 연산자 확인하기*/

    // 변수 선언
    int x;
    int y;

    // 첫 번째 할당
    cout << "할당 표현식의 리턴값 : " << (x=14)<<endl;
    cout << "변수 X의 값 : " << x << endl;

    //두 번째 할당
    cout << "할당 표현식의 리턴값 : " <<(y=87)<<endl;
    cout << "변수y의 값 : "<<y;

    /* 5. 할당 표현식
     *    : 값을 만들면서 컴퓨터의 메모리 상태를 변경하는 부가 작용 발생
     *    1) 단순 할당
     *    ① 연산자 =
     *    ② 할당 연산자는 피연산자를 2개 갖는 이항 표현식
     *
     * */


    return 0;
}