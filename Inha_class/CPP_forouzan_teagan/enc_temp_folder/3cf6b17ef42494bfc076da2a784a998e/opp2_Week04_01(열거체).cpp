//#include<iostream>
//using namespace std;
//enum JOB_KIND{JOB_NECROMANCER, JOB_BARBARIAN=2, JOB_WIZARD }; 
////           0              2             3
////=2 �������� ���Ͽ� 1�� pass
//
//
////enum{JOB_NECROMANCER, JOB_BARBARIAN, JOB_WIZARD }; 
////           0              1             2
///*����ü ���� 
//  : �� enum{         }
//    �� ��ġ�� �ǹ̵� ������
//	�� Ÿ�̺�ε� ��밡��
//	if (c.jobType == 2) {
//		cout << "�����ݷ�!" << endl;
//	} => JOB_WIZARD�� ��� if�� ���� ����
//	
//	*/
//
//struct Character
//{
//	JOB_KIND jobType; //0 : ���ļ��� , 1: �߸���� , 2:������
//
//};
//
//int main() {
//	Character c;//����ü Ÿ���� ����
//	c.jobType = JOB_WIZARD;
//	if (c.jobType == JOB_WIZARD) {
//		cout << "�����ݷ�!" << endl;
//	}//����ü �ɺ� ���
//
//	return 0;
//}