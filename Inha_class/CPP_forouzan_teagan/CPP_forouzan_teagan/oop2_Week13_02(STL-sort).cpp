//#include<iostream>
//#include<algorithm> // 정렬, 검색등과 같은 알고리즘을 구현해놓은 함수들의 모음
//#include<list> // 링크드 리스트(삽입, 삭제에 강점) -> 업데이트 빈번할 시 유리
//#include<vector> // 동적 배열(검색 위주에 강점 -> 업데이트 없을 시
//using namespace std;
//
//bool myfunc(int i, int j) { return i > j; } //내림차순(true)
//
////bool myfunc(int i, int j) { return i < j; } //오름차순(false)
//
//
//struct myStruct
//{
//	bool operator() (int i, int j) { return (i > j); } //내림차순(true)
//}myobject;
//
//class myClass
//{
//public:
//	bool operator() (int i, int j) { return (i > j); } //내림차순(true)
//}myobj2;
//
//
//void main() {
//	//● vector 검색 강점
//
//	vector<char> vec;
//	vec.push_back('e');
//	vec.push_back('b');
//	vec.push_back('a');
//	vec.push_back('d');
//	vec.push_back('c');
//
//	//sort(first,last,comp)
//    //comp : 함수이용 , 클래스 객체이용, 구조체 이용
//
//	//① 함수 이용
//	cout << "함수 이용 " << endl;
//
//	sort(vec.begin(), vec.end()); //오름차순
//	
//	for (auto v : vec)
//		cout << v <<endl;
//
//
//	sort(vec.begin(), vec.end(),myfunc); //내림차순
//
//	for (auto v : vec)
//		cout << v << endl;
//
//
//	//② 구초제 변수 이용
//	cout << "구조체 변수 이용 " << endl;
//
//	sort(vec.begin(), vec.end(), myobject); //내림차순
//
//	for (auto v : vec)
//		cout << v << endl;
//
//
//	//③ 객체 이용
//	cout << "객체 이용 " << endl;
//
//	sort(vec.begin(), vec.end(), myobj2); //내림차순
//
//	for (auto v : vec)
//		cout << v << endl;
//
//}