//#include<iostream>
//using namespace std;
//
//int main() {
//	// �� ĸó�� �� ���� ����
//	//short c = 5, d = 7;
//	//auto inha_1 = [c, d](float a, int b)-> int { //[c,d] �����μ��� ĸó >> �׷��� ���� X ������ ��ĳ��;;
//	//	return a + b + c + d;
//	//};
//
//	//cout << inha_1(1.9f, 2) << endl;
//
//
//
//
//	// �� ĸó�� �� �����ϱ�
//	// 
//	//ĸ�ĺ� : �ܺ� ���� ���� ����
//	// 
//	// 1) [&����] : & + Ư������ �� ������ �������·� �ؼ� ������ ���� ����
//	
//	short c = 5, d = 7;
//	auto inha_2 = [&c, &d](float a, int b)-> int {  
//		c = -5;
//		d = 8;
//		return a + b + c + d;
//	};
//
//	cout << inha_2(1.9f, 2) << endl;
//
//	// 2) [&] : ��ü, ��� ������ ���� �����ν� ���� ���� | ��ü ������ �������·� ĸó
//	auto inha_3 = [&](float a, int b)-> int {  
//		c = -5;
//		d = 8;
//		return a + b + c + d;
//	};
//
//	cout << inha_3(1.9f, 2) << endl;
//
//	// ��) [=] : ��ü ������ ĸó, �� ����(X),[c,d]�� ���� ��� | ��ü ������ �����ν� ĸó
//	auto inha_4 = [=](float a, int b)-> int {
//		return a + b + c + d;
//	};
//
//	cout << inha_4(1.9f, 2) << endl;
//
//	auto inha_5 = [=](float a, int b)-> int {
//		return a + b + c + d;
//	};
//	//auto�� ��ü�̴�.
//
//	cout << inha_5(1.9f, 2) << endl;
//
//	
//
//
//
//
//	return 0;
//}