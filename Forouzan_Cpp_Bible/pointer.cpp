//
// Created by rudnf on 2023-05-23.
//
#include <iostream>
using  namespace std;

int main(){
//    cout << "1. int Ÿ��" << endl;
//    cout << "1) int" << endl;
//    int a = 10;
//    int* pa = &a;
//
//    cout << pa << endl; // ������ �ִ� ��(a)�� �ּ�   0x59421ff838
//    cout << *pa << endl; // ������ �ִ� ��           10
//    cout << &pa << endl; // pa�� �ּ�              0x59421ff830
//    cout << &a << endl; // a�� �ּ�                0x59421ff838
//
//    cout << "2) int �迭" << endl;
//    int ab[] = {0,1,2,3};
//    int* pab = ab; // �迭�� �����ͷ� ����
//
//    cout << ab << endl; //ù��° ���� �ּ�         0x59421ff820
//    cout << &ab << endl; // ù��° �����ּ�        0x59421ff820
//    cout << *ab << endl; // ù��° ���� ��        0
//    cout << *ab+1 <<endl; //ù��° ���� ��(0)+1   1
//    cout << *ab+5 <<endl; //ù��° ���� ��(0)+5   5
//
//    cout <<pab << endl; //ù��° ���� �ּ�         0x59421ff820
//    cout << pab+1 << endl; // �ι��� ���� �ּ�     0x59421ff824
//    cout <<&pab << endl;  // pab�ּ�             0x59421ff818
//    cout << *pab << endl; // ù��° ����          0
//    cout << *pab+1 << endl; //ù��° ���� ��(0)+1 1
//    cout << *pab+5 << endl; //ù��° ���� ��(0)+5 5
//    cout << *(pab+1) << endl; // �ι��� ����      1
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
//    cout << "2.charŸ��" << endl;
//    cout << "1)char" << endl;
//    char b = 'b';
//    char* pb = &b;
//
//    cout << &b << endl; //b
//    cout << pb << endl; // b
//    cout <<&pb << endl;// b�� �ּ�  0x5e14dffb48
//    cout <<*pb << endl; //b

    cout << "2)char �迭" << endl;
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