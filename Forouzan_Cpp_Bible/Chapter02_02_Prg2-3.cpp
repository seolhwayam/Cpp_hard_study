//
// Created by rudnf on 2023-02-11.
//
/* *************************************************
 * Ű����κ��� 2���� ���� ���� �Է¹��� �ڿ�
 * �� ���� ���� �� ����ϴ� ���α׷�
 ***************************************************/
#include <iostream>

using namespace std;

int main()
{
    //����
    int num1;
    int num2;
    int sum;
    //�Է¹ޱ�
    cout <<"ù ��° ���� �Է�:" ;
    cin >> num1;
    cout <<"�� ��° ���� �Է�:" ;
    cin >> num2;
    // ���� ��� ����
    sum = num1+num2;
    //���
    cout << "�� ������ ��:"<<sum <<endl;

    // ���
    int radius;
    const int PI = 3;
    cout<<"������ ���� :";
    cin >>radius;
    int perimeter = 2 * PI * radius;
    cout << "���� ���� :";
    cout << perimeter;
    return 0;

    /* �Է¹ޱ�  cin >> "����"
     * ����ϱ�  cout << ��

     * �Ҵ翬���� (=)

     * ��� (const)
     * : ���� ������ �� ���� ����� ��ƼƼ

     * ���ͷ�
     * : �޸𸮿� ������� �ʰ� Ȱ���� �� �ִ� ��
     */
}
