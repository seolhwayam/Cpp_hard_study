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
    int rows;
    int cols;

    // 입력받기
    cout << "행의 수를 입력하세요: ";
    cin >> rows;
    cout << "열의 수를 입력하세요: ";
    cin >> cols;

    // 출력
    for (int count1 =1; count1 <=rows; count1++){
        for(int count2=1; count2<=cols; count2++){
            cout <<"*";
        }
        cout <<endl;
    }

    return 0;
}