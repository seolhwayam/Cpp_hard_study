#pragma once
class Point {
public:
	typedef int COOT_T;

	void Print() const;

	Point();
	Point(COOT_T _x, COOT_T _y);
	Point(const Point& pt);

	void SetX(COOT_T value);
	void SetY(COOT_T value);
	COOT_T GetX() const { return x; };
	COOT_T GetY() const{ return y; };

private:
	int x, y;
};
inline void Point::SetX(COOT_T value) {
	if (value < 0)
		x = 0;
	else if (value > 100)
		x = 100;
	else
		x = value;
}
inline void Point::SetY(COOT_T value) {
	if (value < 0)
		y = 0;
	else if (value > 100)
		y = 100;
	else
		y = value;
}

