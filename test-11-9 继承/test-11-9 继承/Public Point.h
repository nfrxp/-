#include<iostream>									//¹²ÓĞ¼Ì³Ğpublic
using namespace std;
class Point
{
public:
	void a(float x, float y)
	{
		this->x = x; this->y = y;
	}
	void move(float x1, float y2)
	{
		x += x1; y += y2;
	}
	float getx() { return x; }
	float gety() { return y; }

private:
	float x;
	float y;
};