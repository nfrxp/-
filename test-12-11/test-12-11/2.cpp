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
	cout << "�����һ��ֻ�ܷ��ʹ��г�Ա�������һ�㲻�ܷ��ʱ�����Ա��˽�г�Ա��\n";
	b b1;
	b1.i = 3;
	cout << "���м̳е���������������Է��ʻ���Ĺ��г�Ա��\n";
	c c1;
	cout << "�����̳е������������󲻿��Է��ʻ�������г�Ա��\n";
	d d1;
	cout << "˽�м̳е������������󲻿��Է��ʻ�������г�Ա��\n";
	cout << "�ܽ᣺ͨ�����Աֻ��ֱ�ӷ��ʹ��г�Ա���Լ����м̳еĹ��г�Ա��\n";

	return 0;
}