//#include<iostream>
//using namespace std;
//
//class Java
//{
//public:
//	void header()
//	{
//		cout << "����ͷ������ҳ�����⡢Ŀ¼����" << endl;
//	}
//	void footer()
//	{
//		cout << "�����ײ�����ϵ��ʽ�����ɡ���" << endl;
//	}
//	void left()
//	{
//		cout << "�������ࣺJave��Python��C++����" << endl;
//	}
//	void content()
//	{
//		cout << "Jave��Ƶ���¡���" << endl;
//	}
//};
//
//class Python
//{
//public:
//	void header()
//	{
//		cout << "����ͷ������ҳ�����⡢Ŀ¼����" << endl;
//	}
//	void footer()
//	{
//		cout << "�����ײ�����ϵ��ʽ�����ɡ���" << endl;
//	}
//	void left()
//	{
//		cout << "�������ࣺJave��Python��C++����" << endl;
//	}
//	void content()
//	{
//		cout << "Python��Ƶ���¡���" << endl;
//	}
//};
//
//class C
//{
//public:
//	void header()
//	{
//		cout << "����ͷ������ҳ�����⡢Ŀ¼����" << endl;
//	}
//	void footer()
//	{
//		cout << "�����ײ�����ϵ��ʽ�����ɡ���" << endl;
//	}
//	void left()
//	{
//		cout << "�������ࣺJave��Python��C++����" << endl;
//	}
//	void content()
//	{
//		cout << "C��Ƶ���¡���" << endl;
//	}
//};
//
//void test01()
//{
//	Java a;
//	a.content(); a.footer(); a.header(); a.left();
//
//	cout << endl<< "����������������������" << endl;
//	Python b;
//	b.content(); b.footer(); b.header(); b.left();
//
//	cout << endl<< "����������������������" << endl;
//	C c;
//	c.content(); c.footer(); c.header(); c.left();
//
//}
//
//
//int main() {
//
//	test01();
//	return 0;
//}





//#include<iostream>										//�̳�	�����ظ�����
//using namespace std;									//�﷨��	class ���ࣺ �̳з�ʽ	����
//														//���ࣺ����	������
////����ҳ��										  		 ���ࣺ ����	����
//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "����ͷ������ҳ�����⡢Ŀ¼����" << endl;
//	}
//	void footer()
//	{
//		cout << "�����ײ�����ϵ��ʽ�����ɡ���" << endl;
//	}
//	void left()
//	{
//		cout << "�������ࣺJave��Python��C++����" << endl;
//	}
//};
//
////Javaҳ��	�̳�
//class Java:public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Javaѧϰ��Ƶ" << endl;
//	}
//};
//
////Pythonҳ��	�̳�
//class Python :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Pythonѧϰ��Ƶ" << endl;
//	}
//};
//
////CPPҳ��	�̳�
//class CPP :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "CPPѧϰ��Ƶ" << endl;
//	}
//};
//
//void test01()
//{
//	Java a;
//	a.content(); a.footer(); a.header(); a.left();
//
//	cout << endl<< "����������������������" << endl;
//	Python b;
//	b.content(); b.footer(); b.header(); b.left();
//
//	cout << endl<< "����������������������" << endl;
//	CPP c;
//	c.content(); c.footer(); c.header(); c.left();
//}
//int main()
//{
//	test01();
//	return 0;
//}


//#include<iostream>											//�̳з�ʽ
//using namespace std;
//
////����
//class Father
//{
//public:
//	int a;
//protected:
//	int b;
//private:
//	int c;
//};
//
//
////�����̳�
//class Son1:public Father
//{
//public:
//	void fun()
//	{
//		a = 10;	//�����й�����Ա	����������Ϊ	������Ա
//		b = 10;	//�����б�����Ա	����������Ϊ	������Ա
//		c = 10;	//������˽�г�Ա	�����޷�����
//	}
//};
//
//void test01()
//{
//	Son1 a;
//	a.a = 10;	//��������Ϊ������Ա	������Է���
//	a.b = 10;	//��������Ϊ������Ա	���ⲻ�ɷ���
//}
//
////�����̳�
//class Son2 :protected Father
//{
//public:
//	void fun()
//	{
//		a = 10;	//�����й�����Ա	�������б�Ϊ	������Ա
//		b = 10;	//�����б�����Ա	����������Ϊ	������Ա
//		c = 10;	//������˽�г�Ա	���಻�ܷ���
//	}
//};
//
//void test02()
//{
//	Son2 b;
//	b.a = 10;	//��������Ϊ������Ա	�����޷�����
//	b.b = 10;	//��������Ϊ������Ա	�����޷�����
//}
//
//
////˽�м̳�
//class Son3 :private Father
//{
//public:
//	void fun()
//	{
//		a = 10;	//�����й�����Ա	�������б�Ϊ	˽�г�Ա
//		b = 10;	//�����б�����Ա	�������б�Ϊ	˽�г�Ա
//		c = 10;	//������˽�г�Ա	�����޷�����
//	}
//
//};
//
//void test03()
//{
//	Son3 c;
//	c.a = 10;	//��������Ϊ˽�г�Ա	�����޷�����
//	c.b = 10;	//��������Ϊ˽�г�Ա	�����޷�����
//
//}
//int main()
//{
//	return 0;
//}


//#include<iostream>								//�̳��ж���ģ��
//using namespace std;								//VS������Ա������ʾ��(9:00)
//
//class Father
//{
//public:
//	int a;
//protected:
//	int b;
//private:
//	int c;
//};
//
//
//class Son :public Father
//{
//public:
//	int d;
//};
//
//void test01()
//{
//	cout << "sizeof(Son)=" << sizeof(Son) << endl;
//	//���������зǾ�̬��Ա���Զ��ᱻ����̳�����
//	//������˽�г�Ա�����Ǳ������������ˣ���˷��ʲ�������ȷʵ���̳���ȥ��
//}
//int main()
//{
//	test01();
//	return 0;
//}


//#include<iostream>									//�̳��еĹ��������˳��
//using namespace std;
//
//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base�Ĺ��캯��\n";
//	}
//	~Base()
//	{
//		cout << "Base����������\n";
//	}
//};
//
////�̳�
//class Son :public Base
//{
//public:
//	Son()
//	{
//		cout << "Son�Ĺ��캯��\n";
//	}
//	~Son()
//	{
//		cout << "Son����������\n";
//	}
//};
//
//void test01()
//{
//	//Base a;
//	Son b;
//	//�ڼ̳��У��ȵ��ø���Ĺ��캯�����ٵ�������Ĺ��캯����������������˳���ڹ���˳���෴
//}
//int main()
//{
//	test01();
//	return 0;
//}



//#include<iostream>									//�̳���	ͬ�����⣨��Ա��������
//using namespace std;
//
//
//class Base
//{
//public:
//	int A=10;
//	void fun()
//	{
//		cout << "Base �ĺ�������\n";
//	}
//
//	void fun(int a)
//	{
//		cout << "Base �ĺ�������\n";
//	}
//};
//
//class Son:public Base
//{
//public:
//	int A=20;
//	void fun()
//	{
//		cout << "Son �ĺ�������\n";
//	}
//};
//
//void test01()
//{
//	Son a;
//	cout << a.A << endl;		//����ͬ��ʱ��Ĭ�ϵ��������еĶ���
//	cout << a.Base::A << endl;
//
//	a.fun();
//	a.Base::fun();
//
//	a.fun(10);		//�����븸�ຯ��ͬ��ʱ���������ظ����е�	����	ͬ������
//	a.Base::fun(10);
//}
//int main()
//{
//	test01();
//	return 0;
//}

//#include<iostream>										//�̳��� ͬ����̬��Ա����
//using namespace std;
//
//class Base
//{
//public:
//	static int A;
//	//��̬��Ա���������������ⶨ��
//
//	static void fun()
//	{
//		cout << "Base	�� ��̬�����ĵ���\n";
//	}
//	static void fun(int p)
//	{
//		cout << "Base	�� ��̬�����ĵ���\n";
//	}
//};
//int Base::A = 10;
//
//
//class Son:public Base
//{
//public:
//	static int A ;
//	static void fun()
//	{
//		cout << "Son	�� ��̬�����ĵ���\n";
//	}
//};
//int Son::A = 20;
//
//void test01()	//ͬ����̬��Ա
//{
//	//1.��̬��Ա��ͨ���������
//	cout << "ͨ��������ʾ�̬����\n";
//	Son a;
//	cout << a.A << endl;
//	cout << a.Base::A << endl;
//
//	//2.��̬��Ա��ͨ����������
//	cout << "ͨ���������ʾ�̬����\n";
//	cout << Son::A << endl;
//	cout << Son::Base::A << endl;	//���� ������
//}
//
//void test02()	//ͬ����̬����
//{
//	//1.��̬�������ã�ͨ���������
//	cout << "ͨ��������ʾ�̬����\n";
//	Son a;
//	a.fun();
//	a.Base::fun();
//
//	//2.��̬�������ã�ͨ����������
//	cout << "ͨ���������ʾ�̬����\n";
//	Son::fun();
//	Son::Base::fun();
//	//Son::fun(11);	//���ุ�����ͬ������ʱ���������ظ����е�	����	ͬ������
//}
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}