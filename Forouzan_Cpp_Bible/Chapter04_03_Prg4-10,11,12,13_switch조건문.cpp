#include<iostream>
using namespace std;

int main() {
	/*요일 출력하기
	 : switch조건문을 사용해서 특정 요일부터 마지막 요일까지 출력하는 프로그램*/

	// 변수선언
	int day;

	// 입력받기
	cout << "0~6 범위의 정수를 입력하세요";
	cin >> day;

	//switch 조건문(의사 결정하고 출력)
	switch (day)
	{
	    case 0: cout << "일요일" << endl;
		case 1: cout << "월요일" << endl;
		case 2: cout << "화요일" << endl;
		case 3: cout << "수요일" << endl;
		case 4: cout << "목요일" << endl;
		case 5: cout << "금요일" << endl;
		case 6: cout << "토요일" << endl;

	}

    /*주어진 날짜의 요일 출력하기
     * : switch 조건문과 break 구문을 조합해서 요일을 출력하는 프로그램*/

    cout << "★ break문 추가된 switch문" <<endl;

    switch (day)
    {
        case 0: cout << "일요일1" << endl;
                cout << "한 주의 첫 번째 요일 입니다."<<endl;
        case 1: cout << "월요일" << endl;
                break;
        case 2: cout << "화요일" << endl;
                break;
        case 3: cout << "수요일" << endl;
                break;
        case 4: cout << "목요일" << endl;
                break;
        case 5: cout << "금요일" << endl;
                break;
        case 6: cout << "토요일" << endl;
                cout <<"한 주의 마지막 요일입니다."<<endl;
                break;

    }




	return 0;
}