//									//��������ǰ		//�ڴ�����-������
//#include<iostream>										//�ڴ�����-ȫ����
//using namespace std;
//
////ȫ����
//// ȫ�ֱ�������̬����������(�ַ�����constȫ�ֳ���
////
//int A2 = 22;
//int B2 = 99;
//
//const int A4 = 99;
//int main()
//{
//	int A1 = 10;
//	int B1 = 11;
//	cout << "�ֲ�����A1�ĵ�ַΪ��" << &A1 << endl;
//	cout << "�ֲ�����B1�ĵ�ַΪ��" << &B1 << endl;
//
//	cout << "ȫ�ֱ���A1�ĵ�ַΪ��" << &A2 << endl;
//	cout << "ȫ�ֱ���B2�ĵ�ַΪ��" << &B2 << endl;
//
//	static int A3 = 33;
//	static int B3 = 44;
//	cout << "��̬����A3�ĵ�ַΪ��" << &A3 << endl;
//	cout << "��̬����B3�ĵ�ַΪ��" << &B3 << endl;
//
//	//����
//	//�ַ�����
//	cout << "�ַ��������ĵ�ַΪ��" << &"hello world" << endl;
//	//const����
//	//constȫ�ֳ���
//	cout << "constȫ�ֳ�����ַΪ��" << &A4 << endl;
//	//const�ֲ�����
//	const int B4 = 99;
//	cout << "const�ֲ�������ַΪ��" << &B4 << endl;
//	return 0;
//}


										//�������к�
//#include<iostream>									//ջ��
//using namespace std;
//
////��Ҫ���ؾֲ������� ��ַ
//
//int* test01()
//{
//	int a = 90;
//	return &a;
//}
//
//int test02()
//{
//	int a = 90;
//	return a;
//}
//int main()
//{
//	int* p = test01();
//	cout << *p << endl;
//	cout << *p << endl;	
//	cout << test01() << endl;
//	cout << test01() << endl;
//
//	cout << test02() << endl;
//	cout << test02() << endl;
//
//
//	return 0;
//}


//#include<iostream>										//����
//using namespace std;
//
////1.new�Ļ����﷨
//int * func()
//{
//	//����new�ؼ��֣������ݿ��ٵ�����
//	//new���ص��Ǹ��������͵�ָ��
//	//��ʱָ���Ǿֲ������������ջ�ϣ����ڴ�Ŷ������ݵĵ�ַ
//	int* p = new int(99);
//	return p;
//}
//
//void test01()
//{
//	int* p = func();
//	cout << *p << endl;
//	//���������ݣ��ɳ���Ա�����٣��ɳ���Ա�����ͷ�
//	//���ùؼ���delete�ͷŹؼ���
//	delete p;
//	//cout << *p << endl;
//}
//
////2.����new�ڶ�����������
//void test02()
//{
//	int* p = new int[9];
//	*p = 0;
//	*(p + 1) = 9;
//	cout << *p << " " << *(p + 1) << endl;
//
//	int i = 0;
//	for(i = 0; i < 9; i++)
//	{
//		p[i] = i;
//	}
//
//	for (i = 0; i < 9; i++)
//	{
//		cout << p[i] << endl;
//	}
//
//	//�ͷ�����
//	//delete[] ������
//	delete[] p;
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}