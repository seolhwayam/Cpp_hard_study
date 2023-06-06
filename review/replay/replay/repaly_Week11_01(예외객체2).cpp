//#include<iostream>
//using namespace std;
//
//
//
//
//void a();
//void b();
//void c();
//
//void c() {
//	/*throw 123;
//	throw "hello";*/
//	throw 2.71f;
//}
//void b() {
//	c();
//}
//void a() {
//	try {
//		b();
//	}
//	catch (int ex) {
//		cout << "예외(a함수)" << ex << "\n";
//		throw; //예외 다시 던지기
//	}
//}
//
//int main() {
//	try {
//		a();
//	}
//	catch (int ex) {
//		cout << "예외(main/정수처리) = " << ex << "\n";
//	}
//	catch (const char* ex) {
//		cout << "예외(main/문자열 처리) = " << ex << "\n";
//	}
//	catch (...) {
//		cout << "기타예외" << "\n"; //모든 예외를 잡지만, 정확 ㄴㄴ
//	}
//	return 0;
//}
//
