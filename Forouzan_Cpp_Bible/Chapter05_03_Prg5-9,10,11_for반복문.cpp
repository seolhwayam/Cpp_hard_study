//
// Created by rudnf on 2023-03-08.
//
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    /*0���� n-1���� for �ݺ������� ����ϱ�*/

    cout << "Prg5-9 0���� n-1���� for �ݺ������� ����ϱ�"<<endl;

    // ����
    int n;

    // ���� n�Է¹ޱ�
    cout << "����� ������ �Է��ϼ��� : ";
    cin >>n;

    // �ݺ���
    for (int counter =0; counter<n; counter++){
        cout<<counter<<" ";
    }

    cout <<endl;

    /*7�� ���� �� �ִ� ���� ����ϱ�
     *  : 1~300�� ������ �ִ� 7�� ���� �� �ִ� ������ 10���� ���� ���� ǥ �������� ����ϴ� ���α׷�*/

    cout << "Prg5-10 7�� ���� �� �ִ� ���� ����ϱ�"<<endl;

    // ����� �ʱ�ȭ
    int lower =1;
    int higher = 300;
    int divisor=7;
    int col =1;

    // ó��
    for(int i =lower;i<higher;i++){
        if(i%divisor==0){
            cout <<setw(4)<<i;
            col++;
            if(col>10){
                cout <<endl;
                col =1;

            }
        }
    }

    cout << endl;

    /*�� ���� �޷� ���·� ����ϱ�
     *  : �� ���� ��¥ ���� ù ���� ������ �Է��ϰ� �޷� ���·� �� ���� ����ϴ� ���α׷�*/

    cout << "Prg5-11 �� ���� �޷� ���·� ����ϱ�"<<endl;



    return 0;
}