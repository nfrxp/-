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
//		cout<<"�ɼ�����0��100֮��\n";
//	else if (grade >= 90 && grade <= 100)
//		cout << "��\n";
//	else if (grade >= 80 && grade <90)
//		cout << "��\n";
//	else if (grade >= 60 && grade <80)
//		cout << "��\n"; 
//	else if (grade >= 0 && grade <60)
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
//	int i = 2, a, b;		//a�������࣬bΪ��
//	while (i <= 100)
//	{
//		a = 2;
//		while (a <i)
//		{
//			b = i % a;
//			if (b == 0)
//			{
//				break;
//			}
//			a++;
//		}
//		if (a == i)
//		{
//			cout << i << "������\n";
//		}
//
//		i++;
//
//	}
//	return 0;
//}


//#include<iostream>					//do-while ��1��100������
//using namespace std;
//int main()
//{
//	int i=2, a, b;		//a�������࣬bΪ��
//	do
//	{
//		a = 2;
//		do
//		{
//			b = i % a;
//			if (b == 0)
//			{
//				break;
//			}
//			a++;
//		} while (a < i);
//		if (a == i)
//		{
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
//	int i = 2, a, b;		//a�������࣬bΪ��
//	for (i=2;i<=100;i++)
//	{
//		a = 2;
//		for (a =2;a< i;a++)
//		{
//			b = i % a;
//			if (b == 0)
//			{
//				break;
//			}
//
//		}
//		if (a == i)
//		{
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


//#include<iostream>							//do while ������Ϸ 
//using namespace std;
//int main()
//{
//	int m(66), n(0);
//	do
//	{
//		cout << "�²�������Ƕ���?(0~100)\n";
//		cin >> n;
//		if (n < m)
//			cout << "��µ�ֵƫС!\n";
//		else if (n > m)
//			cout << "��µ�ֵƫ��\n";
//		else
//			cout << "��ϲ�㣬��¶�����\n";
//
//	} while (n != m);
//	return 0;
//}



//#include <iostream>								//��5������ȡ������ ����һ
//using namespace std;
//int main()
//{
//
//	int i,j,k;					//a,b,c�ֱ����ȡ��������
//	int b = 0;					//b�������������
//	for (i = 0; i <= 4; i++)	//0��4�ֱ��Ӧ�쵽��������ɫ
//	{
//		for (j = 0; j <= 4; j++)
//		{
//			if (i == j)
//				continue;
//			else
//				for (k =0; k <= 4; k++)
//				{
//					if (k == i || k == j)
//						continue;
//					else
//					{
//						b++;
//						cout << b << "  ";
//						switch (i)
//						{
//						case 0:
//							cout << "	red" ;
//							break;
//						case 1:
//							cout << "	yellow" ;
//							break;
//						case 2:
//							cout << "	blue" ;
//							break;
//						case 3:
//							cout << "	white" ;
//							break;
//						case 4:
//							cout <<	"	black";
//							break;
//						}
//
//						switch (j)
//						{
//						case 0:
//							cout << "	red";
//							break;
//						case 1:
//							cout << "	yellow";
//							break;
//						case 2:
//							cout << "	blue";
//							break;
//						case 3:
//							cout << "	white";
//							break;
//						case 4:
//							cout << "	black";
//							break;
//						}
//
//						switch (k)
//						{
//						case 0:
//							cout << "	red"<<endl;
//							break;
//						case 1:
//							cout << "	yellow" << endl;
//							break;
//						case 2:
//							cout << "	blue" << endl;
//							break;
//						case 3:
//							cout << "	white" << endl;
//							break;
//						case 4:
//							cout << "	black" << endl;
//							break;
//						}
//						
//
//					}
//				}
//		}
//	}
//	
//
//	return 0;
//}

//#include<iostream>								//��5������ȡ������ ����������forѭ��������switch�ϲ�Ϊһ����
//using namespace std;
//int main()
//{
//	
//	int i, j, k;
//	int m(0);//����
//	int b(0), loop;
//	for (i = 0; i <= 4; i++)
//	{
//		for(j=i+1;j<=4;j++)
//			if (j != i)
//			{
//				for (k = j+1; k <= 4; k++)
//				{
//					if ((k != i )&& (k != j))
//					{
//						m++;
//						cout << m<<".";
//						for (loop = 1; loop <= 3; loop++)
//						{
//							switch (loop)
//							{
//							case 1:
//								b = i;
//								break;
//							case 2:
//								b = j;
//								break;
//							case 3:
//								b = k;
//								break;
//							}
//
//							switch (b)
//							{
//							case 0:
//								cout << "	red	";
//								break;
//							case 1:
//								cout << "	yellow	";
//								break;
//							case 2:
//								cout << "	blue	";
//								break;
//							case 3:
//								cout << "	white	";
//								break;
//							case 4:
//								cout << "	black	";
//								break;
//							}
//
//						}
//						cout << endl;
//					}
//				}
//			}
//	}
//	return 0;
//}



//#include <iostream>								//һ��ȡ3��������˳��,ö��
//using namespace std;
//int main()
//{
//    enum color{red,yellow,blue,white,black};
//    color color1;
//    int i, j, k, loop;
//    int count = 0; //����
//    for (i = red; i <= black; i++)
//    {
//        for (j = i+1; j <= black; j++)
//        {
//            for (k = j+1; k <= black; k++)
//            {
//                if (i != j && i != k && j != k)
//                {
//                    count++;
//                    cout << count<<".";
//                    for (loop = 1; loop <= 3; loop++)
//                    {
//                        switch (loop)
//                        {
//                        case 1:
//                            color1 = color(i);
//                            break;
//                        case 2:
//                            color1 = color(j);
//                            break;
//                        case 3:
//                            color1 = color(k);
//                            break;
//                        default:
//                            break;
//                        }
//                        switch (color1)
//                        {
//                        case red:
//                            cout << "red    "
//                                << "  ";
//                            break;
//                        case yellow:
//                            cout << "yellow "
//                                << "   ";
//                            break;
//                        case blue:
//                            cout << "blue   "
//                                << "  ";
//                            break;
//                        case white:
//                            cout << "white  "
//                                << "  ";
//                            break;
//                        case black:
//                            cout << "black  "
//                                << "  ";
//                            break;
//                        default:
//                            break;
//                        }
//                    }
//                    cout << endl;
//                }
//
//            }
//        }
//    }
//
//    return 0;
//}

#include<iostream>
#include <stdlib.h>
using namespace std;
void main()
{
	int i, j, k, n = 0;
	char c[5][7] = { "red","yellow","blue","white","black" };
	for (i = 0; i < 5; i++)
		for (j = i + 1; j < 5; j++)
			for (k = j + 1; k < 5; k++)
			{
				if (i != j && j != k && k != i)
				{
					n++;
					cout << n << ".";
					cout<<c[i]<<"  "<< c[j] <<"  "<< c[k] << endl;

				}
			}
}


