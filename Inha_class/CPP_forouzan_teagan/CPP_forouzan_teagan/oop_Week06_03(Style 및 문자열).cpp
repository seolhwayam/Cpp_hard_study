#pragma warning(disable:4996)
#include<iostream>
#include<cstring>
using namespace std;

int main() {
	//① cstyle -> cpp style

	char cstyle_1[] = "Hi~";
	string cppstyle_1;

	cppstyle_1 = cstyle_1; 
	// 메모리상의 주소가 복사되는 거기때문에 별도의 메모리 주소를 가지게 됨 -> 원본에 영향 X
	cppstyle_1[0] = 'A';

	cout << cstyle_1 << endl;
	cout << cppstyle_1 << endl;

	// ② cpp style -> cstyle

	string cppstyle_2 = "Hello!";
	const char* cstyle_2 = NULL;
	// 포인터

	cstyle_2 = cppstyle_2.c_str();
	// cpp스타일의 메모리 번지주소를 , 보관한 문자열의 주소를 얻어와서 그 다음에 포인터 변수에 전달
	// c_str은 읽기전용 형태의 리턴 + 그래서 일부러 const ->  값 변경x
	// string 계열안에 있는 문자열은 읽기용으로만 얻고싶다! -> c_str()

	cout << cstyle_2 << endl;
	cout << cppstyle_2 << endl;

	// ③ 복사본 만들기
	string cppstyle_3 = "Hello!";
	char* cstyle_3 = new char[cppstyle_3.size() + 1]; // null문자 처리위해서 +1
	// 포인터

	strcpy(cstyle_3, cppstyle_3.c_str());
	//주소를 받아서 포인터가 가르키는 생성된 메모리 번지에다가 복사
	//완벽한 카피본 생성

	cstyle_3[0] = 'Y';
	 
	cout << cstyle_3 << endl; // Yello
	cout << cppstyle_3 << endl; //Hello

	delete[] cstyle_3;
	cstyle_3 = NULL;


	// ④
	char cstyle_4[10];
	string cppstyle_4;

	cin >> cstyle_4;
	cin >> cppstyle_4;

	cout << cstyle_4 << endl;
	cout << cppstyle_4 << endl;



	return 0;
}