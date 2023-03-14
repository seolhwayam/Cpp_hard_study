//
// Created by rudnf on 2023-03-13.
//
#include <iostream>
#include <iomanip>
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

    /*곱셉 표 만들기
     *  : 반복문을 중첩해서 2~10범위를 갖는 크기의 곱셈 표를 출력하는 프로그램*/

    // 변수 size 선언
    int size;

    // 입력받고 유효성 검사
    do{
        cout <<"표의 크기를 입력하세요(2~10): ";
        cin >> size;
    }while(size <2 ||size >10);

    // 중첩 반복문으로 표 출력
    for(int i =1; i<=size; i++){
        for(int j =1; j<=size; j++){
            cout <<setw(4)<<i*j;
        }
        cout <<endl;
    }

    /*중첩반복문
     *  : 1. 반복문이 여러개 존재. 반복문 내부에 반복문이 중첩되어 존재하는 형태
             (내부의 중첩문이 전부 실행되고, 다시 외부의 중첩문이 실행되는것을 반복... )
          2. 반복문이 중첩되면 연산 횟수는 제곱 형태로 증가한다. */


    return 0;
}