//
// Created by rudnf on 2023-02-15.
//
# include <iostream>
# include <string>
using namespace std;

int main(){
    //Chapter02 ��������

    // ���α׷��� ���� 01
    cout << "�� �ﰢ�� ��� ���α׷� �� "<<endl;
    cout<<"*\n**\n***" <<endl;

    cout << "---------------------------"<<endl;

    // ���α׷��� ���� 02
    cout << "�� �ﰢ��2 ��� ���α׷� �� "<<endl;
    cout<<"*\n**\n***\n**\n*"<<endl;

    cout << "---------------------------"<<endl;

    // ���α׷��� ���� 03
    cout << "�� H ��� ���α׷� �� "<<endl;
    cout<<"H     H\nH     H\nHHHHHHH\nH     H\nH     H"<<endl;


    // ���α׷��� ���� 04  : �ð�, ��, �� ������ �ð��� �Է¹޾Ƽ� �� ������ ȯ���� ����ϴ� ���α׷�
    cout << "�� �ð� �ʴ��� ȯ�� ��� ���α׷� �� "<<endl;

    //��������
    double hour;
    double minuite;
    double second;
    double total_04;

    //�ð�, �� ,�� �Է¹ޱ�
    cout<< "�ð� : "<<endl;
    cin >> hour;
    cout<< "�� : "<<endl;
    cin >> minuite;
    cout<< "�� : "<<endl;
    cin >> second;

    total_04 = (hour*3600)+(minuite*60)+second;
    cout << total_04<< endl;
    cout << "---------------------------"<<endl;

    // ���α׷��� ���� 05  : ����ڷκ��� 4���� ���ڸ� �Է¹ް�, �� ���� ����ϴ� ���α׷�
    cout << "�� ����4�� �Է¹޾� �ջ� ��� ���α׷� �� "<<endl;

    //���� ����
    int a;
    int b;
    int c;
    int d;
    int total_05;
    // �Է¹ޱ�
    cout << " ù ��° ���� : "<<endl;
    cin >> a;
    cout << " �� ��° ���� : "<<endl;
    cin >> b;
    cout << " �� ��° ���� : "<<endl;
    cin >> c;
    cout << " �� ��° ���� : "<<endl;
    cin >> d;
    total_05 = a+b+c+d;
    cout << " �� �԰� �ݾ� : "<<total_05<<endl;
    cout << "---------------------------"<<endl;


    // ���α׷��� ���� 06  : ���簢���� �� �ϳ��� �־����� ��, �� ������ �ѷ��� ���ϴ� ���α׷�
    cout << "�� ���簢�� ������ �ѷ� ��� ���α׷� �� "<<endl;

    // ���� ����
    int side;
    int area;
    int circumference;

    //���簢�� �� �Է¹ޱ�
    cout << " ���簢�� �Ѻ��� ���� : "<<endl;
    cin >> side;
    area = side*side;
    circumference = side*4;

    cout<< "���簢�� ���� : " << area << "/ ���簢�� �ѷ� : " << circumference <<endl;
    cout << "---------------------------"<<endl;

    // ���α׷��� ���� 07  : ����ڷκ��� ���� �̸��� �Է¹��� ��, ������ ���� ����� �̸� ǥ������ ���� �̸��� ����ϴ� ���α׷�(ex��ȭ, ��)
    cout << "�� ������̸� ǥ�� ��� ���α׷� �� "<<endl;

    // ���� ����
    string name;
    string firtst_name;

    // �Է� �ϱ�
    cout << "�̸� : "<<endl;
    cin >> name;
    cout << "�� : " <<endl;
    cin >> firtst_name;

    cout << "����� �̸� : "<< name<<", "<<firtst_name<<endl;
    cout << "---------------------------"<<endl;

    // ���α׷��� ���� 08  : ����ڷκ��� 2���� ������ �Է¹��� ��, �� ���� ����ϴ� ���α׷�(�پ��� ���� ���)
    cout << "�� 2�� ���� �޾Ƽ� �հ� ��� ���α׷� �� "<<endl;

    // ���� ����
    int num1;
    int num2;
    int total_08;

    // �Է� �ޱ�
    cout << "ù ��° ����"<<endl;
    cin >> num1;
    cout << "�� ��° ����"<<endl;
    cin >> num2;
    total_08 = num1+num2;
    cout << "�� ������ �� : "<<total_08<<endl;

    cout << "---------------------------"<<endl;

    // ���α׷��� ���� 09  : �Һ񼼰�9%��� �����ϰ�, �Ǹ� �ݾ��� �־����� ��, ������ ���� ����ϴ� ���α׷�(�Һ񼼴� ����� ����)
    // �Ǹűݾ� / �Һ� / ��ü�ݾ�

    cout << "�� �Ǹűݾ�/�Һ�/��ü�ݾ� ��� ���α׷� �� "<<endl;

    // ���� ����
    const double Tax = 0.09;
    int cost;
    int cost_Tax;
    double total_09;

    // �Է� �ޱ�
    cout << "�Ǹűݾ� : " <<endl;
    cin >> cost;
    cost_Tax = cost*Tax;
    total_09 = cost - cost_Tax;

    cout << "�Ǹűݾ� : "<< cost << " / �Һ� : " << cost_Tax << " / ��ü�ݾ� : "<< total_09<<endl;

    cout << "---------------------------"<<endl;

    // ���α׷��� ���� 10  : �־��� ��/�� �̸�, �� �̸�, �����̸�, ���ι�ȣ , �����ȣ�� ������ ���� �������� ����ϴ� ���α׷�
    //(�����, ������, �����, 133, 07798)
    cout << "�� ��.��, ��, ����, �����ȣ ��� ���α׷� �� "<<endl;

    // ���� ����
    string city;
    string town;
    string road;
    string road_number;
    string zip_coad;

    //�Է¹ޱ�
    cout << " ��/�� : " <<endl;
    cin >> city;
    cout << " �� : " <<endl;
    cin >> town;
    cout << " �����̸� : " <<endl;
    cin >> road;
    cout << " ���ι�ȣ : " <<endl;
    cin >> road_number;
    cout << " �����ȣ : " <<endl;
    cin >> zip_coad;

    cout << "("<<city<<", "<<town<<", "<<road<< ", " <<road_number << ", "<< zip_coad<<")";





    return 0;



}