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


//#include<iostream>
//using namespace std;
//class Complex
//{
//public:
//	friend Complex operator +(Complex& a, Complex& b);		//�����ǳ�Ա����Ϊ����Ԫ����
//	Complex(float High, float Weight): high(High),weight(Weight){	}
//
//	void get_hw()
//	{
//		cout << "high = " << high << endl;
//		cout << "weight = " << weight << endl;
//	}
//private:
//	float high;
//	float weight;
//};
//
//Complex operator +(Complex& a, Complex& b)		//��˫Ŀ���������Ϊ�ǳ�Ա�������ҷ���ֵ����ΪComplex��
//{
//	//a.high + b.high;
//	//a.weight + b.weight;
//	return Complex(a.high + b.high, a.weight + b.weight);
//}
//int main()
//{
//	Complex i(169.9, 170.1);
//	Complex j(170.1, 169.9);
//	Complex k(0, 0);
//	k=i + j;			//�˴��ĸ�ֵ�������������
//	k.get_hw();
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Base1 { //����Base1����
//public:
//	virtual void display() const;	//�麯��
//};
//void Base1::display() const {
//	cout << "Base1::display()" << endl;
//}
//
//class Base2:public Base1 { //����������Base2����
//public:
//	void display() const;	//���ǻ�����麯��
//};
//void Base2::display() const {
//	cout << "Base2::display()" << endl;
//}
//class Derived : public Base2 { //����������
//public:
//	void display() const; 	//���ǻ�����麯��
//};
//void Derived::display() const {
//	cout << "Derived::display()" << endl;
//}
//
//void fun(Base1* ptr) { //����Ϊָ���������ָ��
//	ptr->display();	//"����ָ��->��Ա��"
//}
//
//int main() {	//������
//	Base1 base1;	//����Base1�����
//	Base2 base2;	//����Base2�����
//	Derived derived;	//����Derived�����
//	fun(&base1);//��Base1�����ָ�����fun����
//	fun(&base2);//��Base2�����ָ�����fun����
//	fun(&derived);//��Derived�����ָ�����fun����
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//class Base {
//public:
//	virtual ~Base()									//������
//	{
//		cout << "Base destructor" << endl;
//	}
//};
//
//class Derived : public Base {
//public:
//	Derived()
//	{
//		p = new int(0);
//	}
//	~Derived()
//	{
//		cout << "Derived destructor" << endl;
//		delete p;
//	}
//
//private:
//	int* p;
//};
//
//void fun(Base* b)		//����ָ��ָ�����������
//{			
//	delete b;			//ʹ��deleteֻ���������࣬�ڻ������������ǰ��virtual���ͬʱ���������������
//}
//
//int main() {
//	Base* b = new Derived();
//	fun(b);
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int n = 10;
//	switch (n)
//	{
//	case 10:n--;
//	case 11:n++;
//	default:++n;
//	}
//
//	cout << n << endl;
//	return 0;
//}

//#include<iostream>						//����ģ��
//using namespace std;
//
//template<typename T>
////T abs (T a)			//T���ݴ����ʵ�ε�����������ȷ��
////{
////	return a < 0 ? -a: a;
////}
//
//T abc(int a)			//��ʱ����ģ����Ч
//{
//	return a < 0 ? -a: a;
//}
//
//
//int main()
//{
//	//int n = -5;
//	//cout << abs(n) << endl;			
//
//	int n = -5;
//	cout << abc(n) << endl;
//	return 0;
//}