//#include<iostream>
//#pragma warning(disable:4996)
//#include<cstring>
//using namespace std;
//
///*
//c++ 문자열
//1. string 자료타입
//2. string 문자열 변수 이름 .size : 문자열 길이 구하는 함수
//3. 복사할 문자열 변수 = 복사할 문자열 원본 : 문자 복사하기
//4. 문자열 변수1 + 문자열 변수2 : 문자열 합치기(문자열 변수1에 합쳐진 문자가 저장된다)
//5. 문자열 변수1 == 문자열 변수2 : 문자열 비교하기
//   1) (문자열 변수1 == 문자열 변수2) 동일 => 1 리턴
//   2) (문자열 변수1 != 문자열 변수2) 동일x => 0 리턴
//   * true.false 값으로 리턴 (true 1 / false 0)
//6  문자열 변수.find(찾을 문자) : 문자열변수에서 찾을 문자의 인덱스 값을 구하는 함수
//7. 문자열 변수.substr(시작 인덱스, 갯수) : 문자열 변수의 시작인덱스부터 갯수 만큼의 문자열을 반환하는 함수
//
//6. C Style 대비 수행속도에 대한 이점은 없다.
//
//*/
//
//int main() {
//	//string src = "Inha Univ";
//	//string dest; //복사용
//
//	// 문자열 복사하기
//	//dest = src; 
//
//	// 문자열 길이 구하기
//	//cout << src.size() << endl; //src 객체
//	
//	//cout << src << endl;
//	//cout << dest << endl;
//
//	string str1 = "Inha";
//	string str2 = "Univ";
//
//	//문자열 합치기
//	str1 = str1 + str2;
//	cout << str1 << endl;
//	cout << str2 << endl;
//	
//	//문자열 비교하기
//	if (str1 == str2) {
//		cout << (str1 == str2) << endl;
//		cout << "같다" << endl; //1
//	}
//	else {
//		cout << (str1 == str2) << endl;
//		cout << "다르다" << endl; //0
//	}
//
//	string str = "Hi, Inha Univ.";
//	cout << str.find("Inha") << endl;
//		
//	string capture = str.substr(4, 4);
//	cout << capture;
//
//	return 0;
//}