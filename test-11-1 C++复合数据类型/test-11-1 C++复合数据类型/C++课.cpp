//#include <iostream>											//�ַ�����
//using namespace std;
//
//void main()
//{
//    char ary[5];
//    int i;
//    cout << "Enter string : ";
//    cin >> ary; //Ϊ�ַ����鸳ֵ
//    cout << ary << endl; //ͨ������������ֱ�����һ���ַ���
//    for (i = 0; i < 5; i++)
//        cout << ary[i];
//}



//#include<iostream>										//�ַ���ָ��,�ַ��������������޸�
//using namespace std;									//���ǿ���ֱ���滻ָ��ָ�������
//int main()
//{
//	const char* p = "hhhh";	//�����ַ�ָ��
//	cout << p << endl;			//����ָ������� ��� �ַ���
//	cout << *p << endl;			//����ָ������� ��� һ���ַ�
//
//	p = "kjk";
//	cout << p << endl;
//
//
//	char i[99] = "I LOVE YOU!";
//	char* j = i;
//	cout << j << endl;
//
//	int a[99] = { 3,4,2};	//������������ָ��
//	int* l = a;
//	cout << l << endl;			//����ָ������� ��� �׵�ַ
//	cout << *l << endl;			//����ָ������� ��� ��������
//
//
//	return 0;
//}


//#include<iostream>									//string ��			getline
//using namespace std;
//#include<string>
//int main()
//{
//	for (int i = 0; i < 2; i++)						//�ܹ���
//	{
//		string city, state;
//		getline(cin, city, ',');	//������Ϊ�ָ���
//		getline(cin, state);
//		cout << "city:" << city << "state:" << state << endl;
//	}
//	return 0;
//}


#include  <iostream>
using namespace std;
void  main(int  argc, char* argv[])
{
    int  i;
    for (i = 1; i < argc; i++)
        cout << argv[i] << " ";
}
