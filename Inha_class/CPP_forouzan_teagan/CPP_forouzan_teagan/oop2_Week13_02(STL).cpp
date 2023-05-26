//#include<iostream>
//#include<algorithm> // 정렬, 검색등과 같은 알고리즘을 구현해놓은 함수들의 모음
//#include<list> // 링크드 리스트(삽입, 삭제에 강점) -> 업데이트 빈번할 시 유리
//#include<vector> // 동적 배열(검색 위주에 강점 -> 업데이트 없을 시
//using namespace std;
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
//	for (auto i = vec.begin(); i != vec.end(); i++) {
//		cout << *i << endl;
//	}
//
//	sort(vec.begin(), vec.end());
//	//vec.end() => 맨마지막에서 앞을 가르킴
//	//sort(시작부분, 끝부분)
//
//
//	//Old
//	vector<char>::iterator it;
//	for (it = vec.begin(); it != vec.end(); it++) {
//		cout << *it << endl;
//	}//포인터 처럼 동작하도록 *it의 *를 연산자 오버로딩한 것
//
//	//Modern
//	for (auto i = vec.begin(); i != vec.end(); i++) {
//		cout << *i << endl;
//	}
//	
//	// Modern (c++11)
//	for (auto v : vec)
//		cout << v;
//
//
//
//	//●배열
//
//	char arr[5] = { 'e','b','a','d','c' };
//	//               0   1   2   3   4
//	sort(arr,arr + 5);
//	// 끝은 4이지만 5을 입력 
//
//	for (char* p = arr; p != arr + 5; ++p) {
//		cout << *p << endl;
//	}
//
//	//Old
//	for (auto* p = arr; p != arr + 5; ++p) {
//		cout << *p << endl;
//	}
//
//	//Modern
//	for (auto* p = arr; p != arr + 5; ++p) {
//		cout << *p << endl;
//	}
//
//
//	//STL -> 정보를 담은 컨테이너 + 정보를 처리하는 알고리즘
//
//}