#include<iostream>
using namespace std;

/*구조체와 클래스
	  ① class 키워드 사용
	  ② pubilc 과 같은 접근제어와 관련된 키워드 사용
	  ③ 맴버함수(메서드)를 정의할 수 있다.	 (메서드는 클래스에 선언된 함수)

	  구조체
	  ① struct 키워드 사용
	  ② pubilc  접근제어
	  ③ 맴버변수를 정의할 수 있다.
	  */


class Point {
public:
	int x, y;

	void Print() {
		cout << x << "," << y << endl;
	}
};

int main() {
	Point p1, p2;
	p1.x = 10;
	p1.y = 10;
	p2.x = 20;
	p2.y = 20;

	p1.Print();
	p2.Print();



	return 0;
}