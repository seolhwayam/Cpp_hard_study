//#include<iostream>
//using namespace std;
//struct Rectangle {
//	int x, y;
//	int w, h;
//};
//
//
//int main() {
//	Rectangle r = { 15,10,50,70 }; //r = 구조체 변수
//	Rectangle* pr = &r; //포인터 변수는 타입이 같아야 한다(타입 : Rectangle) + 구조체 변수의 주소(구조체 변수 r :: &r) 
//
//	cout << r.x << " " << (*pr).x << endl;
//	cout << (*pr).y << " " << pr->y << endl;
//	//(*pr).y =  pr->y  [화살표 연산자]
//	cout << (*pr).h << " " << pr->h << endl;
//	cout << (*pr).h << " " << pr->h << endl;
//
//	pr->h = 40; //화살표 연산자를 통한 값 변경
//	(*pr).w = 100;
//	r.x = 80;
//
//	cout << r.h << endl;
//	cout << r.w << endl;
//	cout << r.x << endl;
//	cout << r.w << " " << pr->w << endl;
//
//	/* 출력하는 다양한 방법
//	1) (*pr).y     (*구조체 변수). 해당 변수
//	2) pr->y       구조체 변수 -> 해당 변수
//	3) r.y         구조체 변수.해당 변수
//	*/
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//
//int main() {
//
//
//    cout << "2)char 배열" << endl;
//    char bb[] = { 'a','b','c', 0};
//    char* pbb = bb;
//
//    cout << bb << endl;  //abc      
//    cout << *bb << endl; //a          
//    cout << &bb << endl; // 00000098B4AFF504     
//    cout << bb + 1 << endl; // bc      
//    cout << bb + 5 << endl; // 儆儆儆儆儆儆儆儆儆儆儆儆儆儆儆?蕉킌           
//    cout << *bb + 1 << endl; //98  [a의 아스키 코드[97]+1 = 98]                   
//    cout << *bb + 5 << endl; //102                     
//    cout << *(bb + 1) << endl; // b                        
//    cout << *(bb + 2) << endl; //c                        
//
//    cout << pbb << endl; //abc
//    cout << *pbb << endl; // a
//    cout << &pbb << endl; //00000098B4AFF528
//    cout << &pbb + 1 << endl; //00000098B4AFF530
//    cout << pbb + 1 << endl; // bc
//    cout << *pbb + 1 << endl; // 98
//    cout << *(pbb + 1) << endl; //b
//    cout << pbb[2] << endl; //c
//
//    return 0;
//}