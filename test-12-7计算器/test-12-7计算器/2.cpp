#include "iostream"
#include "math.h"
#include "string"
#include "stdlib.h"
#include "windows.h"
#define derror 1234567
#define Maxlen 400
using namespace std;
char p[400], q[400];
struct
{
	char data[Maxlen];
	int top;
}optr;  //定义运算符栈，并定义全局变量
struct
{
	double data[Maxlen];
	int top;
}opnd;  //定义操作数栈，并定义全局变量
void main()
{

	double k;
	void meun();  //声明菜单函数
	int change(char* p, char q[]);  //声明转换函数
	double jisuan(char* q);  //声明计算函数
	meun();
	for (;;)  //循环执行
	{
		cout << "请输入四则运算表达式:";
		cin >> p;
		if (strcmp(p, "0") == 0)
			return;
		if (change(p, q) == 1)
		{
			k = jisuan(q);
			if (k == derror)
				cout << "";
			else
				cout << "计算结果为： " << k << endl;
			cout << "是否需要后缀表达式 Y or y" << endl;
			char  ch;
			cin >> ch;
			cout << "后缀表达式为（‘#’区别10和1）:";
			if ((ch == 'Y') && (ch == 'y'))
				change(p, q);
			for (int i = 0; i < q.lenght; i++)
				cout << q[i] << " ";
			break;
		}
		system("pause");  //控制输出格式
		system("cls");
		meun();
	}
}
void meun()
{
	system("color 0b");
	cout << "\t**************************************" << endl;
	cout << "\t\t欢 迎 使 用 本 计 算 器" << endl;
	cout << "\t\t " << "a" << "     " << "e" << "     " << "q" << "     " << "∧" << endl;
	cout << endl;
	cout << "\t\t " << "9" << "     " << "8" << "     " << "7" << "     " << "+" << endl;
	cout << endl;
	cout << "\t\t " << "6" << "     " << "5" << "     " << "4" << "     " << "-" << endl;
	cout << endl;
	cout << "\t\t " << "3" << "     " << "2" << "     " << "1" << "     " << "*" << endl;
	cout << endl;
	cout << "\t\t " << "." << "     " << "0" << "     " << "=" << "     " << "/" << endl;
	cout << endl;
	cout << "\t\t " << "s" << "     " << "c" << "     " << "t" << "     " << "％" << endl;
	cout << "\t\t此计算机可以实现的函数有：" << endl;
	cout << "\t\tsinx,cosx,tanx,sqrt,abs,exp" << endl;
	cout << "\t**************************************" << endl;
	cout << endl;
	cout << "\t按0结束本程序" << endl;
}
int change(char* p, char q[])  //将算术表达式 p转换成表达式后缀表达式 q
{
	int i = 0;  //i作为q的下标
	int dh = 1;  //dh=1表示是负号
	optr.top = -1;  //初始化运算符栈
	while (*p != '\0')  //p表达式未扫描完时循环
	{
		switch (*p) //判断各种情况 ,并做相应的处理
		{
		case '(': optr.top++; optr.data[optr.top] = *p; dh = 1; p++; break;
		case ')': while (optr.data[optr.top] != '(')
		{
			q[i] = optr.data[optr.top];
			optr.top--; i++;
		}
				optr.top--; p++; dh = 0; break;
		case '+':
		case '-':
			if (dh == 1)  // +,-是正负号
			{
				if (*p == '-')
					optr.top++; optr.data[optr.top] = '@';
				p++;
				break;
			}
			while (optr.top != -1 && optr.data[optr.top] != '(')
			{
				q[i] = optr.data[optr.top];
				optr.top--; i++;
			}
			optr.top++;
			optr.data[optr.top] = *p;
			p++;
			dh = 0;
			break;
		case '*':
		case '/': while (optr.data[optr.top] == '*' || optr.data[optr.top] == '/' || optr.data[optr.top] == 's')
		{
			q[i] = optr.data[optr.top];
			optr.top--; i++;
		}
				optr.top++; optr.data[optr.top] = *p; p++; dh = 0; break;
		case '^': while (optr.data[optr.top] == '^')
		{
			q[i] = optr.data[optr.top];
			optr.top--; i++;
		}
				optr.top++; optr.data[optr.top] = *p; p++; dh = 0; break;
		case '%': while (optr.data[optr.top] == '%')
		{
			q[i] = optr.data[optr.top];
			optr.top--; i++;
		}
				optr.top++; optr.data[optr.top] = *p; p++; dh = 0; break;
		case ' ': p++; break;  //消除空格
		case 's':
		case 'S': if ((*(p + 1) == 'i' || *(p + 1) == 'I') && (*(p + 2) == 'n' || *(p + 2) == 'N'))
		{
			optr.top++; optr.data[optr.top] = 's';
			p += 3; dh = 0;
			break;
		}
				else
			if ((*(p + 1) == 'q' || *(p + 1) == 'Q') && (*(p + 2) == 'r' || *(p + 2) == 'R') && (*(p + 3) == 't' || *(p + 3) == 'T'))
			{
				optr.top++; optr.data[
					optr.top] = 'q';
				p += 4; dh = 0;
				break;
			}
			else { cout << endl << "有错误符号" << endl; return derror; }
		case 'c':
		case 'C': if ((*(p + 1) == 'o' || *(p + 1) == 'O') && (*(p + 2) == 's' || *(p + 2) == 'S'))
		{
			optr.top++; optr.data[optr.top] = 'c';
			p += 3; dh = 0;
			break;
		}
				else { cout << endl << "有错误符号" << endl; return derror; }
		case 'T':
		case 't':if ((*(p + 1) == 'a' || *(p + 1) == 'A') && (*(p + 2) == 'n' || *(p + 2) == 'N'))
		{
			optr.top++; optr.data[optr.top] = 't';
			p += 3; dh = 0;
			break;
		}
				else { cout << endl << "有错误符号" << endl;; return derror; }
		case 'e':
		case 'E':if ((*(p + 1) == 'x' || *(p + 1) == 'X') && (*(p + 2) == 'p' || *(p + 2) == 'P'))
		{
			optr.top++; optr.data[optr.top] = 'e';
			p += 3; dh = 0;
			break;
		}
				else { cout << endl << "有错误符号" << endl; return derror; }
		case 'a':
		case 'A': if ((*(p + 1) == 'b' || *(p + 1) == 'B') && (*(p + 2) == 's' || *(p + 2) == 'S'))
		{
			optr.top++; optr.data[optr.top] = 'a';
			p += 3; dh = 0;
			break;
		}
				else { cout << endl << "有错误符号" << endl; return derror; }
		default:
			while (*p >= '0' && *p <= '9')  //判断是否为数字
			{
				q[i] = *p; i++;
				p++;
			}
			if (*p == '.')
			{
				q[i] = '.'; i++; p++;
				while (*p >= '0' && *p <= '9')
				{
					q[i] = *p; i++;
					p++;
				}
			}
			q[i] = '#';  i++; dh = 0;//用#标识一个数值串结束
		}
	}
	while (optr.top != -1)  //此时p扫描完毕,栈不空时循环
	{
		q[i] = optr.data[optr.top];
		i++; optr.top--;
	}
	q[i] = '\0';  //给q表达式添加结束标识
	return 1;
}



double jisuan(char* q) //计算后缀表达式的值
{
	double d, x;
	opnd.top = -1;  //初始化操作数栈
	while (*q != '\0')  //q字符串未扫描完时循环
	{
		switch (*q)  //判断各种情况，并做相应的运算 ,并入栈
		{
		case '+':opnd.data[opnd.top - 1] = opnd.data[opnd.top - 1] + opnd.data[opnd.top];
			opnd.top--; break;
		case '-':opnd.data[opnd.top - 1] = opnd.data[opnd.top - 1] - opnd.data[opnd.top];
			opnd.top--; break;
		case '*':opnd.data[opnd.top - 1] = opnd.data[opnd.top - 1] * opnd.data[opnd.top];
			opnd.top--; break;
		case '/': if (opnd.data[opnd.top] != 0)
			opnd.data[opnd.top - 1] = opnd.data[opnd.top - 1] / opnd.data[opnd.top];
				else
		{
			cout << endl << "除数不能为零 !" << endl;
			return derror;
		}
				opnd.top--; break;
		case '^':opnd.data[opnd.top - 1] = pow(opnd.data[opnd.top - 1], opnd.data[opnd.top]);
			opnd.top--; break;
		case '%':opnd.data[opnd.top - 1] = fmod(opnd.data[opnd.top - 1], opnd.data[opnd.top]);
			opnd.top--; break;
		case '@':opnd.data[opnd.top] = -(opnd.data[opnd.top]); break;
		case 's':opnd.data[opnd.top] = sin(opnd.data[opnd.top]); break;
		case 'c':opnd.data[opnd.top] = cos(opnd.data[opnd.top]); break;
		case 'q':if (opnd.data[opnd.top] >= 0)
			opnd.data[opnd.top] = sqrt(opnd.data[opnd.top]);
				else
		{
			cout << endl << "开方内的数不能小于零 !" << endl;
			return derror;
		}
				break;
		case 'e':opnd.data[opnd.top] = exp(opnd.data[opnd.top]); break;
		case 't':opnd.data[opnd.top] = tan(opnd.data[opnd.top]); break;
		case 'a':opnd.data[opnd.top] = abs(opnd.data[opnd.top]); break;
		default:
			d = 0;  //将数字字符转换成数值存放到 d中
			while (*q >= '0' && *q <= '9')  //为数字字符
			{
				d = 10 * d + (*q - '0');  //转变成整形
				q++;
			}
			x = 0.1;
			if (*q == '.') //小数点
			{
				q++;
				while (*q >= '0' && *q <= '9')  //为数字字符
				{
					d = d + x * (*q - '0');
					x *= 0.1;
					q++;
				}
			}
			opnd.top++; opnd.data[opnd.top] = d;  //入操作数栈
		}
		q++;
	}
	return opnd.data[opnd.top];  //返回计算结果
}
