//
// Created by rudnf on 2023-02-26.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    /*절대값 출력하기
     * : if 조건문을 사용해서 절대값을 계산하고 출력하는 프로그램*/

    //변수 선언
    int number ;

    //입력받기
    cout << "정수를 입력하세요 : ";
    cin >> number;

    //절대값 찾기
    if(number < 0){
        number = -number;
    }

    //절대값 출력
    cout <<"입력한 숫자의 절대값 = "<<number<<endl;

    /*초과 근무 시간이 있는 급여 계산하기
     *  : if조건문을 사용해서 초과 근무 시간이 있는 급여 계산기*/

    // 변수 선언
    double hours;
    double rate;
    double reqularPay;
    double overPay;
    double totalPay;

    // 입력 받기
    cout << "업무 시간을 입력하세요 : ";
    cin >> hours;
    cout << "시간당 급여를 입력하세요 : ";
    cin >> rate;

    //일반 급여 계산
    reqularPay = hours * rate;
    overPay = 0.0;

    //40시간을 넘게 근무했을 때 초과 근무에 대한 급여 계산
    if(hours>40.0){
        overPay = (hours-40.0)*rate*0.30;
    }

    //전체 급여 계산
    totalPay=reqularPay+overPay;

    //출력
    cout << fixed <<showpoint; //showpoint 소수점 아래 출력
    cout << "일반 급여 = " <<setprecision(2)<<reqularPay<<endl;
    cout <<"초과 근무에 대한 급여 = "<<setprecision(2)<<overPay<<endl;
    cout <<"전체 급여 ="<<setprecision(2)<<totalPay<<endl;



    /*조건문
     *  : 조건이 참이라면 어떤 문장을 실행하고, 거짓이라면 다른 문잔을 실행하는 것
     *  : 조건분기 => 조건문의 동작 | 참, 거짓을 도출하는 표현식 사용
     *
     *  - 관계 표현식(우선순위 11)
     *     : 두 값을 비교하기 위해 4가지 종류의 관계 연산자
     *      [ < , <= , >  , >= ]
     *
     *  - 일치 표현식(우선순위 12)
     *     : 두 엔티티가 동일한지 판별하는 일치 표현식
     *      ※ 부동 소수점 값에 사용하지 않는 것이 안전!
     *      [ ==  , != ]
     *
     *   ※ 우선 순위와 결합 순서
     *      3 < 4 == 1
     *      ① (3<4) == 1
     *      ② true == 1
     *      ③ 1 == 1
     *      ④ true
     *
     * ① if조건문
     *    if(조건문){
     *      실행문
     *    }
     */




    return 0;
}