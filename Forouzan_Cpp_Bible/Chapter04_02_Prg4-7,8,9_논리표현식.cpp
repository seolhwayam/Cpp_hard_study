//
// Created by rudnf on 2023-03-01.
//
#include <iostream>
using namespace std;

int main(){
    /* ���� ���� Ȯ���ϱ�
     *  : �ڵ����� �뿩�� �� �ִ� ���� ������ Ȯ���ϴ� ���α׷�*/

    // ��������
    int age;
    bool eligible;

    // �Է¹ޱ�
    cout << "���̸� �Է��ϼ��� : ";
    cin >> age;

    // ���Ǽ���
    eligible = (age >=25) && (age <= 100);

    // ���� ������� ���
    if(eligible){
        cout << "�ڵ����� �뿩�� �� �ֽ��ϴ�. ";
    }else{
        cout << "�˼��մϴ�. �ڵ����� �뿩�� �� �����ϴ�.";
    }


    return 0;
}
