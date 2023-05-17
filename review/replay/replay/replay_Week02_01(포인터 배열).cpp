//#include<iostream>
//using namespace std;
//
//int main() {
//
//
//	int arr[4] = { -9,0,0,30000 };
//	int* parr = &arr[0];
	/*포인터 변수 : 담은 것에 대해 주소를 가르킴
	  타입*  포인터 변수이름 = &담을 것 ;

	 */

	 /*for (int i = 0; i < 4; i++) {
		 cout << parr + i << endl;
	 }*/
	 // 주소 출력(parr 포인터 변수 : 담은 것에 대해 주소를 가지고 있음)

	 /*for (int i = 0; i < 4; i++) {
		 cout << *(parr + i) << endl;
	 }*/
	 // *(포인터 변수) : 담은 것에 대한 값을 출력


	 /*for (int i = 0; i < 4; i++) {
		 cout << parr[i] << endl;
	 }*/
	 //포인터를 배열 같이 사용(배열명은 포인터 상수 ) 
	 //parr에 담긴 arr의 값들이 출력된다.


	 /*for (int i = 0; i < 4; i++) {
		 cout << arr[i]<< endl;
	 }*/
	 // 배열 출력
	 // arr에 담긴 값들 출력

	 /*for (int i = 0; i < 4; i++) {
		 cout << arr+i << endl;
	 }*/
	 // 배열을 포인터 같이 사용
	 // arr에 담긴 값의 주소 출력

	 /*for (int i = 0; i < 4; i++) {
		 cout << *(arr+i) << endl;
	 }*/
	 // 배열을 포인터 같이 사용
	 // arr에 담긴 값 출력

	 //for (int i = 0; i < 4; i++) {
	 //	cout << *(parr + i) << endl; //  ③ 
	 //	cout << parr[i] << endl; //  ④ 
	 //	cout << arr[i] << endl; // ①
	 //	cout << *(arr + i) << endl; // ②
	 //}

	 // ★ 배열명은 포인터 상수다.
	 // ① 배열 인덱싱 하는 방법
	 //	  arr[i]
	 // 
	 // ② 배열명을 포인터 같이 쓰는 방법
	 //    *(arr+i)
	 // 
	 // ③ 포인터를 선언해서 포인터 변수+주소값의 가를키는 값  * 이용
	 //    *(parr+i)
	 // 
	 // ④ 포인터변수를 배열과 같이 쓰는 것(가능한 이유 : 배열명은 포인터 상수이다)
	 //    parr[i]

	 //return 0;
 //}

