//
// Created by rudnf on 2023-03-08.
//
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    /*0부터 n-1까지 for 반복문으로 출력하기*/

    cout << "Prg5-9 0부터 n-1까지 for 반복문으로 출력하기"<<endl;

    // 선언
    int n;

    // 변수 n입력받기
    cout << "출력할 정수를 입력하세요 : ";
    cin >>n;

    // 반복문
    for (int counter =0; counter<n; counter++){
        cout<<counter<<" ";
    }

    cout <<endl;

    /*7로 나눌 수 있는 숫자 출력하기
     *  : 1~300의 범위에 있는 7로 나눌 수 있는 정수를 10개의 열을 가진 표 형식으로 출력하는 프로그램*/

    cout << "Prg5-10 7로 나눌 수 있는 숫자 출력하기"<<endl;

    // 선언과 초기화
    int lower =1;
    int higher = 300;
    int divisor=7;
    int col =1;

    // 처리
    for(int i =lower;i<higher;i++){
        if(i%divisor==0){
            cout <<setw(4)<<i;
            col++;
            if(col>10){
                cout <<endl;
                col =1;

            }
        }
    }

    cout << endl;

    /*한 달을 달력 형태로 출력하기
     *  : 한 달의 날짜 수와 첫 날의 요일을 입력하고 달력 형태로 한 달을 출력하는 프로그램*/

    cout << "Prg5-11 한 달을 달력 형태로 출력하기"<<endl;



    return 0;
}