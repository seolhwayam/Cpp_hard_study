//#include<iostream>
//using namespace std;
//struct Rectangle {
//	int x, y;
//	int w, h;
//};
//
//
//int main() {
//	Rectangle r = { 15,10,50,70 }; //r = ╠╦а╤ц╪ ╨╞╪Ж
//	Rectangle* pr = &r; //фВюнем ╨╞╪Ж╢б е╦ютюл ╟╟╬ф╬ъ гя╢ы(е╦ют : Rectangle) + ╠╦а╤ц╪ ╨╞╪Жюг аж╪р(╠╦а╤ц╪ ╨╞╪Ж r :: &r) 
//
//	cout << r.x << " " << (*pr).x << endl;
//	cout << (*pr).y << " " << pr->y << endl;
//	//(*pr).y =  pr->y  [х╜╩Лг╔ ©╛╩Йюз]
//	cout << (*pr).h << " " << pr->h << endl;
//	cout << (*pr).h << " " << pr->h << endl;
//
//	pr->h = 40; //х╜╩Лг╔ ©╛╩Йюз╦╕ еКгя ╟╙ ╨╞╟Ф
//	(*pr).w = 100;
//	r.x = 80;
//
//	cout << r.h << endl;
//	cout << r.w << endl;
//	cout << r.x << endl;
//	cout << r.w << " " << pr->w << endl;
//
//	/* цБ╥бго╢б ╢ы╬Ггя ╧Ф╧Щ
//	1) (*pr).y     (*╠╦а╤ц╪ ╨╞╪Ж). гь╢Г ╨╞╪Ж
//	2) pr->y       ╠╦а╤ц╪ ╨╞╪Ж -> гь╢Г ╨╞╪Ж
//	3) r.y         ╠╦а╤ц╪ ╨╞╪Ж.гь╢Г ╨╞╪Ж
//	*/
//
//	return 0;
//}
#include<iostream>
using namespace std;

int main() {


    cout << "2)char ╧Х©╜" << endl;
    char bb[] = { 'a','b','c', 0};
    char* pbb = bb;

    cout << bb << endl;  //abc      
    cout << *bb << endl; //ллллллллллллллллллллллллллллллллD?╜Z           
    cout << &bb << endl; // a      
    cout << bb + 1 << endl; // 0000005AAD9DFA44         
    cout << bb + 5 << endl; // bc               
    cout << *bb + 1 << endl; //ллллллллллллллллллллллллллллллллD?╜Z                      
    cout << *bb + 5 << endl; //лллллллллллллллллллллллллллллл??╜Z                      
    cout << *(bb + 1) << endl; // b                        b
    cout << *(bb + 2) << endl; //c                        c

    cout << pbb << endl; //abc
    cout << *pbb << endl; // a
    cout << &pbb << endl; // pbbюг аж╪р 0000005AAD9DFA70 
    cout << &pbb + 1 << endl; // bc
    cout << pbb + 1 << endl; // ллллллллллллллллллллллллллллллллD?╜Z
    cout << *pbb + 1 << endl; // 98
    cout << *(pbb + 1) << endl; //b
    cout << pbb[2] << endl; //c

    return 0;
}