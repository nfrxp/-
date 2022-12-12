#include<iostream>
using namespace std;

class a
{
public:
	int i;
protected:
	int j;
private:
	int k;
};

class b:public a
{
public:
	void test(void) {
		cout << i << j << endl;
	}

};

class c :protected a
{
public:
	void test(void) {
		cout << i << j << endl;
	}
};

class d :private a
{
public:
	void test(void) {
		cout << i << j << endl;
	}
};
int main() {
	a a1;
	a1.i = 2;
	cout << "类对象一般只能访问共有成员，类对象一般不能访问保护成员的私有成员！\n";
	b b1;
	b1.i = 3;
	cout << "公有继承的派生类的类对象可以访问基类的公有成员！\n";
	c c1;
	cout << "保护继承的派生类的类对象不可以访问基类的所有成员！\n";
	d d1;
	cout << "私有继承的派生类的类对象不可以访问基类的所有成员！\n";
	cout << "总结：通过类成员只能直接访问公有成员，以及公有继承的共有成员！\n";

	return 0;
}