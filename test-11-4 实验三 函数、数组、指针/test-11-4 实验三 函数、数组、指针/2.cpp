//#include<iostream>										//����Ԫ�����򣬶��ֲ���
//using namespace std;
//int main()
//{
//	int a[10];
//	int i = 0;
//	cout << "����������ʮ������:\n";
//	for (i = 0; i < 10; i++)
//	{
//		cin >> a[i];
//	}
//
//	int m = 0, n = 0;
//	for (m = 0; m < 10; m++)	//��С��������ѡ������
//	{
//		for (n = m; n < 10 ; n++)
//		{
//			if (a[m] > a[n])
//			{
//				int temp = a[m];
//				a[m] = a[n];
//				a[n] = temp;
//			}
//		}
//	}
//	cout << "��С���������\n";
//	for (i = 0; i < 10; i++)
//	{
//		cout << a[i] << " ";
//	}
//	int k = 0;
//	cout << "\n��������Ҫ���ҵ���:>";
//	cin >> k;
//
//	m = 0, n = 9;
//	int mid = 0;
//	while (m<=n)
//	{
//		mid = (m + n) / 2;
//		if (a[mid] == k)
//		{
//			cout << "�ҵ��ˣ��±�Ϊ" << mid << endl;
//			break;
//		}
//		else if (a[mid] > k)
//		{
//			n = mid - 1;
//		}
//		else if (a[mid] < k)
//		{
//			m = mid + 1;
//		}
//	}
//	if (m > n)
//		cout << "������û�������!\n";
//	return 0;
//}


//#include<iostream>											//�ַ�����Сд��ĸ����
//using namespace std;
//int main()
//{
//	char i[30];
//	char* p = i;
//	cout << "������һ���ַ���:>";
//	gets_s(i);
//	
//	int j = 0;
//	int countA = 0, counta = 0;
//	for (j = 0; j < 30; j++)
//	{
//		if (*(p + j) >= 'A' && *(p + j) <= 'Z')
//			countA++;
//		else if (*(p + j) >= 'a' && *(p + j) <= 'z')
//			counta++;
//	}
//	cout << "��д��ĸ�ĸ���Ϊ��" << countA << ',' << "Сд��ĸ�ĸ���Ϊ��" << counta << endl;
//	return 0;
//}

//#include<iostream>										//ѧ����������
//using namespace std;
//
//int main()
//{
//	char a[10][10] = { "John","Rose","Jack","Elen","Olivia","Mia","Benjamin","Mason","Logan","Noah" };
//	int i = 0, j = 0;
//	char* p[10], * t;
//
//	for (i = 0; i < 10; i++)
//	{
//		p[i] = a[i];
//	}
//	cout << "����ǰ��\n";
//	for (i = 0; i < 10; i++)
//	{
//		cout << p[i] << " ";
//	}
//	cout << endl;
//
//	for (i = 0; i < 10; i++)
//	{
//		for (j = i + 1; j < 10; j++)
//		{
//			if (strcmp(p[i], p[j]) > 0)
//			{
//				t = p[i];
//				p[i] = p[j];
//				p[j] = t;
//			}
//		}
//	}
//
//	cout<<"�����\n";
//	for (i = 0; i < 10; i++)
//	{
//		cout << p[i] << " ";
//	}
//	cout << endl;
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main() 
//{
//	float a[10];
//	cout << "������ʮ��ѧ���ĳɼ�:\n";
//	int i = 0;
//	float sum = 0, average = 0;
//	for (i = 0; i < 10; i++)
//	{
//		cin >> a[i];
//	}
//	for (i = 0; i < 10; i++)
//	{
//		sum += a[i];
//	}
//	average = sum / 10;
//	cout << "ƽ���ɼ�Ϊ��" << average << endl;
//	cout << "����ƽ���ɼ�����Ӧ���±�Ϊ��" ;
//
//	for (i = 0; i < 10; i++)
//	{
//		if (a[i] > average)
//			cout << i << " ";
//	}
//	cout << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	float a[4][5];
//	float b[4]={0};
//	
//	cout << "������20�����ݣ�\n";
//	int i = 0, j = 0;
//	for (i = 0; i < 4; i++)
//	{
//		cout << "��" << i << "��"<<endl;
//		for (j = 0; j < 5; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			b[i] += a[i][j];
//		}
//	}
//
//	cout << "ÿ��֮������Ϊ��";
//	for (i = 0; i < 4; i++)
//	{
//		cout<<b[i]<<" ";
//	}
//	return 0;
//}


//#include<iostream>										//ASCII��ֵ��λ��Ϊ3���ַ�����
//using namespace std;
//int main()
//{
//	char a[20];
//	cout << "�������ַ���:>";
//	gets_s(a);
//	int i = 0, count = 0;
//	for (i = 0; i< 10; i++)
//	{
//		if ((int)a[i] % 10 == 3)
//			count++;
//	}
//	cout << "\nASCII��ֵ��λ��Ϊ3���ַ�����Ϊ:>" << count << endl;
//	return 0;
//}