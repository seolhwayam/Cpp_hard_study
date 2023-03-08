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

    // 선언과 초기화
    int startDay;
    int daysInMonth;
    int col_11 = 1;

    // 한 달의 날짜 유효성 검사
    do{
        cout << "한 달의 날짜 수를 입력하세요(28,29,30,31) : ";
        cin >> daysInMonth;
    } while (daysInMonth<28||daysInMonth>31);


    do{
        cout<< "첫 날의 요일을 입력하세요(0~6) : ";
        cin >>startDay;
    } while (startDay<0||startDay>6);

    // 제목 출력
    cout << endl;
    cout << "Sun Mon Tue Wed Thr Fri Sat"<<endl;
    cout <<"--- --- --- --- --- --- ---"<<endl;

    // 달력 앞쪽 여백 출력
    for(int space=0; space<startDay; space++){
        cout <<"   ";
        col_11++;
    }

    // 달력 출력
    for(int day=1; day<=daysInMonth; day++){
        cout << setw(3)<<day<<" ";
        col_11++;
        if(col_11>7){
            cout <<endl;
            col_11=1;
        }
    }

    /*for 반복문
     * for(초기화;조건'변경){
     *      실행문    }*/



    return 0;
}