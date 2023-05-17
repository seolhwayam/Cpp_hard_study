//#include<iostream>
//using namespace std;
//
//int main() {
	// ② 배열

	//1) 초기화 안했을 경우 에러
	//int arr[4]; // 4개의 공간을 담을 수 있음
	//arr[0] = -9;
	//arr[3] = 30000;

	//cout << arr[3] << endl; //30000
	//cout << arr[2] << endl; // 더미값(쓰레기값) 출력


	//2) 배열 생성 시 셋팅 01
	//int arr[4] = { 0 };
	//arr[0] = -9;
	//arr[3] = 30000;

	//cout << arr[3] << endl; //30000
	//cout << arr[2] << endl; // 0

	//for (int i = 0; i < 4; i++) {
	//	cout << arr[i] << endl;
	//}
	
	//3) 배열 생성 시 셋팅 02 (생성과 동시에 초기화)
	/*int arr[4] = { -9,0,0,3000 };

	for (int i = 0; i < 4; i++) {
		cout << arr[i] << endl;
	}


	

	

	return 0;
}*
