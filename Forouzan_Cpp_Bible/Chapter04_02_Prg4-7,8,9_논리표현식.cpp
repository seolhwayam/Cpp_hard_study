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
        cout << "�ڵ����� �뿩�� �� �ֽ��ϴ�. "<<endl;
    }else{
        cout << "�˼��մϴ�. �ڵ����� �뿩�� �� �����ϴ�."<<endl;
    }

    /*�µ��� ������� ������ �ó����ϱ�
     *  : Ư���� �µ� ������ ���� �������� �ù� �Ǵ� �������� �����ϴ� ���α׷�*/

    // ���� ����
    int temperature;
    bool hot;
    bool cold;

    // �Է� �ޱ�
    cout << "���� �µ��� �Է��ϼ��� : ";
    cin >> temperature;

    //���� ���ϱ�
    hot = temperature >=23;
    cold = temperature <=15;

    //�ǻ����
    if(hot||cold){
        cout << "�������� �����ϴ�."<<endl;
        if(hot){
            cout << "�ù� ���� �۵��մϴ�."<<endl;
        }else{
            cout << "���� ���� �۵��մϴ�."<<endl;
        }
    }else{
        cout <<"�������� �����ϴ�."<<endl;
    }

    /*���� Ȯ���ϱ�
     *  : 3���� ������ Ȯ���Ͽ� ������ ã�� ���α׷�*/

    // ���� ����
    int year ;
    bool divBy400, divBy4, divBy100;
    bool leaYear;

    // �Է� �ޱ�
    cout << "������ �Է��ϼ���";
    cin >> year;

    //���� ����
    divBy400 = ((year%400)==0);
    divBy4 = ((year%4)==0);
    divBy100 = (divBy400)||(divBy4&& !(divBy100));

    // �ǻ� �����ϰ� ���
    if(leaYear){
        cout << year << "���� ���� �Դϴ�."<<endl;
    }else{
        cout << year <<" ���� ������ �ƴմϴ�."<<endl;
    }

    /*��ǥ����
     * �� ����ǥ���� (!) : ���� ����
     * �� ��ġ ǥ���� (== , !=)
     * �� �� ǥ����
     *    1) AND (&&)
     *    2) OR (||)
     * */


    return 0;
}
