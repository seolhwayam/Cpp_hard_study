//
// Created by rudnf on 2023-02-12.
//
#include <iostream>
using namespace std;

int main(){
    //�������
    const unsigned int pennyValue = 1;
    const unsigned int nickelValue = 5;
    const unsigned int dimeValue = 10;
    const unsigned int quarterValue = 25;
    const unsigned int dollarValue = 100;

    //��������(�� ������ ��)
    unsigned int pennies;
    unsigned int nickels;
    unsigned int dimes;
    unsigned int quarters;
    unsigned int dollars;

    //��ü ���� ��Ÿ���� ���� ����
    unsigned long totalValue;

    //���� �Է¹ޱ�
    cout << "����� ��:" ;
    cin >> pennies;
    cout << "������ ��:" ;
    cin >> nickels;
    cout << "������ ��:" ;
    cin >> dimes;
    cout << "������ ��:" ;
    cin >> quarters;
    cout << "�޷��� ��:" ;
    cin >> dollars;

    //��ü �ݾ� ���
    totalValue = pennies*pennyValue + nickels*nickelValue + dimes*dimeValue + quarters*quarterValue + dollars*dollarValue;

    //��� ���
    cout << "��ü ����"<<totalValue<<"����Դϴ�.";
    return 0;



}