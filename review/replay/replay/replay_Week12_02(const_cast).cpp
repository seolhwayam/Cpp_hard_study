//#include<iostream>
//using namespace std;
///*
//const_cast : const, volatile 등의 속성을 변경
//[사용법]
//const_cast<타입>(상수속성 제거할 변수)
//
//[주의]
//① const_cast는 형식 한정자만 조정할 수 있으며 내부 형식을 변경하지 못합니다.
//[타입 등 변경 불가]
//
//② const_cast는 객체형식에 대한 포인터, 참조 또는 맴버 포인터여야한다.
//[포인터로 받아야 하고, 포인터 타입만 가능]
//
//
//dynamic_cast : 상속 관계일 클래스 포인터 및 레퍼런스 타입 체크
//
//
//volatile : 사전의미로는 휘발성
//           컴퓨터가 변수를 상수로 만드는 작업을 함
//		   그 작업에서 열외
//
//*/
//
//void main() {
//
//	char univ[] = "Inga";
//	const char* c1 = univ;
//	char* c2;
//	c2 = const_cast<char*>(c1);
//	c2[0] = 'i';
//	cout << c2 << endl;
//
//
//	int* pi = const_cast<int*>(c1);
//	//const_cast는 형식 한정자만 조정할 수 있으며 내부 형식을 변경하지 못합니다.
//	//알맹이는 변경할 수 없다
//
//	float f;
//	f = const_cast<float>(c1);
//	//const_cast는 객체형식에 대한 포인터, 참조 또는 맴버 포인터여야한다.
//	
//	char c;
//	c = const_cast<char*>(c1);
//	
//}