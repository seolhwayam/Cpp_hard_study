#include "htmlwirter(repaly_Week09_03).h"
#include "docwriter(replay_Week09_03).h"

/*
상속
class HTMLWriter : public DocWriter {
class 자식 클래스 이름 : 접근자 부모클래스 이름{

※접근자는 대부분 public사용

대입[※ 부모 = 자식 가능!]
1. 객체간 대입
①  자식 = 부모 (에러) :: 자식 객체에 부모 객체 대입 불가
②  부모 = 자식 (정상) :: 부모 객체에 자식 객체 대입 가능
	
2. 포인터, 레퍼런스간 대입
<포인터>    ① 자식타입 포인터 = &부모 객체 (오류)
			② 부모타입 포인터 = &자식 객체 (정상)

			ex)포인터간 대입
			HTMLWriter hw("test.html", "부모클래스 포인터 이용"); | 자식클래스 객체 생성
			DocWriter* pdw = &hw;                                 | 부모클래스 *포인터 = & 자식클래스 객체
			pdw->Write();                                         |	부모클래스의 포인터 -> 함수이름()
			
			
			=> 부모 클래스의 Write 동작됨
			[ 포인터 기준으로 동작 :: 포인터가 부모클래스이면 부모클래스 메서드로 동작]

<레퍼런스>  ① 자식타입 레퍼런스 = 부모객체(오류)
			② 부모타입 레퍼런스 = 자식객체(정상)

			ex)레퍼런스간 대입
			HTMLWriter hw("test.html", "부모클래스 레퍼런스 이용");| 자식클래스 객체 생성
			DocWriter& dw = hw;                                    | 부모클래스 &레퍼런스 = 자식클래스 객체     
			dw.Write()                                             | 부모클래스 레퍼런스. 함수이름()

			=> 부모클래스의 Write동작(레퍼런스)
	        [ 래퍼펀스 기준으로 동작 :: 레퍼런스가 부모클래스이면 부모클래스 메서드로 동작]
	


※ 자식 객체 : 필드5개 |부모 객체 : 필드2개
   부모 = 자식  => 경우 필드2개 밖에 못씀


3. Cast
1. Up Casting
: 자식클래스의 있는 포인터가 부모클래스에 있는 포인터로 형 변환되는 것

2. Down Casting
: 부모클래스의 있는 포인터가 자식클래스에 있는 포인터로 형 변환되는 것

※원래 Down Casting은 문법적으로 되지 않는다. 하지만 예외적으로 허용가능하다.
 방법 :  ① UP cast -> ② Down Cast
 예시 : HTMLWriter hw;                     | 자식 클래스 객체 생성
	    DocWriter* pdw = &hw;              | 부모 클래스 포인터 = & 자식 클래스 객체 [①UP cast]
	    HTMLWriter* phw = (HTMLWriter*)pdw;| 자식 클래스 포인터 = (자식클래스*)부모클래스 포인터 [②Down Cast]
		phw->Write();                      | 자식 클래스 포인터(함수이름) :: 자식클래스 함수 동작 , 포인터 기준	 
*/


//void main() {
	/*DocWriter dw;
	dw.SetFileName("exam.txt");
	dw.SetContent("시험 못봄!");
	dw.Write();*/


	// [상속]
	//HTMLWriter hw("gta.html", "트레버 필립스"); // 부모 클래스의 생성자 활용[자식클래스 생성자 실행시 > 부모클래스 생성자로 동작]
	//hw.Write(); //자식클래스의 오버라이팅 된 html쓰기 메서드
	//DocWriter dw("assignment.txt", "과제 많다~");
	//dw.Write();



	// [객체간 대입]
	//HTMLWriter hw("test.html","객체간 대입"); //자식
	//DocWriter dw;  //부모
	//// hw = dw; 자식 = 부모 (에러) :: 자식 객체에 부모 객체 대입 불가

	////dw = hw; // 부모 = 자식 (정상) :: 부모 객체에 자식 객체 대입 가능
	////dw.Write();
	//
	//DocWriter dw; // 부모객체
	//HTMLWriter* phw = &dw; // 자식타입 포인터 = &부모 객체 (오류)

	//DocWriter dw; // 부모 객체
	//HTMLWriter& phw = dw; // 자식타입 레퍼런스 = 부모객체(오류)

	//HTMLWriter hw; // 자식 객체
	//DocWriter* pdw = &hw; // 부모타입 포인터 = &자식 객체 (정상)

	//HTMLWriter hw; // 자식 객체
	//DocWriter& pdw = hw; // 부모타입 레퍼런스 = 자식객체(정상)

	// 부모클래스의 Write동작(포인터)
	//HTMLWriter hw("test.html", "부모클래스 포인터 이용");
	//DocWriter* pdw = &hw;
	//pdw->Write();//부모 클래스의 Write 동작됨 [ 포인터 기준으로 동작 :: 포인터가 부모클래스이면 부모클래스 메서드로 동작]
	
	// 부모클래스의 Write동작(레퍼런스)
	/*HTMLWriter hw("test.html", "부모클래스 레퍼런스 이용");
	DocWriter& dw = hw;
	dw.Write()*/


	//자식클래스의 있는 포인터가 부모클래스에 있는 포인터로 형 변환되는 것은 Up Casting 라고 한다.
	//부모클래스의 있는 포인터가 자식클래스에 있는 포인터로 형 변환되는 것은 Down Casting 라고 한다.

	//Down Casting
	//HTMLWriter hw;
	//DocWriter* pdw = &hw; //UP cast
	//HTMLWriter* phw = (HTMLWriter*)pdw; //Down Cast

	//phw->Write(); //자식클래스의 Write함수 동작/ 포인터 기준이 자식클래스이기 때문
//}
