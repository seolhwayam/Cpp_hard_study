#pragma once
#include<string>
#include "docwriter(replay_Week09_03).h"

//�ڽ� Ŭ���� : ��������(public) �θ�Ŭ����
class HTMLWriter : public DocWriter {
public:
	HTMLWriter(void);
	HTMLWriter(const string& fileName, const string& content);
	~HTMLWriter(void);

	void Write(); //�������̵�, html �������� ������ ���� �޼��� �������̵�
	void SetFont(const string& fontName, int fontSize, const string& fontCo);//����޼ҵ�

protected:
	string _fontName;
	int _fontSize;
	string _fontColor;


};
