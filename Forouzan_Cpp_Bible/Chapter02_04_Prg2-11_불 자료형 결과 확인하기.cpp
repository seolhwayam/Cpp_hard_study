//
// Created by rudnf on 2023-02-14.
//
#include <iostream>
using namespace std;

int main(){
    // 불 변수와 값울 사용하는 프로그램

    //변수선언
    bool x = 123; // true
    bool y = -8;  // true
    bool z = 0;   // false
    bool t = -0;  // false
    bool u = true;  //true (1)
    bool v = false; //false(0)

    //값 출력
    cout << "x의 값: "<<x<<endl;
    cout << "y의 값: "<<y<<endl;
    cout << "z의 값: "<<z<<endl;
    cout << "t의 값: "<<t<<endl;
    cout << "u의 값: "<<u<<endl;
    cout << "v의 값: "<<v<<endl;

    /*[불 타입]
     * 불(bool)
     * : 참(True) 또는 거짓(false) 을 나타내는 값
     *
     * 불 리터럴
     * : 0 (false) | 0이 아닌 값 (true=1)
     *
     * */
    return 0;
}