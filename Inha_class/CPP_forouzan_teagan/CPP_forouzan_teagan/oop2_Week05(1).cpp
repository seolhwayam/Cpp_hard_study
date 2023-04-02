#include<iostream>
using namespace std;

int main() {
	/* hip타입 during run time에 만들어 진다.
	  메모리는 휘발성 타입

	  hip에 생성한거는 꼭 해제 해줘야댐
	  힙의 특징
	  1. 힙은 자체 이름 없음 -> 반드시 포인터가 있어야 한다.
	  2. 받은 포인터는 메인에 종속되지 않는다.

	  */

	int total = 0;
	int humans = 0;
	//int* prhumans = nullptr;//nullptr 아무대도 안가르킨다.(가르킬 주소가 없다는 키워드) |  null ,0이랑 비슷~ 


	cout << "몇 분 이세요? ";
	cin >> humans; 

	int* ptrhumans = new int[humans]; //동적 메모리 할당 4*humans 바이트 할당

	for (int i = 0; i < humans; i++) {
		cout << "나이가 어떻게 되세요? " << endl;
		cin >> ptrhumans[i]; // == cin >> *(ptrhumans+i);   ()중요 
	}

	cout << "나이 확인합니다" << endl;

	for (int k = 0; k < humans; k++){
		int age = 0;
		
		age = ptrhumans[k];
		cout << ptrhumans[k] << " ";

		if (age < 8) {
			total = total + 5000;
		}
		else if (age < 20) {
			total = total + 10000;
		}
		else if (age >= 20) {
			total = total + 20000;
		}
		else {
			cout << "정상적인 나이가 아닙니다." << endl;
			break;
		}
	}

	cout << "\n 총 입장료는 " << total << "원입니다" << endl;




	delete[] ptrhumans;  //동적 할당 해지
	ptrhumans = nullptr; //힙 메모리를 가르키고 있던 포인터를 지운다. 

	//스택은 하면 사라짐
	//힙은 안없어짐


	return 0;
}