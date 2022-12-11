#define PI 3.1415926
#include<iostream>
using namespace std;
class Body
{
public:
	Body(float x) :p(x) {}
	virtual float volume(void) = 0;
protected:
	float p;
};

class  cube :public Body
{
public:
	cube(float x) :Body(x) {}
	virtual float volume(void) { return p * p * p; }

};

class sphere : public Body
{
public:
	sphere(float x) :Body(x) {}
	virtual float volume(void) { return 4.0f / 3 * PI * p * p * p; }
};

class cylinder :public Body
{
public:
	cylinder(float x, float high) :Body(x) ,h(high) {}
	virtual float volume(void) { return PI * p * p * h; }

private:
	float h;
};

int main() {
	cube cube1(5.0);
	cout << "正方体面积为：" << cube1.volume() << endl;

	sphere sphere1(3.0);
	cout << "球体的面积为：" << sphere1.volume() << endl;

	cylinder cylinder1(3.0, 4.0);
	cout << "圆柱体积为：" << cylinder1.volume() << endl;
	return 0;
}