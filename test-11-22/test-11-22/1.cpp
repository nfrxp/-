//#include<iostream>
//using namespace std;
//class Year
//{
//private:
//	int a;
//public:
//	Year(int i) { a = i; }
//	Year operator ++()							//ǰ��++
//	{
//		++a;
//		return Year(a);
//	}
//
//	Year operator++(int)
//	{
//		int temp = a;
//		a++;
//		return Year(temp);
//	}
//	void get_a()
//	{
//		cout << "a = " << a << endl;
//	}
//};
//
//int main()
//{
//	Year p(17);
//	p.get_a();
//	++p;
//	p.get_a();
//	p++;
//	p.get_a();
//
//	return 0;
//}


#include<iostream>
using namespace std;
class Complex
{
public:
	friend Complex operator +(Complex& a, Complex& b);		//�����ǳ�Ա����Ϊ����Ԫ����
	Complex(float High, float Weight): high(High),weight(Weight){	}

	void get_hw()
	{
		cout << "high = " << high << endl;
		cout << "weight = " << weight << endl;
	}
private:
	float high;
	float weight;
};

Complex operator +(Complex& a, Complex& b)		//��˫Ŀ���������Ϊ�ǳ�Ա�������ҷ���ֵ����ΪComplex��
{
	//a.high + b.high;
	//a.weight + b.weight;
	return Complex(a.high + b.high, a.weight + b.weight);
}
int main()
{
	Complex i(169.9, 170.1);
	Complex j(170.1, 169.9);
	Complex k(0, 0);
	k=i + j;			//�˴��ĸ�ֵ�������������
	k.get_hw();
	return 0;
}