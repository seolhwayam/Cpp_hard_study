//
// Created by rudnf on 2023-03-13.
//
#include <iostream>
using namespace std;

int main(){
    /* for 반복문 중첩하기
     * : 반복문을 중첩해서 * 기호를 정해진 패턴으로 출력하는 프로그램*/

    cout << "Prg 5-14 for 반복문 중첩하기"<<endl;

    // 선언
    int rows_01;
    int cols_01;

    // 입력받기
    cout << "행의 수를 입력하세요: ";
    cin >> rows_01;
    cout << "열의 수를 입력하세요: ";
    cin >> cols_01;

    // 출력
    for (int count1 =1; count1 <= rows_01; count1++){
        for(int count2=1; count2 <= cols_01; count2++){
            cout <<"*";
        }
        cout <<endl;
    }

    /* 숫자 패턴 출력하기
     *  : 반복문을 중첩해서 숫자를 정해진 패턴으로 출력하는 프로그램*/

    cout << "Prg 5-15 숫자 패턴 출력하기"<<endl;

    // 선언
    int rows_02;
    int cols_02;

    // 입력받기
    cout << "행의 수를 입력하세요: ";
    cin >>rows_02;
    cout <<"열의 수를 입력하세요: ";
    cin >>cols_02;

    // 중첩 반복문
    for(int i=1;i<=rows_02;i++){
        for(int j =i; j<=i+cols_02-1;j++){
            cout <<j<<" ";
        }
        cout <<endl;
    }

    return 0;
}