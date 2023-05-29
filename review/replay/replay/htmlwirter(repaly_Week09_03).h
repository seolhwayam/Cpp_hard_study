#pragma once
#include<string>
#include "docwriter(replay_Week09_03).h"

//자식 클래스 : 접근제어(public) 부모클래스
class HTMLWriter : public DocWriter {
public:
	HTMLWriter(void);
	HTMLWriter(const string& fileName, const string& content);
	~HTMLWriter(void);

	void Write(); //오버라이딩, html 포맷으로 저장할 쓰기 메서드 오버라이딩
	void SetFont(const string& fontName, int fontSize, const string& fontCo);//전용메소디

protected:
	string _fontName;
	int _fontSize;
	string _fontColor;


};
