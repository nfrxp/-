#include<iostream>				//��׼������
using namespace std;

void test01()		//cin.get()һ�ζ�ȡ��������һ���ַ������ȡ���з�
{
	char c = cin.get();
	cout << "c = " << c << endl;

	c = cin.get();
	cout << "c = " << c << endl;

	c = cin.get();
	cout << "c = " << c << endl;

}

void test02()			//cin.get(������)���Զ�ȡ�ַ��������ǲ���ĩβ�Ļس�
{
	char p[20];
	cin.get(p, 20);

	cout << "p = " << p<<endl;

	char q= cin.get();
	cout << "q = " << q << endl;
}

void test03()			//cin.getline(������),��ȡ�ַ������Ҷ�ȡ��ĩβ�Ļ��з����ӵ�
{
	char a[20];
	cin.getline(a, 20);

	cout << "a = " << a << endl;

	char b = cin.get();
	cout << "b = " << b << endl;
}

void test04()			//cin.ignore(),û�в������������һ���ַ�,���ּ��ʹ�����Լ����ַ�
{
	cin.ignore();
	char a=cin.get();
	cout << "a = " << a << endl;

	cin.ignore(3);
	a = cin.get();
	cout << "a = " << a << endl;
}

void test05()			//cin.peek()͵��һ���ַ�
{
	char a = cin.peek();
	cout << "a = " << a << endl;
	a = cin.get();
	cout << "a = " << a << endl;

}

void test06()			//cin.putback()���ַ�������������ԭλ��
{
	char a = cin.get();
	cout << "a = " << a << endl;
	cin.putback(a);
	cout << "a = " << a << endl;
	char b[20];
	cin.getline(b, 20);
	cout << "b = " << b << endl;

}

void test07()		//����1���ж��û���������ַ�����������
{
	////����͵��
	//char a = cin.peek();
	//if (a >= '0' && a <= '9')
	//{
	//	int num;
	//	//num = cin.get();
	//	cin >> num;
	//	cout << "����������֣�" << num << endl;

	//}
	//else
	//{
	//	char p[20];
	//	cin.getline(p, 20);
	//	cout << "��������ַ�����" << p << endl;
	//}

	////cin.putback()
	//char a = cin.get();
	//cin.putback(a);
	//if (a >= '0' && a <= '9')
	//{
	//	int num;
	//	cin >> num;
	//	cout << "����������֣�" << num << endl;
	//}
	//else
	//{
	//	char b[20];
	//	cin.getline(b, 20);
	//	cout << "��������ַ�����" << b << endl;
	//}
}
int main()
{
	//test01();

	//test02();

	//test03();

	//test04();

	//test05();

	//test06();

	//test07();
	return 0;
}