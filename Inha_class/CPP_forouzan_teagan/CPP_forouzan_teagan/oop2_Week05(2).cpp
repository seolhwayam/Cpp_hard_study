//#include<iostream>
//	using namespace std;
//
//    // �� stack�޸� ���
//	//char* reverString(const char* src, int size) {
//	//	char revers[5]; //���� �Ҵ� x | ���� �Ҵ�o  stack�޸�
//
//	//	for (int i = 0; i < size; i++) {
//	//		revers[i] = src[size-i-1]; //4������ ���������� 5�� �̹Ƿ� ���������� -1 ��°������! �ݴ�� ����ؾ��ϴϱ� -i-1
//	//	}
//
//	//	revers[size] = NULL;
//
//	//	cout << revers;
//	//	return revers;
//	//}
//
//	//��hip �޸�
//	char* reverstring(const char* src, int size) {
//		char* revers= new char[size+1]; //���� �Ҵ� x | ���� �Ҵ�o  stack�޸�
//
//		for (int i = 0; i < size; i++) {
//			revers[i] = src[size-i-1]; //4������ ���������� 5�� �̹Ƿ� ���������� -1 ��°������! �ݴ�� ����ؾ��ϴϱ� -i-1
//		}
//
//		revers[size] = NULL;
//
//		//cout << revers;
//		return revers;
//	}
//
//	int main() {
//		char original[] = "inha"; 
//		//char original[] = {'i','n','h','a'} -> ����(���ڿ��� ���� null�� ����. �ٸ� �޸� ħ��)  | char original[] = {'i','n','h','a','\0'} -> ����x
//		cout << original << endl; //���ڿ� Ÿ���� �迭�� ���� ��, (null,0)���� �տ����� ����ϵ��� ����Ǿ�����.
//		
//		//char* copy = reverString(&origianl[0], 4); 
//		char* copy = reverstring(original, 4); //�迭�� �ּҸ� ����
//		cout << copy << endl; //*copy �ּҷ� ���� �׷��� copy�� ���� �ּҰ� ���;��Ѵ�. 
//							  // cout null ���ڿ� �ձ��� �ﵵ�� ���� �Ǿ��־ ���ڰ� ����(�̹� ����Ǿ� �ֱ� ������) 
//
//		delete[] copy;
//		// delete[] copy; double free error 2���ϸ� �ȵ�
//
//		copy = nullptr;
//
//
//
//		return 0;
//
//		//���� �޸� �Ҵ� >> ����Ʈ �ϱ������� ������ ��� ����� �� �ִ�.
//		// �����Ҵ��ϴ� ������ ���� �����͸� ������ ��� ����� �� �ִ�.
//		// 
//	}
