//
// Created by rudnf on 2023-02-26.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    /*���밪 ����ϱ�
     * : if ���ǹ��� ����ؼ� ���밪�� ����ϰ� ����ϴ� ���α׷�*/

    //���� ����
    int number ;

    //�Է¹ޱ�
    cout << "������ �Է��ϼ��� : ";
    cin >> number;

    //���밪 ã��
    if(number < 0){
        number = -number;
    }

    //���밪 ���
    cout <<"�Է��� ������ ���밪 = "<<number<<endl;

    /*�ʰ� �ٹ� �ð��� �ִ� �޿� ����ϱ�
     *  : if���ǹ��� ����ؼ� �ʰ� �ٹ� �ð��� �ִ� �޿� ����*/

    // ���� ����
    double hours;
    double rate;
    double reqularPay;
    double overPay;
    double totalPay;

    // �Է� �ޱ�
    cout << "���� �ð��� �Է��ϼ��� : ";
    cin >> hours;
    cout << "�ð��� �޿��� �Է��ϼ��� : ";
    cin >> rate;

    //�Ϲ� �޿� ���
    reqularPay = hours * rate;
    overPay = 0.0;

    //40�ð��� �Ѱ� �ٹ����� �� �ʰ� �ٹ��� ���� �޿� ���
    if(hours>40.0){
        overPay = (hours-40.0)*rate*0.30;
    }

    //��ü �޿� ���
    totalPay=reqularPay+overPay;

    //���
    cout << fixed <<showpoint; //showpoint �Ҽ��� �Ʒ� ���
    cout << "�Ϲ� �޿� = " <<setprecision(2)<<reqularPay<<endl;
    cout <<"�ʰ� �ٹ��� ���� �޿� = "<<setprecision(2)<<overPay<<endl;
    cout <<"��ü �޿� ="<<setprecision(2)<<totalPay<<endl;



    /*���ǹ�
     *  : ������ ���̶�� � ������ �����ϰ�, �����̶�� �ٸ� ������ �����ϴ� ��
     *  : ���Ǻб� => ���ǹ��� ���� | ��, ������ �����ϴ� ǥ���� ���
     *
     *  - ���� ǥ����(�켱���� 11)
     *     : �� ���� ���ϱ� ���� 4���� ������ ���� ������
     *      [ < , <= , >  , >= ]
     *
     *  - ��ġ ǥ����(�켱���� 12)
     *     : �� ��ƼƼ�� �������� �Ǻ��ϴ� ��ġ ǥ����
     *      �� �ε� �Ҽ��� ���� ������� �ʴ� ���� ����!
     *      [ ==  , != ]
     *
     *   �� �켱 ������ ���� ����
     *      3 < 4 == 1
     *      �� (3<4) == 1
     *      �� true == 1
     *      �� 1 == 1
     *      �� true
     *
     * �� if���ǹ�
     *    if(���ǹ�){
     *      ���๮
     *    }
     */




    return 0;
}