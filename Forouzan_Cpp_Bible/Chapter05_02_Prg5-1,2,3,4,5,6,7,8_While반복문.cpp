//
// Created by rudnf on 2023-03-06.
//

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(){
    /*while�ݺ������� Ư�� �� ��ŭ �ݺ��ϱ�1
     *  : while�ݺ����� ����ؼ� �޽����� 10ȸ ����ϱ�*/

    cout << "Prg5-1 while�ݺ������� Ư�� �� ��ŭ �ݺ��ϱ�1 "<<endl;

    // ī���� �����ϰ� �ʱ�ȭ
    int counter_01 =0;

    //while�ݺ���
    while(counter_01 < 10){
        cout <<"Hello world!"<<endl;
        counter_01++;
    }

    /*while �ݺ������� Ư�� ����ŭ �ݺ��ϱ�2
     *  : ī���� ���� while �ݺ����� ����ؼ� �л� ������ ����� ���ϴ� ���α׷�*/

    cout << "Prg5-2 while�ݺ������� Ư�� �� ��ŭ �ݺ��ϱ�1 "<<endl;

    // ����
    int score;
    int sum = 0;
    double average;

    // �ݺ���
    int counter_02 = 0;
    while(counter_02<4){
        //ó��(���ڸ� �о� ���̰� ���� sum�� ���ϱ�
        cout << "������ �ϳ� �Է��ϼ���(0~100�� ����) : ";
        cin >>score;
        sum = sum+score;
        counter_02++;
    }

    // ��� ���
    average = static_cast<double>(sum)/4;
    cout << fixed <<setprecision(2)<<showpoint;
    cout << "��� ���� = "<<average<<endl;

    /*���� 0~n-1���� �ݺ������� ����ϱ�*/
    cout << "Prg5-3 ���� 0~n-1���� �ݺ������� ����ϱ� "<<endl;

    // ����
    int n,counter_03;

    // ���� n�Է¹ޱ�
    cout << "����� ������ �Է��ϼ��� : ";
    cin >> n;

    // ���� ���
    counter_03 = 0;
    while(counter_03 < n){
        cout << counter_03 << endl;
        counter_03++;
    }

    /*while �ݺ������� ������ �� ���ϱ�*/

    cout << "Prg5-4 while �ݺ������� ������ �� ���ϱ� "<<endl;

    // �����ϰ� �ʱ�ȭ
    int sum1 =0, sum2=0,sum3 =0;
    int m;

    // ���� m �Է¹ޱ�
    cout << "m�ǰ� �Է� : ";
    cin >> m;

    //while�ݺ���
    int counter_04 = 1;
    while(counter_04<=m){
        sum1 += counter_04;
        sum2 += counter_04*counter_04;
        sum3 += counter_04*counter_04*counter_04;
        counter_04++; //ī���� ����
    }
    // ��� ���
    cout << "m�� �� = "<<m<<endl;
    cout << "sum1�� �� : "<<sum1 <<endl;
    cout << "sum2�� �� : "<<sum2 <<endl;
    cout << "sum3�� �� : "<<sum3 <<endl;

    /*��Ƽ�� ���� �ݺ������� �Է��� ������ �� ���ϱ�
     *  : ��Ƽ�� ���� while�ݺ����� ����ؼ� ���ڵ��� �� ã��*/

    cout << "Prg5-5 ��Ƽ�� ���� �ݺ������� �Է��� ������ �� ���ϱ� "<<endl;

    // ����
    int sum_05 = 0;
    int num_05;

    // �Է¹ް� �ݺ��� ������
    cout << "������ �Է��ϼ���(�����Ϸ��� -1 �Է�) : ";
    cin >>num_05;
    while (num_05 != -1){
        sum_05 = sum_05 +num_05;

        cout <<"������ �Է��ϼ���(�����Ϸ��� -1 �Է�) : ";
        cin >>num_05;
    }

    // ��� ���
    cout << "�� : "<<sum_05<<endl;

    /*EOF ���� �ݺ������� ������ �� ���ϱ�
     *  : EOF���� While �ݺ����� ����� Ű����� �Է��� ���ڵ��� ���� ���ϴ� ���α׷�*/
    cout << "Prg5-6 EOF ���� �ݺ������� ������ �� ���ϱ� "<<endl;

    // ����
    int sum_06;
    int num_06;

    // �ʱ�ȭ�ϰ� �ݺ��� ������
    cout << "ù ��° ���ڸ� �Է��ϼ���(�����Ϸ��� EOF �Է�) : ";
    while(cin>>num_06){
        sum_06=sum_06+num_06;
        cout <<"���� ���ڸ� �Է��ϼ��� : ";
    }

    // ���
    cout << "��"<< sum_06<< endl;

    /*������ EOF�� ����Ͽ� ������ �� ���ϱ�
     *  : EOF���� while �ݺ����� ����ؼ� ���Ͽ� ����� ���ڵ��� ���� ���ϴ� ���α׷�*/

    cout << "Prg5-7 ������ EOF�� ����Ͽ� ������ �� ���ϱ� "<<endl;

    //����
    int sum_07 =0;
    int num_07;
    ifstream infile;

    //���Ͽ���
    infile.open("numbers.dat");

    //while �ݺ���
    while(infile>>num_07){
        sum_07=sum_07+num_07;
    }

    //��� ���
    cout <<"�� = "<<sum_07<<endl;
    infile.close();

    /*�÷��� ����ϱ�
     *  : EOF�� �÷��׸� ����ؼ� �ݺ��� �����ϱ�*/

    // ����
    ifstream infile_08;
    int num_08;
    bool flag;

    // ���Ͽ���
    infile_08.open("number.dat");

    // 150�̻��� ���ڸ� ã�� ���� �ݺ���
    flag =false;
    while(infile_08>>num_08&& !flag){
        if(num_08>=150){
            cout <<"ã�� ���� = "<<num_08;
            flag = true;
        }
    }

    //�÷��� Ȯ��
    if(!flag){
        cout <<"ã�� ���ڰ� ���Ͽ� �������� �ʽ��ϴ�."<<endl;
    }
    infile_08.close();







    return 0;
}
