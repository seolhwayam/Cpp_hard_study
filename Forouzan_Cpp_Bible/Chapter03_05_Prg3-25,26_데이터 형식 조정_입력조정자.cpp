//
// Created by rudnf on 2023-02-24.
//
#include <iostream>
using namespace std;

int main(){
    /*불 자료형으로 입력하기
     *  : 불 자료형을 false와 true로 입력받기*/

    //선언
    bool flag;

    //조정자를 사용해서 입력받기
    cout << "불 자료형을 true 또는 false로 입력 : "<<endl;
    cin >> boolalpha >> flag;

    //출력
    cout << flag<<endl;

    /*여러 진법으로 정수 입력받기*/

    //선언
    int num1,num2,num3;

    //10진수로 첫 번째 숫자 입력받기(조정자 없음)
    cout << "첫 번째 숫자를 10진수로 입력 : ";
    cin >> num1;
    //8진수로 두 번쨰 숫자 입력받기
    cout << "두 번째 숫자를 8진수로 입력 : ";
    cin >>oct>> num2;
    //16진수로 세 번째 숫자 입력받기
    cout << "세 번째 숫자를 16진수로 입력 : ";
    cin >>hex>> num3;

    //출력
    cout << num1 <<endl;
    cout << num2 <<endl;
    cout << num3;

    /*조정자의 개요
     * :상황에 따라서 입출력 형식을 바꿔서 출력할 때 사용
     *
     * 1. 출력 조정자
     * 2. 입력 조정자
     *   ① 불 자료형
     *      noboolalpha >    0    1    입력
     *      boolalpha   > false  true  입력
     *
     *
     * /



    return 0;
}