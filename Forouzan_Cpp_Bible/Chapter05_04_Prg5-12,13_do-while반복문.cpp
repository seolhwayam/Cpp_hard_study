//
// Created by rudnf on 2023-03-08.
//
#include <iostream>
using namespace std;

int main(){
    /*Ȧ���� �ƴ� �������� ���� ������ ���� �����ϱ�
     *  : ����ڷκ��� ������ �Է¹ް� do-while�ݺ����� �̿��Ͽ� ���� ������ ���ڸ� ����ϴ� ���α׷�*/

    cout << "Prg5-12 Ȧ���� �ƴ� �������� ���� ������ ���� �����ϱ�"<<endl;


    // ����
    int num;
    short leftDigit;

    // �Է� �ޱ�
    cout << "������ �ƴ� ������ �Է��ϼ��� : ";
    cin >> num;

    // �ݺ���
    do{
        leftDigit=num%10;
        num=num/10;
    }while(num>0);

    // ���
    cout <<"���� ������ ���� = "<<leftDigit<<endl;

    /*��ȿ�� �˻翡 do-while �ݺ��� ����ϱ�*/

    cout << "Prg5-13 ��ȿ�� �˻翡 do-while �ݺ��� ����ϱ� "<<endl;


        // ����
        int score;
        char grade;

        // ��ȿ�� �˻��ϸ鼭 �Է¹ޱ�
        do{
            cout << "0~100�� ������ �ִ� ������ �Է��ϼ���: ";
            cin >>score;
        }while(score<0||score>100); //0~100������ ���ڸ� �� �Է��ߴٸ� while�� false ���� �Է½� true�� �ٽ� �����Է��� ����

        switch(score/10){
            case 10: grade ='A';
                     break;
            case 9: grade ='A';
                     break;
            case 8: grade ='B';
                     break;
            case 7: grade ='C';
                     break;
            case 6: grade ='D';
                     break;
            default: grade ='F';
                     break;

        }

        // ���
        cout <<"���� = "<<grade<<endl;

        /*do-while�ݺ���
         * do{
         *    ���๮
         * }while(����);
         *
         * �� ���ǿ� ������� �ѹ���! do ���๮ ���� �� while(���ǹ�) Ȯ�� �� true : do ���๮ | false : �ݺ�����
         * �� while(����) �ڿ� ;(�����ݷ�) ����
         *
         * */



    return 0;
}