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

    /*점수를 기반으로 학점 출력하기
     *  : switch 조건을 사용해서 점수를 기반으로 학점 출력하기*/

    cout << "★ default문 추가된 switch문" <<endl;

    // 변수선언
    int score;
    char grade_01;

    // 입력받기
    cout << "0~100점 사이의 점수를 입력하세요 : ";
    cin >> score;

    // 의사결정
    switch (score / 10) {
        case 10: grade_01 = 'A';
                break;
        case 9 : grade_01 = 'A';
                break;
        case 8 : grade_01 = 'B';
                break;
        case 7 : grade_01 = 'C';
                break;
        case 6 : grade_01 = 'D';
                break;
        default: grade_01 = 'F';

    }
    //출력
    cout << "Score : "<<score<<endl;
    cout << "Grade : " << grade_01 << endl;

    /*학점을 기반으로 pass/fail 출력하기
     *  : switch 조건문을 사용해서 pass/fail 학점 찾기*/

    cout << "★ switch문 분기결합" <<endl;

    // 변수선언
    char grade_02;

    // 입력받기
    cout << "학점을 입력하세요(A,B,C,D,F) : ";
    cin >> grade_02;

    // 의사결정
    switch (grade_02) {
        case 'A':
        case 'B':
        case 'C': cout << "pass 입니다.";
                  break;
        case 'D':
        case 'F': cout << "fail 입니다.";
                  break;
        default: cout << "입력 오류입니다. 다시 시도하세요.";


    }


    /*switch
     *  : 특정한 값을 기반으로 조건을 분기할 떄 사용
     * ① switch(표현식){
     *         case 값1 : 실행문;
     *         case 값2 : 실행문;}
     *  case 값 하나라도 걸리면 아래 실행문 모두 실행
     *
     * ② switch(표현식){
     *         case 값1 : 실행문;
     *                    break;
     *         case 값2 : 실행문;
     *                    break;}
     *  case 값에 걸리면 해당 실행문만 실행후 종료
     *
     *  ③ switch(표현식){
     *         case 값1 : 실행문;
     *         case 값2 : 실행문;
     *         default : 실햄문;}
     *  case 값에 걸리지 않아도 default 실행문 무조건 실행
     *
     *  - break : 종료
     *  - default : 모든 분기에도 진입하지 못한 경우 특정 문장을 실행함
     *       */




	return 0;
}