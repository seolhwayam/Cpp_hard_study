//
// Created by rudnf on 2023-05-23.
//
#include <iostream>
using  namespace std;

int main(){
//    cout << "1. int 타입" << endl;
//    cout << "1) int" << endl;
//    int a = 10;
//    int* pa = &a;
//
//    cout << pa << endl; // 가지고 있는 값(a)의 주소   0x59421ff838
//    cout << *pa << endl; // 가지고 있는 값           10
//    cout << &pa << endl; // pa의 주소              0x59421ff830
//    cout << &a << endl; // a의 주소                0x59421ff838
//
//    cout << "2) int 배열" << endl;
//    int ab[] = {0,1,2,3};
//    int* pab = ab; // 배열은 포인터로 동작
//
//    cout << ab << endl; //첫번째 원소 주소         0x59421ff820
//    cout << &ab << endl; // 첫번째 원소주소        0x59421ff820
//    cout << *ab << endl; // 첫번째 원소 값        0
//    cout << *ab+1 <<endl; //첫번째 원소 값(0)+1   1
//    cout << *ab+5 <<endl; //첫번째 원소 값(0)+5   5
//
//    cout <<pab << endl; //첫번째 원소 주소         0x59421ff820
//    cout << pab+1 << endl; // 두번쟤 원소 주소     0x59421ff824
//    cout <<&pab << endl;  // pab주소             0x59421ff818
//    cout << *pab << endl; // 첫번째 원소          0
//    cout << *pab+1 << endl; //첫번째 원소 값(0)+1 1
//    cout << *pab+5 << endl; //첫번째 원소 값(0)+5 5
//    cout << *(pab+1) << endl; // 두번쨰 원소      1
//    cout << pab[2] << endl; // 2                2
//
//
//    for(int i=0; i<5 ; i++){
//        cout << &ab[i] << endl;
//        cout << pab+i  << endl;
//    }
//    /*
//    0x59421ff820
//    0x59421ff824
//    0x59421ff828
//    0x59421ff82c
//    0x59421ff830
//     */
//
//
//    cout << "2.char타입" << endl;
//    cout << "1)char" << endl;
//    char b = 'b';
//    char* pb = &b;
//
//    cout << &b << endl; //b
//    cout << pb << endl; // b
//    cout <<&pb << endl;// b의 주소  0x5e14dffb48
//    cout <<*pb << endl; //b

    cout << "2)char 배열" << endl;
    char bb[] = {'a','b','c','\n'};
    char* pbb = bb;

    cout << bb << endl;
    cout << *bb << endl;
    cout << &bb << endl;
    cout << bb+1 << endl;
    cout << bb+5 << endl;
    cout << *bb+1 << endl;
    cout << *(bb+1) <<endl;
    cout << *(bb+2) << endl;

    cout << pbb << endl;
    cout << *pbb << endl;
    cout << &pbb << endl;
    cout << &pbb+1 << endl;
    cout << pbb+1 << endl;
    cout << *pbb+1 <<endl;
    cout <<*(pbb+1)<<endl;
    cout << pbb[2] << endl;


    return 0;
}