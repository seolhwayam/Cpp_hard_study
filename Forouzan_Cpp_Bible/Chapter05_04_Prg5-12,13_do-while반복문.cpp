//
// Created by rudnf on 2023-03-08.
//
#include <iostream>
using namespace std;

int main(){
    /*홀수가 아닌 정수에서 가장 왼쪽의 숫자 추출하기
     *  : 사용자로부터 정수를 입력받고 do-while반복문을 이용하여 가장 왼쪽의 숫자를 출력하는 프로그램*/

    cout << "Prg5-12 홀수가 아닌 정수에서 가장 왼쪽의 숫자 추출하기"<<endl;


    // 선언
    int num;
    short leftDigit;

    // 입력 받기
    cout << "음수가 아닌 정수를 입력하세요 : ";
    cin >> num;

    // 반복문
    do{
        leftDigit=num%10;
        num=num/10;
    }while(num>0);

    // 출력
    cout <<"가장 왼쪽의 숫자 = "<<leftDigit<<endl;

    /*유효성 검사에 do-while 반복문 사용하기*/

    cout << "Prg5-13 유효성 검사에 do-while 반복문 사용하기 "<<endl;


        // 선언
        int score;
        char grade;

        // 유효성 검사하면서 입력받기
        do{
            cout << "0~100의 범위에 있는 점수를 입력하세요: ";
            cin >>score;
        }while(score<0||score>100); //0~100사이의 숫자를 잘 입력했다면 while에 false 오류 입력시 true로 다시 점수입력을 받음

        switch(score/10){
            case 10: grade ='A';
                     break;
            case 9: grade ='A';
                     break;
            case 8: grade ='B';
                     break;
            case 7: grade ='C';
                     break;
            case 6: grade ='D';
                     break;
            default: grade ='F';
                     break;

        }

        // 출력
        cout <<"학점 = "<<grade<<endl;

        /*do-while반복문
         * do{
         *    실행문
         * }while(조건);
         *
         * ① 조건에 상관없이 한번은! do 실행문 실행 → while(조건문) 확인 → true : do 실행문 | false : 반복종료
         * ② while(조건) 뒤에 ;(세미콜론) 주의
         *
         * */



    return 0;
}