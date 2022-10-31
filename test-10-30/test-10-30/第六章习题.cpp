//#include<iostream>
//using namespace std;
//int main()
//{
//	int i = 0;
//	for (i = 1900; i * i - 20960 * i + 37287840 != 0; i++)
//	{
//
//	}
//	if (i * i - 20960 * i + 37287840 == 0)
//		cout << i << endl;
//	return 0;
//}

//#include<iostream>									//英文句子中字母个数
//using namespace std;
//
//int count(char* a)
//{
//	int i = 0;
//	int num = 0;
//	for (i = 0; a[i]; i++)
//	{
//		if ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z'))
//			num++;
//	}
//	return num;
//}
//int main()
//{
//	char a[100];
//	cout << "请输入英文句子:>" ;
//	gets_s(a);
//	cout << "该句子中含字母个数：" << count(a) << endl;
//	return 0;
//}

//#include<iostream>								//输入N人成绩并计算平均值
//using namespace std;
//#define N 8
//int main()
//{
//	int i = 1;
//	float grades[N];
//	float sum=0;
//	cout << "请依次输入" << N << "位同学的成绩" << endl;
//	for (i = 0; i < N; i++)
//	{
//		cout << "请输入第" << (i+1) << "位同学的成绩：";
//		cin >> grades[i];
//	}
//	for (i = 0; i < N; i++)
//	{
//		sum += grades[i];
//	}
//	cout << "平均成绩为：" << sum / N << endl;
//	return 0;
//}


//#include<iostream>								//3*3矩阵转置
//#include<iomanip>
//using namespace std;
//
//void fun(int* a)
//{
//	int i, j, k;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = i; j < 3; j++)
//		{
//			k = *(a + 3 * i + j);
//			*(a + 3 * i + j) = *(a + 3 * j + i);
//			*(a + 3 * j + i) = k;
//		}
//	}
//}
//int main()
//{
//	int a[3][3] = { 0 };
//	int i = 0, j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			cout << "矩阵中a[" << i << "][" << j << "]为：";
//			cin >> a[i][j];
//		}
//	}
//	cout << "原矩阵为：" << endl;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//			cout << *(*(a + i) + j) << " ";
//		cout << endl;
//	}
//
//	fun(&a[0][0]);
//
//	cout << "转置矩阵为：" << endl;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//			cout << *(*(a + i) + j) << " ";
//		cout << endl;
//	}
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//void fun(int* a,int n)
//{
//	int i, j;
//	int k;
//	for (i = 0; i < n; i++)
//	{
//		for (j = i; j < n; j++)
//		{
//			k = *(a + i * n + j);
//			*(a + i * n + j) = *(a + j * n + i);
//			*(a + j * n + i) = k;
//		}
//	}
//}
//int main()
//{
//	int i, j, n;
//	cout << "请依次输入矩阵行数和列数：";
//	cin >> n;
//	int* p;
//	p = new int[n * n];
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			cout << "第" << i + 1 << "行" << "第" << j + 1 << "列：";
//			cin >> *(p + i * n + j);
//		}
//	}
//
//	cout << "原矩阵为：" << endl;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			cout << *(p + i * n + j) << ' ';
//		}
//		cout << endl;
//	}
//
//	fun(p,n);
//
//	cout << "转置矩阵为：" << endl;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			cout << *(p + i * n + j) << ' ';
//		}
//		cout << endl;
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>								//Employee类
//using namespace std;
//#include<string>
//class Employee
//{
//public:
//	Employee(const char* name, const char* address, const char* city, const char* postcode);
//
//	void setName(const char* a)
//	{
//		strcpy(Name,a);
//	}
//	void display()
//	{
//		cout << Name<<"\t" << Address << "\t" << City << "\t" << Postcode;
//	}
//private:
//	char Name[50];
//	char Address[50];
//	char City[50];
//	char Postcode[10];
//};
//
//
//Employee::Employee(const char* name, const char* address, const char* city, const char* postcode)
//{
//	{
//		strcpy(Name, name);
//		strcpy(Address, address);
//		strcpy(City, city);
//		strcpy(Postcode, postcode);
//
//	}
//}
//
//int main()
//{
//	Employee p1("张三", "上海路3号", "上海", "123456");
//	p1.display();
//	cout << endl;
//	p1.setName("小明");
//	p1.display();
//	return 0;
//}


//#include<iostream>									//字符串倒序输出
//using namespace std;
//
////#include "stdafx.h"//vc++6.0加上这一行.
//
//void reverse(const char* const s) {
//	if (*s) 
//		reverse(s + 1);
//	if (*s) 
//		cout << *s;
//}
//void main(void) {
//	char a[] = "123456789";
//	reverse(a);
//	cout << endl;
//}




//#include<iostream>                                //同上
//
//using namespace std;
//
//char* str = "Hello world";
//char* ptr = str;
//
//int main()
//{
//    char* pt = ptr;
//    if (*pt != '\0')
//    {
//        ++ptr;
//        main();
//        printf("%c", *pt);
//    }
//
//    return 0;
//
//}

#include<iostream>                      //倒序储存顺序再输出
using namespace std;

void reverse(char* s)
{
    if (*s)
    {
        char* p = s;
        char c = s[0];
        do 
        { 
            *p = *(p + 1); 
            p++; 
        } 
        while (*p);
        reverse(s);
        s[strlen(s)] = c;
    }
}
int main()
{
    char s[100];
    cout << "请输入字符串:";
    cin >> s;
    reverse(s);
    printf("%s\n", s);
    return 0;
}