#include"Public Point.h"
class Rectangle :public Point 
{
public:
	void b(float x, float y, float w, float h)
	{
		a(x, y);
		this->w;
		this->h;
	}
	float getw() { return w; }
	float geth() { return h; }
private:
	float w;
	float h;
};