#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<conio.h>
using namespace std;
class calculator
{
public:
	char token;
	int exp(void);
	int term(void);
	int factor(void);
	void match(char expectedToken);
	void error(void);
};
int calculator::exp(void)
{
	int temp = term(); /* 计算比加减运算优先级别高的部分 */
	while ((token == '+') || (token == '-'))
		switch (token)
		{
		case '+':
			match('+'); /* 加法 */
			temp += term();
			break;
		case '-':
			match('-');
			temp -= term(); /* 减法 */
			break;
		}
	return temp;
}
int calculator::term(void)
{
	int div; /* 除数 */
	int temp = factor(); /* 计算比乘除运算优先级别高的部分 */
	while ((token == '*') || (token == '/'))
		switch (token)
		{
		case '*':
			match('*'); /* 乘法 */
			temp *= factor();
			break;
		case '/':
			match('/'); /* 除法 */
			div = factor();
			if (div == 0) /* 需要判断除数是否为 0*/
			{
				fprintf(stderr, " 除数为 0.\n");
				exit(1);
			}
			temp /= div;
			break;
		}
	return temp;
}
int calculator::factor(void)
{
	int temp;
	if (token == '(') /* 带有括号的运算 */
	{
		match('(');
		temp = exp();
		match(')');
	}
	else if (isalnum(token)) // 实际的数字
	{
		ungetc(token, stdin); // 将读入的字符退还给输入流
		scanf("%d", &temp); // 读出数字
		token = getchar(); // 读出当前的标志
	}
	else error(); // 不是括号也不是数字
	return temp;
}
void calculator::match(char expectedToken) // 对当前的标志进行匹配
{
	if (token == expectedToken) token = getchar(); // 匹配成功，获 取下一个标志
	else error(); // 匹配不成功，报告错误
}
void calculator::error(void) // 报告出错信息的函数
{
	cout << " 输入有错误 " << endl;
	exit(1);
}
int main()
{
	char a[10];
	char b[10];
	int i;


	cout << "================================================================\n";
	cout << "*    递归实现四则运算表达式求值程序  *\n";
	cout << "****************************************************************\n";
	cout << " 使用方法 : 请从键盘上直接输入表达式 , 以回车键结束 . 如 45*(12-2)[ 回车 ]\n";
	cout << "************************************************************** ***\n\n";
	int result; // 运算的结果
	cout << " 请输入表达式 : ";
	calculator c1;
	for (i = 0; 1; i++) {

		a[i] = getc(stdin);
		cout << a[i];
		if (a[i] == '=')
			break;
		else if (a[i] != '=') {
			ungetc(a[i], stdin);
			
		}
	}
	c1.token = getchar(); // 载入第一个符号
	result = c1.exp(); // 进行计算
	if (c1.token == '\n') //  是否一行结束
		cout << " >>  表达式的计算结果为  : " << result << endl;
	else c1.error(); // 出现了例外的字符
	return 0;
}
