//
// Created by rudnf on 2023-02-28.
//
#include <iostream>
using namespace std;

int main(){
    /*성적을 기반으로 합격/불합격 확인하기
     * : if-else 조건문을 사용해서 합력/불합격 학점 찾기*/

    //변수 선언
    int score;

    //입력받기
    cout << "0~100점 사이의 점수를 입력하세요 : ";
    cin >>score;

    //의사 결정
    if(score >= 70){
        cout <<"pass입니다."<<endl;
    }else{
        cout <<"fail입니다."<<endl;
    }

    /*두 숫자 중에서 큰 숫자 찾기
     * : if -else 조건문을 사용해서 입력받은 더 큰 숫자 또는 숫자가 같을 경우 첫 번째 숫자를 출력하는 프로그램*/

    //변수 선언
    int num1,num2;
    int larger;

    //입력받기
    cout << "첫 번째 숫자 입력 : ";
    cin >> num1;
    cout << "두 번째 숫자 입력 : ";
    cin >>num2;

    //의사 결정
    if(num1>=num2){
        larger=num1;
    }else{
        larger=num2;
    }

    //결과 출력
    cout <<"더 큰 숫자 = "<<larger;

    /**/


    return 0;
}