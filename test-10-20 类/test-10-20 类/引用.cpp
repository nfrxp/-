//#include<iostream>
//using namespace std;
//int main()
//{
//	
//	int a = 10;
//	int& b = a;				//���ø�ʽ���������� &����=ԭ��
//	cout << "a=" << a << ' ' << &a << endl;
//	cout << "b=" << b << ' ' << &b << endl;
//
//	return 0;
//}


//#include<iostream>						//��Ҫ���ؾֲ�����������
//using namespace std;
//
//int& test1()
//{
//	int a = 10;			//�ֲ���������������е� ջ��
//	return a;
//}
//
//int& test2()
//{
//	static int a = 10;	//��̬�����������ȫ�������ڳ��������ϵͳ�ͷ�
//	return a;
//}
//int main()
//{
//	int& b = test1();
//	cout << "b=" << b << endl;
//	cout << "b=" << b << endl;
//
//
//	int& c = test2();
//	cout << "c=" << c << endl;
//	cout << "c=" << c << endl;
//
//
//	test2() = 20;		//����������ֵΪ���ã����  �������ÿ�����Ϊ��ֵ��
//	cout << "c=" << c << endl;
//
//	c = 30;
//	cout << "c=" << c << endl;
//return 0;
//}


//#include<iostream>				//�������ã���ֹ�����
//using namespace std;
//
//void ShowValue(const int& va1)
//{
//	//va1 = 100;		//����
//	cout << "va1=" << va1 << endl;
//}
//int main()
//{
//	int a = 10;
//	ShowValue(a);
//	return 0;
//}