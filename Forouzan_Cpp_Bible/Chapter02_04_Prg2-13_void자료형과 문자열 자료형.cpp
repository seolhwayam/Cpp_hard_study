//
// Created by rudnf on 2023-02-14.
//
   /*  string 클래스 사용하기
    *  : 이름, 이니셜, 성을 입력받고 결합해서 출력하는 프로그램
    * */
#include <iostream>
#include <string> // string 클래스를 사용하려면 읽어 들여야 함.
using namespace std;

int main(){
   //변수 선언
   string first;
   string initial;
   string last;
   string space = " ";
   string dot = ".";
   string fullName;

   // 이름, 이니셜, 성 입력받기
   cout << "이름(first name) 입력하기 : " ;
   cin >> first;
   cout << "이니셜(initial) 입력하기 : ";
   cin >> initial;
   cout << "성(last name) 입력하기 : ";
   cin >> last;

   //결합 연산자를 사용해서 문자열 연결
   fullName = first + space + initial + dot + space + last;

   //전체 이름 출력
   cout << "전체 이름(full name) : " << fullName;

    return 0;
    /* void 자료형
     * : ① 값이 없음
     *   ② 함수가 어떤 값도 결과로 내지 않는다
     *
     * 문자열 자료형
     *  : Null문자로 끝나는 문자의 집합
     *    ① \0 널문자(종료 문자)
     *    ② string  "큰 따옴표"
     *    ③ ★ #include <string> >> string 읽어들이기(헤더파일 읽기)
     *
     *  문자열의 결합
     *  : + 로 결합
     *    문자열 + 문자열
     * */
}