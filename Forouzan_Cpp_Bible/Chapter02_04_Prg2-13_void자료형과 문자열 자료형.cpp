//
// Created by rudnf on 2023-02-14.
//
   /*  string Ŭ���� ����ϱ�
    *  : �̸�, �̴ϼ�, ���� �Է¹ް� �����ؼ� ����ϴ� ���α׷�
    * */
#include <iostream>
#include <string> // string Ŭ������ ����Ϸ��� �о� �鿩�� ��.
using namespace std;

int main(){
   //���� ����
   string first;
   string initial;
   string last;
   string space = " ";
   string dot = ".";
   string fullName;

   // �̸�, �̴ϼ�, �� �Է¹ޱ�
   cout << "�̸�(first name) �Է��ϱ� : " ;
   cin >> first;
   cout << "�̴ϼ�(initial) �Է��ϱ� : ";
   cin >> initial;
   cout << "��(last name) �Է��ϱ� : ";
   cin >> last;

   //���� �����ڸ� ����ؼ� ���ڿ� ����
   fullName = first + space + initial + dot + space + last;

   //��ü �̸� ���
   cout << "��ü �̸�(full name) : " << fullName;

    return 0;
    /* void �ڷ���
     * : �� ���� ����
     *   �� �Լ��� � ���� ����� ���� �ʴ´�
     *
     * ���ڿ� �ڷ���
     *  : Null���ڷ� ������ ������ ����
     *    �� \0 �ι���(���� ����)
     *    �� string  "ū ����ǥ"
     *    �� �� #include <string> >> string �о���̱�(������� �б�)
     *
     *  ���ڿ��� ����
     *  : + �� ����
     *    ���ڿ� + ���ڿ�
     * */
}