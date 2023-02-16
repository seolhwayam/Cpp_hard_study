//
// Created by rudnf on 2023-02-16.
//
#include <iostream>
using namespace std;

int main(){
    /*곱셈 표현식 - 곱셈 표현식 확인하기*/

    //곱셈
    cout << "곱셈(*) 연산자 확인하기"<<endl;
    cout << "3 * 4 ="<<3*4<<endl;
    cout << "2.4 * 4.1 ="<<2.4*4.1<<endl;
    cout << "-3 * 4 ="<<-3*4<<endl;

    //나눗셈
    cout << "나눗셈(/) 연산자 확인하기"<<endl;
    cout << "30/5 ="<<30/5<<endl;
    cout << "4/7 ="<<4/7<<endl;

    //나머지
    cout << "나머지(%) 연산자 확인하기"<<endl;
    cout << "30 % 5 ="<<30%5<<endl;
    cout << "30 % 4 ="<<30%4<<endl;
    cout << "3 % 7 ="<<3%7<<endl;

    /*3. 곱셈표현식
     *  : 왼쪽과 오른쪽에 피연사자가 있는 이항표현식
     *   (곱셈 * | 나누기 / | 나머지 % )
     *   */
    return 0;
}