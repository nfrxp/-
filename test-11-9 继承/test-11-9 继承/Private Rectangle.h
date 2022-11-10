#include"Public Point.h"
class Rectangle:private Point
{
public:
	void b(float x, float y, float w, float h)
	{
		a(x, y);
		this->w = w; this->h = h;
	}
	void move(float x, float y)
	{
		Point::move(x, y);
	}
	float getx() { return Point::getx(); }
	float gety() { return Point::gety(); }
	float getw() { return w; }
	float geth() { return h; }
private:
	float x;
	float y;
	float w;
	float h;
};