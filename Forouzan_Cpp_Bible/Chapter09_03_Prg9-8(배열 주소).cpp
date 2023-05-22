//
// Created by rudnf on 2023-05-22.
//
#include <iostream>
using namespace std;

int main(){
    /*배열 요소들의 주소를 확인하는 프로그램
     * : 시스템이 배열에 있는 요소를 포인터로 다룬다는 것을 확인하기 위한 프로그램*/

    //5개의 int 자료형을 갖는 배열 선언
    int arr[5] = {0,1,2,3,4};
    int* parr = arr;


    for(int i=0 ; i<5 ; i++){
        cout <<"배열의 값 : " <<  arr[i] << endl;
        cout <<"포인터 연산을 사용한 주소 : " << i;
        cout << arr+i << endl;
        cout << "&연산자를 사용한 주소 : "<< i;
        cout << &arr[i] << endl << endl;
        cout << "=========================================================="<<endl;

        cout <<"포인터 연산을 사용한 값 : " << parr <<endl; //parr 의 주소
        cout <<"포인터 연산을 사용한 값 : " << *parr <<endl; //첫번째 원소의 값
        cout <<"포인터 연산을 사용한 값 : " << parr+i <<endl; //돌아가면서 원소 주소 출력
        cout <<"포인터 연산을 사용한 값 : " << *(parr+i)<<endl; //돌아가면서 원소 값 출력
        cout <<"포인터 연산을 사용한 값 : " << parr[4] << endl; //parr를 배열 처럼 사용하기
        cout << "=========================================================="<<endl;


    }



    return 0;
}