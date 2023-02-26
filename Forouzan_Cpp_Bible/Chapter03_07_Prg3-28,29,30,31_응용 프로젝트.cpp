//
// Created by rudnf on 2023-02-25.
//
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    /*1. �ε��Ҽ��� �����ϱ�
     * : ���ڿ��� ���� �κа� �Ҽ��� �Ʒ� �κ��� �и��ؼ� �����ϴ� ���α׷�*/

    //��������
    double number;
    int intPart;
    double fractPart;

    //�Է¹ޱ�
    cout << "�ε� �Ҽ��� �Է� : ";
    cin >> number;

    //ó��
    intPart = static_cast<int>(number); // ����� �ڷ��� ��ȯ(ĳ����) static_cast<�ڷ���>(ǥ����)
    fractPart = number - intPart;



    //���
    cout << fixed <<showpoint << setprecision(2);
    //fixed �����Ҽ��� ���
    //showpoint �Ҽ��� �Ʒ��κ� ��� (�Ű����� x)
    //setprecision(n) �Ҽ��� �ڿ� �� �ڸ����� ����Ұ���(�Ű�����o)

    cout << "���� �� : "<<number <<endl;
    cout << "���� �κ� : "<<intPart <<endl;
    cout << "�Ҽ��� �Ʒ� �κ� : "<<fractPart<<endl;

    /*2. ������ ù ��° �ڸ��� �����ϱ�*/

    //���� ����
    unsigned int givenInt, firstDigit;

    //�Է� �ޱ�
    cout << "���� ���� �Է� : ";
    cin >>givenInt;

    //ó��
    firstDigit = givenInt%10;

    //���
    cout << "�Է��� ���� : "<<givenInt<<endl;
    cout << "ù ��° �ڸ��� ���� : "<<firstDigit<<endl;

    /*3. �ʴ����� �ð��� ��,��,�� ������ ����� ��ȯ�ϱ�*/

    //���� ����
    unsigned long duration, hours, minutes, seconds;

    //�Է¹ޱ�
    cout << "�� ���� �ð��� ���� ������ �Է� : ";
    cin >> duration;

    //ó��
    hours = duration/3600L;
    minutes = (duration-(hours*3600L))/60L;
    seconds = duration - (hours*3600L)-(minutes*60);

    //���
    cout <<"�Էµ� �� ���� �ð� : " <<duration<<endl;
    cout << hours<<"��";
    cout << minutes<<"��";
    cout << seconds<<"��"<<endl;


    /*��հ� �л걸�ϱ�
     * : 3���� ������ �Է¹ް�, �̸� ���ϰ� ����� ã�� ��, �� ������ �л��� ���ϴ� ���α׷�*/

    //��������
    int num1, num2, num3;
    int sum;
    double average;
    double dev1 , dev2, dev3;

    //�Է¹ޱ�
    cout << "ù ��° ���� �Է� : ";
    cin >> num1;
    cout << "�� ��° ���� �Է� : ";
    cin >> num2;
    cout << "�� ��° ���� �Է� : ";
    cin >> num3;

    //ó��
    sum = num1+num2+num3;
    average = static_cast<double>(sum)/3;
    dev1 = num1 - average;
    dev2 = num2 - average;
    dev3 = num3 - average;

    //���
    cout << fixed <<setprecision(2);
    cout << "�� ������ �� : "<<sum<<endl;
    cout << "��� : "<<setw(9) <<average<<endl; // setw(n) ���� �Ҽ��� ��¹�� | n �ʵ�ũ��
    cout << "ù ��° ������ �л� : "<<setw(9) <<dev1 <<endl;
    cout << "�� ��° ������ �л� : "<<setw(9) <<dev2 <<endl;
    cout << "�� ��° ������ �л� : "<<setw(9) <<dev3 <<endl;




    return 0;
}