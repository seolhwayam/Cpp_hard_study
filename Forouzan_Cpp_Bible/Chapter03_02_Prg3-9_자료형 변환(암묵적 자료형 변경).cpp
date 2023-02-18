//
// Created by rudnf on 2023-02-19.
//
#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
    /*�Ϲ��� �ڷ��� ��ȯ(�ΰ� �ۿ� ����)
     * -�ΰ��ۿ��� ���� �������� �ڷ����� ����
     * -ǥ������ �Ϲ��� �ڷ��� ��ȯ
     * */

    //����
    int x =123;
    long y = 140;
    double z = 114.56;

    //ǥ���� x + y �� �ڷ����� �� Ȯ��
    cout << "x + y�� �ڷ��� : "<< typeid(x+y).name()<<endl;
    cout << "x + y�� �� : "<<x+y<<endl;

    //ǥ���� x + y + z�� �ڷ����� �� Ȯ��
    cout << "x + y +z�� �ڷ��� : "<< typeid(x+y+z).name()<<endl;
    cout << "x + y +z�� �� : "<<x+y+z<<endl;

    /* �ڷ��� ��ȯ
    * 1. �Ϲ��� �ڷ��� ��ȯ(�ڵ�)
    *  : �ڷ����� �ڵ����� ��ȯ�Ǵ� ��
    *
    *  �ڷ��� Ȯ��
    *  #include <typeinfo>
    *  typeid(ǥ����).name()
    *
    *  �����ܰ�                                             �����ܰ�
    *  int > unsigned > long > unsigned long > double > long double
    *
    *  1) �Ϲ��� �ڷ��� �°�
    *     : ���� �ڷ����� �ǿ����ڸ� �� ū �ڷ������� �°�
    *       �� �ǿ������� �ڷ����� ��� ���꿡 �������� �ʴ� ���(�� �Ǵ� ����)
    *       �� �ǿ������� �ڷ����� ���� �����ڰ� ���� ���(short �Ǵ� float)
     *
     *
    *       <�Ϲ��� �ڷ��� �°�>
    *         ���� �ڷ���         �°ݵ� �ڷ���
    *         bool                 int
    *         char                 int
    *         short                int
    *         unsigned short       unsigned int
    *         float                double
    *
    *        bool, char , short �ڷ��� >> int
    *        float �ڷ��� >> double
    *
    *
    *
    *  2) �Ϲ��� �ڷ��� ����
    *     : �� �ڷ����� �ڷ����� ���ߴ� ����
     *     �� ���� ������ ��� �Ϲ��� �ڷ��� ���� x
     *
     *     - �ΰ��ۿ��� ���� ǥ����
     *     : �Ϲ��� �ڷ��� �°��� �̹� �Ͼ ���
     *       ������ ��ȯ�� ���� �̹Ƿ� �Ϲ��� �ڷ��� ���� x
     *
    * */










    return 0;
}
