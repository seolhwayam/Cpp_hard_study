//
// Created by rudnf on 2023-02-13.
//
#include <iostream>
using namespace std;

int main(){
    //변수 선언과 초기화
    int x = -1245;  //True
    unsigned int y = 1245; //True
    unsigned int z = -2367; // 논리적 오류, 음수 값이 양수 값으로 바뀜
    unsigned int t = 14.56; // 소수점 아래 부분이 잘림
    //초기화된 값 출력
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    cout << t;
    return 0;

    // int 소수 리터럴 초기화 시 소수부분 제거됨
}