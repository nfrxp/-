//#include<iostream>							//ASCII��
//using namespace std;
//int main()
//{
//	int i;
//	for (i = 32; i < 128; i++)
//	{
//		cout << char(i) << " ";
//	}
//	return 0;
//}


//#include<iostream>						//��ֵ
//using namespace std;
//int main()
//{
//	int a(1), b(2), c(3),d;
//	d = a | b - c;
//	cout << "1. " << d << endl;
//	d = a ^ b & -c;
//	cout << "2. " << d << endl;
//	d = a & b | c;
//	cout << "3. " << d << endl;
//	d = a | b & c;
//	cout << "4. " << d << endl;
//	return 0;
//}


//#include<iostream>					//�жϳɼ��ȼ�֮����һ if
//using namespace std;
//int main()
//{
//	int grade;
//	cout << "�㿼�Կ��˶��ٷ֣���0~100��" << endl;
//	cin >> grade;
//	if(grade<0||grade>100)
//		cout<<"�ɼ���0��100֮��\n";
//	else if (grade >= 90 & grade <= 100)
//		cout << "��\n";
//	else if (grade >= 80 & grade <90)
//		cout << "��\n";
//	else if (grade >= 60 & grade <80)
//		cout << "��\n"; 
//	else if (grade >= 0 & grade <60)
//		cout << "��\n";
//	return 0;
//}



//#include<iostream>					//�жϳɼ��ȼ�֮������ switch
//using namespace std;
//int main()
//{
//	int grade, a;
//	cout << "�㿼�Կ��˶��ٷ֣���0~100��" << endl;
//	cin >> grade;
//	if (grade < 0 || grade>100)
//		cout << "�ɼ�����0��100֮��\n";
//	else
//	{
//		a = grade / 10;
//
//		switch (a)
//		{
//		case 10:
//		case 9:
//			cout << "��\n";
//			break;
//		case 8:
//			cout << "��\n";
//			break;
//		case 7:
//		case 6:
//			cout << "��\n";
//			break;
//		default:
//			cout << "��\n";
//			break;
//		}
//	}
//		return 0;
//}

//#include<iostream>					//while ��1��100������
//using namespace std;
//int main()
//{
//	int i = 2, a, b,c;		//a�������࣬bΪ�࣬c���������ж�
//	while (i <= 100)
//	{
//		a = 2;
//		c = 1;
//		while (a <i)
//		{
//			b = i % a;
//			if (b == 0)
//			{
//				c = 0;
//				break;
//			}
//			a++;
//		}
//		if (a == i)
//		{
//			if (c)
//			cout << i << "������\n";
//		}
//
//		i++;
//
//	}
//	return 0;
//}


//#include<iostream>					//do while ��1��100������
//using namespace std;
//int main()
//{
//	int i=2, a, b, c;		//a�������࣬bΪ�࣬c���������ж�
//	do
//	{
//		a = 2;
//		c = 1;
//		do
//		{
//			b = i % a;
//			if (b == 0)
//			{
//				c = 0;
//				break;
//			}
//			a++;
//		} while (a < i);
//		if (a == i)
//		{
//				if (c)
//					cout << i << "������\n";
//		}
//		i++;
//
//	} while (i < 100);
//	return 0;
//}



//#include<iostream>						//for ��1��100������
//using namespace std;
//int main()
//{
//	int i = 2, a, b, c;		//a�������࣬bΪ�࣬c���������ж�
//	for (i=2;i<=100;i++)
//	{
//		a = 2;
//		c = 1;
//		for (a =2;a< i;a++)
//		{
//			b = i % a;
//			if (b == 0)
//			{
//				c = 0;
//				break;
//			}
//
//		}
//		if (a == i)
//		{
//			if (c)
//				cout << i << "������\n";
//		}
//	}
//	return 0;
//}


//#include<iostream>						//while ������Ϸ 
//using namespace std;
//int main()
//{
//	int m(66), n(0);
//	while (n != m)
//	{
//		cout << "�²�������Ƕ���?(0~100)\n";
//		cin >> n;
//		if (n < m)
//			cout << "��µ�ֵƫС!\n";
//		else if (n > m)
//			cout << "��µ�ֵƫ��\n";
//		else
//			cout << "��ϲ�㣬��¶�����\n";
//	}
//
//
//	return 0;
//}


#include<iostream>							//do while ������Ϸ 
using namespace std;
int main()
{
	int m(66), n(0);
	do
	{
		cout << "�²�������Ƕ���?(0~100)\n";
		cin >> n;
		if (n < m)
			cout << "��µ�ֵƫС!\n";
		else if (n > m)
			cout << "��µ�ֵƫ��\n";
		else
			cout << "��ϲ�㣬��¶�����\n";

	} while (n != m);
	return 0;
}