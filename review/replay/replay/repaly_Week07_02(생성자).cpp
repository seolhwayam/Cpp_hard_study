#include<iostream>
using namespace std;
/*[클래스와 객체]
- 구조체와 클래스의 차이점
1. 키워드
   클래스 : class 키워드
   구조체 : struct 키워드

2. 접근 지정자 생략시
    클래스 : private 접근
	구조체 : public 접근

3. 맴버 함수(메서드) 정의
    클래스 : 맴버함수 정의 가능
	구조체 : 맴버함수 정의 불가능(맴버변수 정의 가능)


- 클래스(class)
1. 클래스안에 선언된 함수 => 메서드
① 사용 :  객체.매서드 이름
② 메서드 오버로딩 등 가능
③ 클래스 내에 선언된 맴버함수에 대한 접근이 자유롭다
④ 클래스 밖에서 선언하기
   class 클래스 이름{
   1) 클래스 정의 안에는 메서드의 프로토타입
   2) 클래스 정의 밖에는 범위 지정 연산자를 사용해서 함수 정의

   class 클래스이름{

   메서드의 프로토 타입;

   };

   리턴타입 클래스이름::메서드이름(){
   함수 바디
   };

2. 생성자
① 객체를 생성할 때 자동적으로 호출되는 함수(객체 생성 시 딱 한번 동작!)
② 클래스의 이름과 같다.
③ 생성자는 리턴타입이 없다.
④ 클래스 밖에 생성하기

   class 클래스 이름{
   접근자:
   클래스이름();  //기본 생성자
   };

   클래스이름::클래스이름(){
   함수바디
   };

⑤ 생성자 오버로딩
   point(); => 기본생성자
   point(int _x, int _y); => 생성자 오버로딩

   객체생성시 매개변수 입력하면 자동으로 생성자 오버로딩된 생성자 동작

⑥ 복사 생성자
1) 자신과 동일한 타입의 객체에 대한 레퍼런스를 인자로 받는 생성자
2) 복사 생성자 실행하기
   - 클래스이름 객체이름(복사할 객체);
     ( point p6(p1) )
    
   - 클래스이름 객체이름 = 복사할 객체;
     ( point p3 = p2; )

⑦ 무조건 생성자로 초기화를 해야하는 경우
 - const
    : 상수로 동작해서 초기화 후에 값을 변경할 수 없음

 - &(레퍼런스)
    : 처음에 초기화 할 때빼고는 다른 변수로 변경이 안됨

=> 초기화 리스트를 통해서 초기화

초기화 리스트 :   : 맴버변수(초기화 값), 맴버변수(초기화 값)

클래스이름::클래스이름() : 맴버변수(초기화 값), 맴버변수(초기화 값){

};

[예시]
NeedConstructor::NeedConstructor():max(100),ref(temp){
    temp = 10;
};


3. 소멸자
① 객체가 소멸될 때 자동적으로 호출되는 함수

*/

class NeedConstructor {
public:
    const int max;
    int& ref;
    int temp;

    NeedConstructor();
    NeedConstructor(int cnt, int& number);

};

NeedConstructor::NeedConstructor()
    :max(100),ref(temp){
    temp = 10;
};
NeedConstructor::NeedConstructor(int cnt, int& number)
    :max(cnt), ref(number) {
    temp = 10;
};
int main() {
    NeedConstructor cr1;
    cout << cr1.max << endl;
    cout << cr1.ref << endl;
   
    int num = 400;
    NeedConstructor cr2(500,num);
    cout << cr2.max << endl;
    cout << cr2.ref << endl;
    
  

	return 0;
}