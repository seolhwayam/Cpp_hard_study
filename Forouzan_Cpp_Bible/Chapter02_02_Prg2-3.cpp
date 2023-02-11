//
// Created by rudnf on 2023-02-11.
//
/* *************************************************
 * 키보드로부터 2개의 숫자 값을 입력받은 뒤에
 * 두 값을 더한 후 출력하는 프로그램
 ***************************************************/
#include <iostream>

using namespace std;

int main()
{
    //선언
    int num1;
    int num2;
    int sum;
    //입력받기
    cout <<"첫 번째 숫자 입력:" ;
    cin >> num1;
    cout <<"두 번째 숫자 입력:" ;
    cin >> num2;
    // 계산과 결과 저장
    sum = num1+num2;
    //출력
    cout << "두 숫자의 합:"<<sum <<endl;

    // 상수
    int radius;
    const int PI = 3;
    cout<<"반지름 길이 :";
    cin >>radius;
    int perimeter = 2 * PI * radius;
    cout << "원의 지름 :";
    cout << perimeter;
    return 0;

    /* 입력받기  cin >> "변수"
     * 출력하기  cout << 값

     * 할당연산자 (=)

     * 상수 (const)
     * : 값을 변경할 수 없는 저장소 엔티티

     * 리터럴
     * : 메모리에 저장되지 않고 활용할 수 있는 값
     */
}
