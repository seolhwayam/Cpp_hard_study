//
// Created by rudnf on 2023-02-15.
//
# include <iostream>
# include <string>
using namespace std;

int main(){
    //Chapter02 연습문제

    // 프로그래밍 문제 01
    cout << "♥ 삼각형 출력 프로그램 ♥ "<<endl;
    cout<<"*\n**\n***" <<endl;

    cout << "---------------------------"<<endl;

    // 프로그래밍 문제 02
    cout << "♥ 삼각형2 출력 프로그램 ♥ "<<endl;
    cout<<"*\n**\n***\n**\n*"<<endl;

    cout << "---------------------------"<<endl;

    // 프로그래밍 문제 03
    cout << "♥ H 출력 프로그램 ♥ "<<endl;
    cout<<"H     H\nH     H\nHHHHHHH\nH     H\nH     H"<<endl;


    // 프로그래밍 문제 04  : 시간, 분, 초 단위로 시간을 입력받아서 초 단위로 환산해 출력하는 프로그램
    cout << "♥ 시간 초단위 환산 출력 프로그램 ♥ "<<endl;

    //변수선언
    double hour;
    double minuite;
    double second;
    double total_04;

    //시간, 분 ,초 입력받기
    cout<< "시간 : "<<endl;
    cin >> hour;
    cout<< "분 : "<<endl;
    cin >> minuite;
    cout<< "초 : "<<endl;
    cin >> second;

    total_04 = (hour*3600)+(minuite*60)+second;
    cout << total_04<< endl;
    cout << "---------------------------"<<endl;

    // 프로그래밍 문제 05  : 사용자로부터 4개의 숫자를 입력받고, 그 합을 출력하는 프로그램
    cout << "♥ 숫자4개 입력받아 합산 출력 프로그램 ♥ "<<endl;

    //변수 선언
    int a;
    int b;
    int c;
    int d;
    int total_05;
    // 입력받기
    cout << " 첫 번째 숫자 : "<<endl;
    cin >> a;
    cout << " 두 번째 숫자 : "<<endl;
    cin >> b;
    cout << " 세 번째 숫자 : "<<endl;
    cin >> c;
    cout << " 네 번째 숫자 : "<<endl;
    cin >> d;
    total_05 = a+b+c+d;
    cout << " 총 함계 금액 : "<<total_05<<endl;
    cout << "---------------------------"<<endl;


    // 프로그래밍 문제 06  : 정사각형의 변 하나가 주어졌을 때, 그 면적과 둘레를 구하는 프로그램
    cout << "♥ 정사각형 면적과 둘레 출력 프로그램 ♥ "<<endl;

    // 변수 선언
    int side;
    int area;
    int circumference;

    //정사각형 변 입력받기
    cout << " 정사각형 한변의 길이 : "<<endl;
    cin >> side;
    area = side*side;
    circumference = side*4;

    cout<< "정사각형 면적 : " << area << "/ 정사각형 둘레 : " << circumference <<endl;
    cout << "---------------------------"<<endl;

    // 프로그래밍 문제 07  : 사용자로부터 성과 이름을 입력받은 뒤, 다음과 같이 서양식 이름 표현으로 성과 이름을 출력하는 프로그램(ex설화, 김)
    cout << "♥ 서양식이름 표현 출력 프로그램 ♥ "<<endl;

    // 변수 선언
    string name;
    string firtst_name;

    // 입력 하기
    cout << "이름 : "<<endl;
    cin >> name;
    cout << "성 : " <<endl;
    cin >> firtst_name;

    cout << "서양식 이름 : "<< name<<", "<<firtst_name<<endl;
    cout << "---------------------------"<<endl;

    // 프로그래밍 문제 08  : 사용자로부터 2개의 정수를 입력받을 뒤, 그 합을 출력하는 프로그램(다양한 값을 사용)
    cout << "♥ 2개 정수 받아서 합계 출력 프로그램 ♥ "<<endl;

    // 변수 선언
    int num1;
    int num2;
    int total_08;

    // 입력 받기
    cout << "첫 번째 정수"<<endl;
    cin >> num1;
    cout << "두 번째 정수"<<endl;
    cin >> num2;
    total_08 = num1+num2;
    cout << "두 정수의 합 : "<<total_08<<endl;

    cout << "---------------------------"<<endl;

    // 프로그래밍 문제 09  : 소비세가9%라고 가정하고, 판매 금액이 주어졌을 떄, 다음과 같이 출력하는 프로그램(소비세는 상수로 정의)
    // 판매금액 / 소비세 / 전체금액

    cout << "♥ 판매금액/소비세/전체금액 출력 프로그램 ♥ "<<endl;

    // 변수 선언
    const double Tax = 0.09;
    int cost;
    int cost_Tax;
    double total_09;

    // 입력 받기
    cout << "판매금액 : " <<endl;
    cin >> cost;
    cost_Tax = cost*Tax;
    total_09 = cost - cost_Tax;

    cout << "판매금액 : "<< cost << " / 소비세 : " << cost_Tax << " / 잔체금액 : "<< total_09<<endl;

    cout << "---------------------------"<<endl;

    // 프로그래밍 문제 10  : 주어진 시/도 이름, 구 이름, 도로이름, 도로번호 , 우편번호를 다음과 같은 형식으로 출력하는 프로그램
    //(서울시, 강서구, 마곡서로, 133, 07798)
    cout << "♥ 시.도, 구, 도로, 우편번호 출력 프로그램 ♥ "<<endl;

    // 변수 선언
    string city;
    string town;
    string road;
    string road_number;
    string zip_coad;

    //입력받기
    cout << " 시/도 : " <<endl;
    cin >> city;
    cout << " 구 : " <<endl;
    cin >> town;
    cout << " 도로이름 : " <<endl;
    cin >> road;
    cout << " 도로번호 : " <<endl;
    cin >> road_number;
    cout << " 우편번호 : " <<endl;
    cin >> zip_coad;

    cout << "("<<city<<", "<<town<<", "<<road<< ", " <<road_number << ", "<< zip_coad<<")";





    return 0;



}