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

    // ����� �ʱ�ȭ
    int startDay;
    int daysInMonth;
    int col_11 = 1;

    // �� ���� ��¥ ��ȿ�� �˻�
    do{
        cout << "�� ���� ��¥ ���� �Է��ϼ���(28,29,30,31) : ";
        cin >> daysInMonth;
    } while (daysInMonth<28||daysInMonth>31);


    do{
        cout<< "ù ���� ������ �Է��ϼ���(0~6) : ";
        cin >>startDay;
    } while (startDay<0||startDay>6);

    // ���� ���
    cout << endl;
    cout << "Sun Mon Tue Wed Thr Fri Sat"<<endl;
    cout <<"--- --- --- --- --- --- ---"<<endl;

    // �޷� ���� ���� ���
    for(int space=0; space<startDay; space++){
        cout <<"   ";
        col_11++;
    }

    // �޷� ���
    for(int day=1; day<=daysInMonth; day++){
        cout << setw(3)<<day<<" ";
        col_11++;
        if(col_11>7){
            cout <<endl;
            col_11=1;
        }
    }

    /*for �ݺ���
     * for(�ʱ�ȭ;����'����){
     *      ���๮    }*/



    return 0;
}