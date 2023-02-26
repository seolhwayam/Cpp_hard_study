//
// Created by rudnf on 2023-02-25.
//
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    /*1. 부동소수점 분해하기
     * : 숫자에서 정수 부분과 소수점 아래 부분을 분리해서 추출하는 프로그램*/

    //변수선언
    double number;
    int intPart;
    double fractPart;

    //입력받기
    cout << "부동 소수점 입력 : ";
    cin >> number;

    //처리
    intPart = static_cast<int>(number); // 명시적 자료형 변환(캐스팅) static_cast<자료형>(표현식)
    fractPart = number - intPart;



    //출력
    cout << fixed <<showpoint << setprecision(2);
    //fixed 고정소수점 사용
    //showpoint 소수점 아래부분 출력 (매개변수 x)
    //setprecision(n) 소수점 뒤에 몇 자리까지 출력할건지(매개변수o)

    cout << "원래 값 : "<<number <<endl;
    cout << "정수 부분 : "<<intPart <<endl;
    cout << "소수점 아래 부분 : "<<fractPart<<endl;

    /*2. 정수의 첫 번째 자릿수 추출하기*/

    //변수 선언
    unsigned int givenInt, firstDigit;

    //입력 받기
    cout << "양의 정수 입력 : ";
    cin >>givenInt;

    //처리
    firstDigit = givenInt%10;

    //출력
    cout << "입력한 정수 : "<<givenInt<<endl;
    cout << "첫 번째 자릿수 추출 : "<<firstDigit<<endl;

    /*3. 초단위의 시간을 시,분,초 단위로 나누어서 변환하기*/

    //변수 선언
    unsigned long duration, hours, minutes, seconds;

    //입력받기
    cout << "초 단위 시간을 양의 정수로 입력 : ";
    cin >> duration;

    //처리
    hours = duration/3600L;
    minutes = (duration-(hours*3600L))/60L;
    seconds = duration - (hours*3600L)-(minutes*60);

    //출력
    cout <<"입력된 초 단위 시간 : " <<duration<<endl;
    cout << hours<<"시";
    cout << minutes<<"분";
    cout << seconds<<"초"<<endl;


    /*평균과 분산구하기
     * : 3개의 정수를 입력받고, 이를 더하고 평균을 찾은 뒤, 각 숫자의 분산을 구하는 프로그램*/

    //변수선언
    int num1, num2, num3;
    int sum;
    double average;
    double dev1 , dev2, dev3;

    //입력받기
    cout << "첫 번째 숫자 입력 : ";
    cin >> num1;
    cout << "두 번째 숫자 입력 : ";
    cin >> num2;
    cout << "세 번째 숫자 입력 : ";
    cin >> num3;

    //처리
    sum = num1+num2+num3;
    average = static_cast<double>(sum)/3;
    dev1 = num1 - average;
    dev2 = num2 - average;
    dev3 = num3 - average;

    //출력
    cout << fixed <<setprecision(2);
    cout << "세 숫자의 합 : "<<sum<<endl;
    cout << "평균 : "<<setw(9) <<average<<endl; // setw(n) 고정 소수점 출력방식 | n 필드크기
    cout << "첫 번째 숫자의 분산 : "<<setw(9) <<dev1 <<endl;
    cout << "두 번째 숫자의 분산 : "<<setw(9) <<dev2 <<endl;
    cout << "세 번째 숫자의 분산 : "<<setw(9) <<dev3 <<endl;




    return 0;
}