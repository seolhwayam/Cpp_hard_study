///*스탠다드 템플릿 라이브러리(STL) :  템플릿을 사용해 만들어진 클래스나 함수들의 모임
//* 1. 표준으로 제공하는 템플릿 라이브러리 사용시 빠르고 생산성 있는 함수 생성 가능
//* 2. 링크드리스트, 동적배열 클래스, 정렬, 검색 함수 범용적 함수와 클래스 존재
//*    ↑ 템플릿으로 만들어져 있기 때문에 확장 간편
//* 3. 스탠다드 -> STL은 표준 (상대방이 작성한 코드 가독하는데에 도움 -> 표준이기 때문에!)
//* 4. 검증 -> 안전, 효율
//*/
//
///*컨테이너: 다수의 정보를 담는 역할을 하는 클래스(링크드 리스트, 동적배열, 열, 맵->컨테이너)
//  ① 리스트 컨테이너*/
//
//#include<iostream>
//#include<list> // stl
//using namespace std;
//
//void main() {
//	list<int> iList; // 링크드 리스트
//
//	for (auto i = 0; i < 10; i++) {
//		iList.push_back(i);
//	}
//
//	iList.remove(5); //리스트 전용 메소드
//
//	
//
//	// old style
//	list<int>::iterator it; //iterator 포인터 역할 비슷하게 수행(반복자)  list안에 있는 원소들을 하나씩 포인팅
//	for (it = iList.begin(); it != iList.end(); ++it)//begin(시작위치 설정) , ++it 원소 단위 ++
//		cout << *it << endl;
//
//	//Modern Style
//	for (auto k = iList.begin(); k != iList.end(); ++k) {
//		cout << *k << endl;
//	}
//	// k타입 : list<int>::iterator it;과 동일
//
//	//vector : 동적배열, 배열의 크기가 필요할 때마다 늘어남/ 동적으로 원소의 개수를 조절할 수 있는 배열
//
//
//	
//}
