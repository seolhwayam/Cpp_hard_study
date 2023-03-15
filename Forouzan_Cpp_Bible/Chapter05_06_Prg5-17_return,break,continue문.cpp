//
// Created by rudnf on 2023-03-15.
//
#include <iostream>
using namespace std;

int main(){
    /*소수인지 확인하는 프로그램
     * : 소수를 찾았을 때 return 구문을 실행하는 프로그램
     *   어떤 숫자가 1인지 또는 복합소수인지 또는 소수인지
     *   확인하면 곧받고 main 함수를 벗어남*/

    // 선언
    int num;

    // 유효성 검사하면서 입력받기
    do{
        cout << "양의 정수를 입력하세요: ";
        cin >> num;
    }while(num<=0);

    // 1인지 확인
    if(num==1){
        cout <<"1은 소수도 합성수도 아닙니다.";
        return 0;
    }

    // 복합수 확인
    for(int i=2; i<num ; i++){
        if(num % i ==0){
            cout << num <<"은/는 합성수입니다. "<<endl;
            cout << i <<"로/으로 나누어집니다. "<<endl;
            return 0;
        }
    }
    // 결과출력
    cout << num <<"은/는 소수입니다."<<endl;
    return 0;

    /*1) return
     * : 현재 함수를 종료하고 함수를 호출한 쪽으로 제어를 리턴*
     *
     *2) break
     *  : 반복문 또는 switch조건문에서 사용할 수 있는 구문
     *    반복문 내부에서 break구문을 사용하면 반복을 중간에 종료하고 반복문을 벗어남
     *
     *3) continue
     *  : 현재 반복만 벗어나고, 반복문 전체를 종료하고 싶지 않을 때 사용
     *
     *  /

}
