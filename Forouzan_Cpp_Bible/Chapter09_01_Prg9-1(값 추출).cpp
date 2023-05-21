//
// Created by rudnf on 2023-05-21.
//
#include <iostream>
using  namespace  std;

int main(){
    /*값에 접근하기
     * : 원본 변수와 참조 변수를 선언하고
     *   초기화한 뒤에 각각의 변수를 사용해
     *   값에 접근하는 방법을 보여주는 프로그램*/

    // 참조 관계 생성
    int Score = 92;
    int& rScore = Score;

    // 데이터 변수를 사용해서 접근
    cout << "데이터 변수를 사용해서 값에 접근하기"<< endl;
    cout << "Score: "<< Score << endl;

    // 참조 변수 사용해서 접근
    cout << "참조 변수를 사용해서 값에 접근하기 "<< endl;
    cout << "rScore: " << rScore << endl;

    /*참조
     * 1. 객체의 또 다른 이름(별칭)
     * 2. 같은 메모리 위치 사용(값 동일/ 자료형은 다름)
     * 3. 변수의 자료형과 참조 변수가 나타내는 자료형 일치 해야됨
     * 4. 참조관계는 한 번 정의되면 변경 할 수 없다.
     * 5. 단순 값 연결 x (ex) int& x =92; -> xxxx*/
    return 0;
}