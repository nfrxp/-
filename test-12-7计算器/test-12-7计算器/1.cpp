//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//class calculator
//{
//public:
//	char token;
//	int exp(void);
//	int term(void);
//	int factor(void);
//	void match(char expectedToken);
//	void error(void);
//};
//int calculator::exp(void)
//{
//	int temp = term(); /* ����ȼӼ��������ȼ���ߵĲ��� */
//	while ((token == '+') || (token == '-'))
//		switch (token)
//		{
//		case '+':
//			match('+'); /* �ӷ� */
//			temp += term();
//			break;
//		case '-':
//			match('-');
//			temp -= term(); /* ���� */
//			break;
//		}
//	return temp;
//}
//int calculator::term(void)
//{
//	int div; /* ���� */
//	int temp = factor(); /* ����ȳ˳��������ȼ���ߵĲ��� */
//	while ((token == '*') || (token == '/'))
//		switch (token)
//		{
//		case '*':
//			match('*'); /* �˷� */
//			temp *= factor();
//			break;
//		case '/':
//			match('/'); /* ���� */
//			div = factor();
//			if (div == 0) /* ��Ҫ�жϳ����Ƿ�Ϊ 0*/
//			{
//				fprintf(stderr, " ����Ϊ 0.\n");
//				exit(1);
//			}
//			temp /= div;
//			break;
//		}
//	return temp;
//}
//int calculator::factor(void)
//{
//	int temp;
//	if (token == '(') /* �������ŵ����� */
//	{
//		match('(');
//		temp = exp();
//		match(')');
//	}
//	else if (isalnum(token)) // ʵ�ʵ�����
//	{
//		ungetc(token, stdin); // ��������ַ��˻���������
//		scanf("%d", &temp); // ��������
//		token = getchar(); // ������ǰ�ı�־
//	}
//	else error(); // ��������Ҳ��������
//	return temp;
//}
//void calculator::match(char expectedToken) // �Ե�ǰ�ı�־����ƥ��
//{
//	if (token == expectedToken) token = getchar(); // ƥ��ɹ����� ȡ��һ����־
//	else error(); // ƥ�䲻�ɹ����������
//}
//void calculator::error(void) // ���������Ϣ�ĺ���
//{
//	cout << " �����д��� " << endl;
//	exit(1);
//}
//int main()
//{
//	cout << "================================================================\n";
//	cout << "*    �ݹ�ʵ������������ʽ��ֵ����  *\n";
//	cout << "****************************************************************\n";
//	cout << " ʹ�÷��� : ��Ӽ�����ֱ��������ʽ , �Իس������� . �� 45*(12-2)[ �س� ]\n";
//	cout << "************************************************************** ***\n\n";
//	int result; // ����Ľ��
//	cout << " ��������ʽ : ";
//	calculator c1;
//
//	c1.token = getchar(); // �����һ������
//	result = c1.exp(); // ���м���
//	if (c1.token == '\n') //  �Ƿ�һ�н���
//		cout << " >>  ���ʽ�ļ�����Ϊ  : " << result << endl;
//	else c1.error(); // ������������ַ�
//	return 0;
//}
