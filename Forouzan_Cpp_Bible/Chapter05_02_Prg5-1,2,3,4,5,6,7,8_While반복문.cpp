//
// Created by rudnf on 2023-03-06.
//

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(){
    /*while반복문으로 특정 수 만큼 반복하기1
     *  : while반복문을 사용해서 메시지를 10회 출력하기*/

    cout << "Prg5-1 while반복문으로 특정 수 만큼 반복하기1 "<<endl;

    // 카운터 선언하고 초기화
    int counter_01 =0;

    //while반복문
    while(counter_01 < 10){
        cout <<"Hello world!"<<endl;
        counter_01++;
    }

    /*while 반복문으로 특정 수만큼 반복하기2
     *  : 카운터 제어 while 반복문을 사용해서 학생 점수의 평균을 구하는 프로그램*/

    cout << "Prg5-2 while반복문으로 특정 수 만큼 반복하기1 "<<endl;

    // 선언
    int score;
    int sum = 0;
    double average;

    // 반복문
    int counter_02 = 0;
    while(counter_02<4){
        //처리(숫자를 읽어 들이고 변수 sum에 더하기
        cout << "점수를 하나 입력하세요(0~100의 범위) : ";
        cin >>score;
        sum = sum+score;
        counter_02++;
    }

    // 결과 출력
    average = static_cast<double>(sum)/4;
    cout << fixed <<setprecision(2)<<showpoint;
    cout << "평균 점수 = "<<average<<endl;

    /*정수 0~n-1까지 반복문으로 출력하기*/
    cout << "Prg5-3 정수 0~n-1까지 반복문으로 출력하기 "<<endl;

    // 선언
    int n,counter_03;

    // 변수 n입력받기
    cout << "출력할 정수를 입력하세요 : ";
    cin >> n;

    // 정수 출력
    counter_03 = 0;
    while(counter_03 < n){
        cout << counter_03 << endl;
        counter_03++;
    }

    /*while 반복문으로 수열의 합 구하기*/

    cout << "Prg5-4 while 반복문으로 수열의 합 구하기 "<<endl;

    // 선언하고 초기화
    int sum1 =0, sum2=0,sum3 =0;
    int m;

    // 변수 m 입력받기
    cout << "m의값 입력 : ";
    cin >> m;

    //while반복문
    int counter_04 = 1;
    while(counter_04<=m){
        sum1 += counter_04;
        sum2 += counter_04*counter_04;
        sum3 += counter_04*counter_04*counter_04;
        counter_04++; //카운터 변경
    }
    // 결과 출력
    cout << "m의 값 = "<<m<<endl;
    cout << "sum1의 값 : "<<sum1 <<endl;
    cout << "sum2의 값 : "<<sum2 <<endl;
    cout << "sum3의 값 : "<<sum3 <<endl;

    /*센티넬 제어 반복문으로 입력한 숫자의 합 구하기
     *  : 센티넬 제어 while반복문을 사용해서 숫자들의 합 찾기*/

    cout << "Prg5-5 센티넬 제어 반복문으로 입력한 숫자의 합 구하기 "<<endl;

    // 선언
    int sum_05 = 0;
    int num_05;

    // 입력받고 반복문 돌리기
    cout << "정수를 입력하세요(종료하려면 -1 입력) : ";
    cin >>num_05;
    while (num_05 != -1){
        sum_05 = sum_05 +num_05;

        cout <<"정수를 입력하세요(종료하려면 -1 입력) : ";
        cin >>num_05;
    }

    // 결과 출력
    cout << "합 : "<<sum_05<<endl;

    /*EOF 제어 반복문으로 숫자의 합 구하기
     *  : EOF제어 While 반복문을 사용해 키보드로 입력한 숫자들의 합을 구하는 프로그램*/
    cout << "Prg5-6 EOF 제어 반복문으로 숫자의 합 구하기 "<<endl;

    // 선언
    int sum_06;
    int num_06;

    // 초기화하고 반복문 돌리기
    cout << "첫 번째 숫자를 입력하세요(종료하려면 EOF 입력) : ";
    while(cin>>num_06){
        sum_06=sum_06+num_06;
        cout <<"다음 숫자를 입력하세요 : ";
    }

    // 출력
    cout << "합"<< sum_06<< endl;

    /*파일의 EOF를 사용하여 숫자의 합 구하기
     *  : EOF제어 while 반복문을 사용해서 파일에 저장된 숫자들의 합을 구하는 프로그램*/

    cout << "Prg5-7 파일의 EOF를 사용하여 숫자의 합 구하기 "<<endl;

    //선언
    int sum_07 =0;
    int num_07;
    ifstream infile;

    //파일열기
    infile.open("numbers.dat");

    //while 반복문
    while(infile>>num_07){
        sum_07=sum_07+num_07;
    }

    //결과 출력
    cout <<"합 = "<<sum_07<<endl;
    infile.close();

    /*플래그 사용하기
     *  : EOF와 플래그를 사용해서 반복문 종료하기*/

    // 선언
    ifstream infile_08;
    int num_08;
    bool flag;

    // 파일열기
    infile_08.open("number.dat");

    // 150이상의 숫자를 찾기 위한 반복문
    flag =false;
    while(infile_08>>num_08&& !flag){
        if(num_08>=150){
            cout <<"찾는 숫자 = "<<num_08;
            flag = true;
        }
    }

    //플래그 확인
    if(!flag){
        cout <<"찾는 숫자가 파일에 존재하지 않습니다."<<endl;
    }
    infile_08.close();

    /*while반복문
     * ① while(조건문){
     *        문장   }
     *
     * ② 카운터 제어 while반복문
     *    변수 = 초기화
     *    while(조건문){
     *        문장
     *        변수 변경하기(ex 변수++}
     *
     * ③ 이번트 제어 while반복문
     *    첫 번째 항목 입력
     *    while(이벤트가 발생하지 않는 조건){
     *           행동
     *           다음항목 입력 }
     *
     * ④ 센티넬제어 while반복문
     *    - 센티넬 : 처리중지를 나타내기 위한 항목 >> 센티넬 만나는 순간 반복문 종료
     *    ex)
     *    변수
     *    while(변수 != 1){
     *         행동
     *         변수변경 }
     *    ▲ 위에서 센티넬은 1
     *      1이 아닐경우에만 반복 | 1(센티넬)이면 반복 종료
     *
     * ⑤ EOF 제어 while반복문
     *    - EOF : 더 이상 키보드로부터 입력된 데이터가 없다 | 파일의 끝부분에 도달했습니다. 의미
     *            * 키보드 Ctrl+Z (^Z)
     *              while(cin >> num){처리}
     *
     *            * 파일 (#include<fstream>)
     *              ifstream 변수
     *              변수.open("파일명")
     *              변수.close()
     *              while(변수 >>num){처리}
     *
     * ⑥ 플래그 제어 while반복문
     *    - 플래그 : bool의 다른 표현
     *              플래그 false설정 후 >> 조건 발생 >> 플래그 true변경
     *
     * while반복문 주의
     * ① while 반복문은 조건확인 > 본문 실행(조건이 안되면 실행 x)
     *
     *        */







    return 0;
}
