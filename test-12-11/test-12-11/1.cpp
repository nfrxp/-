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

class sphere
{
public:

};

int main() {

	return 0;
}