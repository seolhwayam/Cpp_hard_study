//
// Created by rudnf on 2023-03-05.
//
#include <iostream>
using namespace std;

int main(){
    /*점수 입력을 기반으로 학생의 성적 찾기
     * : 학생 점수를 2개 입력받기
     * : 최소값과 최대값을 기반으로 평균을 구해서
     * : 학생의 성적을 찾는 프로그램*/

    cout << "Prg4-15 점수 입력을 기반으로 학생의 성적 찾기"<<endl;

    // 변수선언
    int score1, score2, score3, maxScore,minScore,score;

    // 입력받기
    cout << "첫 번째 점수 입력 : ";
    cin >> score1;
    cout << "두 번째 점수 입력 : ";
    cin >> score2;
    cout << "세 번째 점수 입력 : ";
    cin >> score3;

    // 가장 큰 점수 찾기
    if(score1>score2&&score1>score3){
        maxScore = score1;
    }else if(score2>score1&&score2>score3){
        maxScore = score2;
    }else{
        maxScore = score3;
    }

    // 가장 작은 점수 찾기
    if(score1<score2&&score1<score3){
        minScore = score1;
    }else if(score2<score1&&score2<score3){
        minScore = score2;
    }else{
        minScore = score3;
    }

    // 학생 성적을 구하고 올림하기(홀수일 때만 올림)
    int temp = maxScore+minScore;
    if(temp%2 ==1){
        temp+=1;
    }
    score = temp/2;

    // 결과 출력
    cout << "입력한 점수 = "<<score1<< " "<<score2 <<" "<<score3<<endl;
    cout << "최소 점수와 최대 점수 = "<<minScore << " "<<maxScore<<endl;
    cout << "학생 성적 = "<<score<<endl;

    /*소득 범위에 따른 세금 구하기
     *  :  4가지 서로 다른 소득 범위를 기반으로 세금을 계산해서 출력하는 프로그램*/


    cout << "Prg4-16 소득 범위에 따른 세금 구하기"<<endl;

    // 변수선언
    double income, tax;
    bool bracket1, bracket2,bracket3,bracket4;
    double limit1 = 10000.00, limit2=50000.00, limit3 = 100000.00;
    double rate1 = 0.05, rate2 = 0.10 ,rate3=0.15,rate4=0.20;

    // 입력받기
    cout << "수입을 달러로 입력하세요 : ";
    cin >> income;

    // 소득범위 찾기
    bracket1 = (income<=limit1)&&(income>=0);
    bracket2 = (income>limit1)&&(income<=limit2);
    bracket3 = (income>limit2)&&(income<=limit3);
    bracket4 = (income>limit3);

    // 세금계산
    if(bracket1){
        tax=income*rate1;
    }else if(bracket2){
        tax = limit1*rate1+(income-limit1)*rate2;
    }else if(bracket3){
        tax = limit1*rate1+(limit2-limit1)*rate2+(income-limit2)*rate3;
    }else if(bracket4){
        tax = limit1*rate1+(limit2-limit1)*rate2+(limit3-limit2)*rate3+(income-limit3)*rate4;
    }else{
        cout <<"입력에 문제가 있습니다.";
        return 0;
    }

    // 수입과 세금 출력
    cout <<"수입 = "<<income<<endl;
    cout <<"세금 = "<<tax<<endl;

    /*날 수 구하기
     *  : 몇 월 며칠을 입력받았을 때
     *  : 해당 날짜가 올해 몇 번째 날짜인지 구하는 프로그램*/

    cout << "Prg4-17 날 수 구하기"<<endl;

    // 변수선언
    int month;
    int day;
    int totalDays = 0;

    // 입력받기
    cout << "몇 월인지 입력하세요";
    cin >> month;
    cout << "며칠인지 입력하세요";
    cin >> day;

    // 각 월의 날 수
    int m01=31;
    int m02=28;
    int m03=31;
    int m04=30;
    int m05=31;
    int m06=30;
    int m07=31;
    int m08=31;
    int m09=30;
    int m10=31;
    int m11=30;

    //switch 조건문을 사용해서 특정 달까지의 날 수를 계산

    switch(month){
        case 12: totalDays+=m11;
        case 11: totalDays+=m10;
        case 10: totalDays+=m09;
        case 9: totalDays+=m08;
        case 8: totalDays+=m07;
        case 7: totalDays+=m06;
        case 6: totalDays+=m05;
        case 5: totalDays+=m04;
        case 4: totalDays+=m03;
        case 3: totalDays+=m02;
        case 2: totalDays+=m01;
        case 1: totalDays+=0;
    }

    // 최종 결과를 구함
    totalDays +=day;

    // 결과 출력
    cout <<"올해의 "<<totalDays<<"번째 날입니다.";



    return 0;
}