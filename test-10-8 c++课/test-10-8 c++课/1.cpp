//#include<iostream>									//ASCII��
//using namespace std;
//void main()
//{
//	char ch;//123Ϊ�����ַ���chΪchar����ֻȡ1
//	cin >> ch;
//	ch = (ch > 'A' && ch < 'Z') ? (ch + 32) : ch;
//	ch = (ch > 'a' && ch < 'z') ? (ch - 32) : ch;
//	cout << ch;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	if (n++ < 10)		//<��++ֻ��ʱ���Ⱥ��˳�򣬴˴�++�ں����߼�������
//		cout << n << endl;			//����n++�������ţ�����9ʱ��Ȼ�ӽ��룬������else
//	else
//		cout << n-- << endl;
//	return 0;
//}



//#include <iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	int i;
//	int j;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <=i; j++)
//		{
//			cout << i << '*' << j << '=' <<setw(2)<< i * j << "  ";
//		}
//		cout << endl;
//	}
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//
//	int i = 1;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 != 0)
//			continue;			//continueֻ����ѭ�����ڵ����
//		sum += i;
//	}
//	cout << sum;
//	return 0;
//}

//#include<iostream>									//��100��200֮���������sqrt
//using namespace std;
//int main()
//{
//	int i = 1;
//	int j = 3;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int a = 0;
//		a = (int)sqrt((double)i);
//		for (j = 3; j < a; j += 2)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j>a)
//			cout << i << ' ';
//	}
//
//	return 0;
//}

