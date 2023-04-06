//#include<iostream>
//#include<cstring>
//#pragma warning(disable:4996);
//using namespace std;
//
//int main() {
//	// ★C++ Style
//
//	//string src = "Inha Univ";
//	//C언어에서는 char 자료타입 사용했지만 C++에서는 string지원
//	//string dest;
//
//	//dest = src; // src copy
//
//	//cout << src.size() << endl;
//	//src의 문자열의 길이
//	//C언어와 비교시 성능적인 부분 이점은 없다
//
//	//cout << src << endl;
//	//cout << dest << endl;
//
//
//
//	string str1 = "inha";
//	string str2 = "univ";
//
//	// 문자열 겹합
//	str1 = str1 + str2;
//	cout << str1 << endl;
//	cout << str2 << endl;
//
//	// 문자열 비교
//	if (str1 == str2) { // str1 != str2 와 같은 연산가능(같지 않다)
//		cout << "같다" << endl;
//		cout << (str1 == str2) << endl; // 1 리턴
//	}
//	else {
//		cout << "다르다" << endl;
//		cout << (str1 == str2) << endl; // 0 리턴
//	}
//	// boolean (true, false)로 리턴
//
//	// 문자열 찾기
//	string str_find_1 = "HI, Inha Univ.";
//
//	cout << str_find_1.find("Inha") << endl;
//	/*find: ① 문자열 찾기
//	        ② 문자열 변수.find("찾을 문자")
//			③ 인덱스값 리턴(찾을 위치 값 리턴)
//		*/	
//
//
//	// 문자열 자르기
//	string str_capture_1 = "HI, Inha Univ.";
//
//	string capture = str_capture_1.substr(4, 4); // 인덱스값 4부터~ 4글자 캡처
//	cout << capture << endl;
//	
//
//	//★ Old Style (C Style)
//	/*char src[] = "inha univ";
//	int len = strlen(src);
//	cout << len << endl; 
//
// 	char* dest = new char[len + 1]; 
//	strcpy(dest, src);
//
//	cout << src << endl;
//	cout << dest << endl;
//
//	delete[] dest;
//	dest = null;*/
//
//
//
//	//문자열 결합
//	//char str1[] = "inha univ";
//	//char str2[] = "Harvard univ";
//	//
//	//strcat(str1, str2);
//	//// strcat : 문자열 결합(인자값, 붙일 문자열)
//
//	//cout << str1 << endl; // 결합되어 보여짐
//	//cout << str2 << endl; // 그대로
//
//	//// 문자열 비교
//	//char str_1[10] = "Inha";
//	//char str_2[] = "Harvard";
//
//	//if (strcmp(str_1, str_2) == 0) { //두 문자열이 동일할 때에는 0이 리턴됨
//	//	cout << "같다" << endl;
//	//}
//	//else {
//	//	cout << "다르다" << endl;
//	//	cout << strcmp(str_1, str_2) << endl;
//	//}
//	// 아스키코드(ascii) 값으로 비교
//	// str1 < str2  -1리턴
//	// str1 > str2   1리턴
//	
//	return 0;
//}