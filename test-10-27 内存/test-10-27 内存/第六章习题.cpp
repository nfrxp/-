//#include<iostream>									//6-21ͳ�ƾ�����Ӣ�ĸ���
//using namespace std;
//int func(char*a)
//{
//	int num = 0;
//	int i = 0;
//	for (i = 0; a[i]; i++)	//����a[i]��Ϊ�ж���������Ϊ�����㣬��ֹͣѭ��
//	{
//		//�ж��Ƿ�ΪӢ����ĸ
//		if ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z'))
//		{
//			num++;
//		}
//	}
//	return num;
//}
//int main()
//{
//	char arr[100];
//	cout << "������Ӣ�����:>";
//	gets_s(arr);
//	cout << "��Ӣ������к���ĸ������" << func(arr) << endl;
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <stdio.h>
//using namespace std;
//
//
//int count(char* str) {
//	int n = 0;
//	for (int i = 0; str[i]; i++) {
//		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
//			n++;
//		}
//	}
//	return n;
//}
//
//int main() {
//
//
//	char str[100];
//	cout << "please input an English sentence��";
//	gets_s(str); 
//	cout << count(str);
//
//	return 0;
//}


//#include<iostream>										//�ݹ飬ʹ�ַ�������
//using namespace std;
//
//string reverse(string &s)
//{
//	if (s.length() > 1)
//	{
//		string sub = s.substr(1,s.length()-2);
//
//		return s.substr(s.length() - 1, 1) + reverse(sub) + s.substr(0, 1);
//	}
//	else
//		return s;
//}
//int main()
//{
//	string a;
//	cout << "�������ַ���:>";
//	cin >> a;
//	cout<<"�����"<<reverse(a);
//	return 0;
//}


#include <stdio.h>
//���������ⲿ�����ֱ�����ȡֵ�븳ֵ
//����Ϊstatic��ʹ�ⲿ�������޴�Դ�ļ��еĺ�������
static int sp1 = 0;
static int sp2 = 0;

void reverse(char* s);

int main()
{
	char s[100];
	printf("�������ת���ַ���:\n");
	scanf_s("%s", s, 100);
	reverse(s);
	s[sp2] = '\0';
	printf("������ַ���Ϊ��%s\n", s);

	return 0;
}

void reverse(char* s)
{
	char c = '\0';
	if (s[sp1] != '\0')
	{
		c = s[sp1++];
		reverse(s);
	}
	if (sp2 < sp1 && c != '\0')
		s[sp2++] = c;
}


//#include <iostream>
//
//using namespace std;
//
//void reverse(string& s)
//{
//	static string s2;
//	int Size1 = s.length(), Size2 = s2.length();
//	if (Size1 == Size2)
//	{
//		s = s2;
//		return;//��Ϊ��������ֵ����Ϊ�գ�����ʲô�������أ�����ֻ����ݹ���ý�����
//	}
//	s2 += s.at(Size1 - Size2 - 1);
//	reverse(s);
//}
//int main()
//{
//	//cout << "Hello world!" << endl;
//	string s = "abcdef";
//	reverse(s);
//	cout << s;
//	return 0;
//}