//
// Created by rudnf on 2023-03-01.
//
#include <iostream>
using namespace std;

int main(){
    /* 나이 범위 확인하기
     *  : 자동차를 대여할 수 있는 나이 범위를 확인하는 프로그램*/

    // 변수선언
    int age;
    bool eligible;

    // 입력받기
    cout << "나이를 입력하세요 : ";
    cin >> age;

    // 조건설정
    eligible = (age >=25) && (age <= 100);

    // 조건 기반으로 출력
    if(eligible){
        cout << "자동차를 대여할 수 있습니다. "<<endl;
    }else{
        cout << "죄송합니다. 자동차를 대여할 수 없습니다."<<endl;
    }

    /*온도를 기반으로 에어컨 냉난방하기
     *  : 특정한 온도 범위에 따라 에어컨을 냉방 또는 난방으로 가동하는 프로그램*/

    // 변수 선언
    int temperature;
    bool hot;
    bool cold;

    // 입력 받기
    cout << "현재 온도를 입력하세요 : ";
    cin >> temperature;

    //조건 구하기
    hot = temperature >=23;
    cold = temperature <=15;

    //의사결정
    if(hot||cold){
        cout << "에어컨이 켜집니다."<<endl;
        if(hot){
            cout << "냉방 모드로 작동합니다."<<endl;
        }else{
            cout << "난방 모드로 작동합니다."<<endl;
        }
    }else{
        cout <<"에어컨이 꺼집니다."<<endl;
    }

    /*윤년 확인하기
     *  : 3가지 조건을 확인하여 윤년을 찾는 프로그램*/

    // 변수 선언
    int year ;
    bool divBy400, divBy4, divBy100;
    bool leaYear;

    // 입력 받기
    cout << "연도를 입력하세요";
    cin >> year;

    //조건 설정
    divBy400 = ((year%400)==0);
    divBy4 = ((year%4)==0);
    divBy100 = (divBy400)||(divBy4&& !(divBy100));

    // 의사 결정하고 출력
    if(leaYear){
        cout << year << "년은 윤년 입니다."<<endl;
    }else{
        cout << year <<" 년은 윤년이 아닙니다."<<endl;
    }

    /*논리표현식
     * ① 단향표현식 (!) : 논리값 부정
     * ② 일치 표현식 (== , !=)
     * ③ 논리 표현식
     *    1) AND (&&)
     *    2) OR (||)
     * */


    return 0;
}
