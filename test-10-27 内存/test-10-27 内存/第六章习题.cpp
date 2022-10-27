//#include<iostream>									//6-21统计句子中英文个数
//using namespace std;
//int func(char*a)
//{
//	int num = 0;
//	int i = 0;
//	for (i = 0; a[i]; i++)	//利用a[i]作为判断条件，若为数字零，则停止循环
//	{
//		//判断是否为英文字母
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
//	cout << "请输入英语句子:>";
//	gets_s(arr);
//	cout << "该英语句子中含字母个数：" << func(arr) << endl;
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
//	cout << "please input an English sentence：";
//	gets_s(str); 
//	cout << count(str);
//
//	return 0;
//}


//#include<iostream>										//递归，使字符串倒序
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
//	cout << "请输入字符串:>";
//	cin >> a;
//	cout<<"倒序后："<<reverse(a);
//	return 0;
//}


#include <stdio.h>
//定义两个外部变量分别用于取值与赋值
//定义为static型使外部变量仅限此源文件中的函数可用
static int sp1 = 0;
static int sp2 = 0;

void reverse(char* s);

int main()
{
	char s[100];
	printf("请输入待转换字符串:\n");
	scanf_s("%s", s, 100);
	reverse(s);
	s[sp2] = '\0';
	printf("反序的字符串为：%s\n", s);

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
//		return;//因为函数返回值类型为空，所以什么都不返回，这里只代表递归调用结束。
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