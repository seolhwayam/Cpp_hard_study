//#include<iostream>
//#include<memory>
//using namespace std;
///*
//* unique_ptr
//* 특정 소유권을 부여한 포인터 
//* unique_ptr은 소유권을 부여한 포인터이므로, 다른 포인터에서 가르킬수없음(소유권 주장)
//* #include<memory> 필요
//* delete 동적메모리 해제까지 해줘서 안전!
//
//
//*/
//
//class Test {
//	int* data;
//public:
//	Test() {
//		cout << "생성자! " << endl;
//		data = new int[100];
//	}
//	~Test() {
//		cout << "소멸자!" << endl;
//		delete[] data;
//	}
//	void t() { cout << "테스트 중..." << endl; }
//};
//void testing() {
//	/*unique_ptr 버전 
//	unique_ptr<Test> up(new Test()); //c++11 (기존의 auto_ptr을 보완 대체)
//	up->t();
//
//	이 함수 종료되면 소멸자 동작
//	*/
//	/* 기존 버전(오류)
//	Test* t1 = new Test();
//	Test* t2 = t1;
//	t1 동적할당
//	t2 t1의 동적할당 주소
//
//	delete t1;
//	delete t2;
//	두번 해지 -> 오류
//	*/
//	unique_ptr<Test> up1(new Test());//c++11 (기존의 auto_ptr을 보완 대체)
//	// Test* up1 = new Test();
//	unique_ptr<Test> up2 = up1;  
//	/*에러
//	* unique_ptr은 소유권을 부여한 포인터이므로, 다른 포인터에서 가르킬수없음(소유권 주장)
//	
//	*/
//}
//void main() {
//	testing();
//}