//#include <iostream>
//using namespace std;
//
//class AccessControl {
//public:
//	char publicDate;
//	void publicFunc() {};
//
///*public: 모든 외부의 접근 허용*/
//
//protected:
//	int protectedDate;
//	void protectedFunc() {};
//private:
//	float privateDate;
//	void privateFunc() {};
//
///*protected,private -> 보호
//  public -> 연결통로 -> protected,private 접근 가능하도록*/
//
//public:
//	void AccesssAllMembers();
//	// AccessControl안에 AccesssAllMembers 있어서 자유롭게 조절가능 접근가능
//
///*접급제한자 미선언시 기본적으로 private 동작*/
//
//};
//void  AccessControl::AccesssAllMembers() {
//	publicDate = 'A';
//	publicFunc();
//
//	protectedDate = 100;
//	protectedFunc();
//
//	privateDate = 4.5f;
//	privateFunc();
//
//}
//
//int main() {
//	AccessControl ac;
//	ac.AccesssAllMembers();
//
//	//ac.publicDate = 'A';     //성공
//	//ac.publicFunc();         //성공
//	//
//	//ac.protectedDate = 100;  //실패
//	//ac.protectedFunc();      //실패
//
//	//ac.privateDate = 4.5f;   //실패
//	//ac.privateFunc();        //실패
//}