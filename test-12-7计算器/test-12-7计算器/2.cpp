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
}optr;  //���������ջ��������ȫ�ֱ���
struct
{
	double data[Maxlen];
	int top;
}opnd;  //���������ջ��������ȫ�ֱ���
void main()
{

	double k;
	void meun();  //�����˵�����
	int change(char* p, char q[]);  //����ת������
	double jisuan(char* q);  //�������㺯��
	meun();
	for (;;)  //ѭ��ִ��
	{
		cout << "����������������ʽ:";
		cin >> p;
		if (strcmp(p, "0") == 0)
			return;
		if (change(p, q) == 1)
		{
			k = jisuan(q);
			if (k == derror)
				cout << "";
			else
				cout << "������Ϊ�� " << k << endl;
			cout << "�Ƿ���Ҫ��׺���ʽ Y or y" << endl;
			char  ch;
			cin >> ch;
			cout << "��׺���ʽΪ����#������10��1��:";
			if ((ch == 'Y') && (ch == 'y'))
				change(p, q);
			for (int i = 0; i < q.lenght; i++)
				cout << q[i] << " ";
			break;
		}
		system("pause");  //���������ʽ
		system("cls");
		meun();
	}
}
void meun()
{
	system("color 0b");
	cout << "\t**************************************" << endl;
	cout << "\t\t�� ӭ ʹ �� �� �� �� ��" << endl;
	cout << "\t\t " << "a" << "     " << "e" << "     " << "q" << "     " << "��" << endl;
	cout << endl;
	cout << "\t\t " << "9" << "     " << "8" << "     " << "7" << "     " << "+" << endl;
	cout << endl;
	cout << "\t\t " << "6" << "     " << "5" << "     " << "4" << "     " << "-" << endl;
	cout << endl;
	cout << "\t\t " << "3" << "     " << "2" << "     " << "1" << "     " << "*" << endl;
	cout << endl;
	cout << "\t\t " << "." << "     " << "0" << "     " << "=" << "     " << "/" << endl;
	cout << endl;
	cout << "\t\t " << "s" << "     " << "c" << "     " << "t" << "     " << "��" << endl;
	cout << "\t\t�˼��������ʵ�ֵĺ����У�" << endl;
	cout << "\t\tsinx,cosx,tanx,sqrt,abs,exp" << endl;
	cout << "\t**************************************" << endl;
	cout << endl;
	cout << "\t��0����������" << endl;
}
int change(char* p, char q[])  //���������ʽ pת���ɱ��ʽ��׺���ʽ q
{
	int i = 0;  //i��Ϊq���±�
	int dh = 1;  //dh=1��ʾ�Ǹ���
	optr.top = -1;  //��ʼ�������ջ
	while (*p != '\0')  //p���ʽδɨ����ʱѭ��
	{
		switch (*p) //�жϸ������ ,������Ӧ�Ĵ���
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
			if (dh == 1)  // +,-��������
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
		case ' ': p++; break;  //�����ո�
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
			else { cout << endl << "�д������" << endl; return derror; }
		case 'c':
		case 'C': if ((*(p + 1) == 'o' || *(p + 1) == 'O') && (*(p + 2) == 's' || *(p + 2) == 'S'))
		{
			optr.top++; optr.data[optr.top] = 'c';
			p += 3; dh = 0;
			break;
		}
				else { cout << endl << "�д������" << endl; return derror; }
		case 'T':
		case 't':if ((*(p + 1) == 'a' || *(p + 1) == 'A') && (*(p + 2) == 'n' || *(p + 2) == 'N'))
		{
			optr.top++; optr.data[optr.top] = 't';
			p += 3; dh = 0;
			break;
		}
				else { cout << endl << "�д������" << endl;; return derror; }
		case 'e':
		case 'E':if ((*(p + 1) == 'x' || *(p + 1) == 'X') && (*(p + 2) == 'p' || *(p + 2) == 'P'))
		{
			optr.top++; optr.data[optr.top] = 'e';
			p += 3; dh = 0;
			break;
		}
				else { cout << endl << "�д������" << endl; return derror; }
		case 'a':
		case 'A': if ((*(p + 1) == 'b' || *(p + 1) == 'B') && (*(p + 2) == 's' || *(p + 2) == 'S'))
		{
			optr.top++; optr.data[optr.top] = 'a';
			p += 3; dh = 0;
			break;
		}
				else { cout << endl << "�д������" << endl; return derror; }
		default:
			while (*p >= '0' && *p <= '9')  //�ж��Ƿ�Ϊ����
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
			q[i] = '#';  i++; dh = 0;//��#��ʶһ����ֵ������
		}
	}
	while (optr.top != -1)  //��ʱpɨ�����,ջ����ʱѭ��
	{
		q[i] = optr.data[optr.top];
		i++; optr.top--;
	}
	q[i] = '\0';  //��q���ʽ��ӽ�����ʶ
	return 1;
}



double jisuan(char* q) //�����׺���ʽ��ֵ
{
	double d, x;
	opnd.top = -1;  //��ʼ��������ջ
	while (*q != '\0')  //q�ַ���δɨ����ʱѭ��
	{
		switch (*q)  //�жϸ��������������Ӧ������ ,����ջ
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
			cout << endl << "��������Ϊ�� !" << endl;
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
			cout << endl << "�����ڵ�������С���� !" << endl;
			return derror;
		}
				break;
		case 'e':opnd.data[opnd.top] = exp(opnd.data[opnd.top]); break;
		case 't':opnd.data[opnd.top] = tan(opnd.data[opnd.top]); break;
		case 'a':opnd.data[opnd.top] = abs(opnd.data[opnd.top]); break;
		default:
			d = 0;  //�������ַ�ת������ֵ��ŵ� d��
			while (*q >= '0' && *q <= '9')  //Ϊ�����ַ�
			{
				d = 10 * d + (*q - '0');  //ת�������
				q++;
			}
			x = 0.1;
			if (*q == '.') //С����
			{
				q++;
				while (*q >= '0' && *q <= '9')  //Ϊ�����ַ�
				{
					d = d + x * (*q - '0');
					x *= 0.1;
					q++;
				}
			}
			opnd.top++; opnd.data[opnd.top] = d;  //�������ջ
		}
		q++;
	}
	return opnd.data[opnd.top];  //���ؼ�����
}
