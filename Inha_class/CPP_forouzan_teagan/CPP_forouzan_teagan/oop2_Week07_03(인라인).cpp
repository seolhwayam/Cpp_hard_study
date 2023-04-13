#include<iostream>
using namespace std;

// 1. inline keyword (C++17) 인라인
//inline void Test() {
//	cout << "1" << endl;
//	cout << "2" << endl;
//	cout << "3" << endl;
//
//	/*inline의 코드를 가져와서 끼워넣음*/
//
//}
//
//int main() {
//	/*인라인 : 함수에 있는 내용을 그대로 옮겨 적는 것(삽입)
//	           짧은 코드 많은 활용!*/
//
//	Test();
//	/*
//
//	inline code와 동일
//	==
//	cout << "1" << endl;
//	cout << "2" << endl;
//	cout << "3" << endl;
//
//	자동인라인
//
//	*/
//
//
//
//	return 0;
//}
class Test {
public:
	static int a;
};
int Test::a = 10;

int main() {
	


	return 0;
}