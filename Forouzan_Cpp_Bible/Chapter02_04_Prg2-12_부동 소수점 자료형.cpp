//
// Created by rudnf on 2023-02-14.
//
#include <iostream>
using namespace std;

int main(){
    /* 원의 멱적과 둘레구하기
     * : 원의 반지름을 기반으로 둘레와 면적을 구하는 프로그램 */

    // 상수 선언
    const double PI = 3.14159;

    // 변수 3개 선언
    double radius;
    double perimeter;
    double area;

    // 반지름 입력받기
    cout << "원의 반지름 입력:";
    cin >> radius;

    // 둘레와 면적을 계산하고 변수에 저장
    perimeter = 2 * PI * radius;  // 2는 상수
    area = PI * PI * radius;

    // 반지름, 둘레, 면적 출력
    cout << "반지름 : " << radius << endl;
    cout << "둘레 : " << perimeter <<endl;
    cout << "면적 : " << area;
    

    return 0;

    /* 부동 소수점 자료형
     * 부동 소수점
     * : ① 소수점을 갖는 숫자
     *   ② 모두 부호가 있다
     *   ③ float / double / long double
     *   ④ 리터럴은 double로 기본선언
     *
     * 리터럴 크리를 정의하는 접미사
     * float         |  f or F
     * double        |
     * long double   |  l or L
     * */




}
