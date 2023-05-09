#include<iostream>
using namespace std;

int main() {
	/*auto
	  : 자료타입이 들어가는 자리에 auto키워드 작성시 해당 auto키워들을 가진 변수와 뒤에서 대입이 되는 초기화되는 값들에 의해서
	    추론을 해서 타입을 지정

		auto 배열(x) 문법적으로 배열은 auto처리 불가능
		*/

	auto f = 3.24f;
	auto s = "test";
	// 1) auto는 뒤의 값을 추론하여 해당 타입으로 실행

	const auto a = 3.1f;
	// 2) auto 키워드도 const가능

	cout << f << endl;
	cout << s << endl;

	cout << sizeof(f) << "\t" << typeid(f).name() << endl;
	cout << sizeof(s) << "\t" << typeid(s).name() << endl;


	return 0;
}