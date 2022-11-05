//#include<iostream>										//数组元素排序，二分查找
//using namespace std;
//int main()
//{
//	int a[10];
//	int i = 0;
//	cout << "请依次输入十个整数:\n";
//	for (i = 0; i < 10; i++)
//	{
//		cin >> a[i];
//	}
//
//	int m = 0, n = 0;
//	for (m = 0; m < 10; m++)	//从小到大排序，选择排序
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
//	cout << "从小到大排序后：\n";
//	for (i = 0; i < 10; i++)
//	{
//		cout << a[i] << " ";
//	}
//	int k = 0;
//	cout << "\n请输入需要查找的数:>";
//	cin >> k;
//
//	m = 0, n = 9;
//	int mid = 0;
//	while (m<=n)
//	{
//		mid = (m + n) / 2;
//		if (a[mid] == k)
//		{
//			cout << "找到了，下标为" << mid << endl;
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
//		cout << "数组中没有这个数!\n";
//	return 0;
//}


//#include<iostream>											//字符串大小写字母个数
//using namespace std;
//int main()
//{
//	char i[30];
//	char* p = i;
//	cout << "请输入一个字符串:>";
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
//	cout << "大写字母的个数为：" << countA << ',' << "小写字母的个数为：" << counta << endl;
//	return 0;
//}

//#include<iostream>										//学生姓名排序
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
//	cout << "排序前：\n";
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
//	cout<<"排序后：\n";
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
//	cout << "请输入十个学生的成绩:\n";
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
//	cout << "平均成绩为：" << average << endl;
//	cout << "高于平均成绩所对应的下标为：" ;
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
//	cout << "请输入20个数据：\n";
//	int i = 0, j = 0;
//	for (i = 0; i < 4; i++)
//	{
//		cout << "第" << i << "行"<<endl;
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
//	cout << "每行之和依次为：";
//	for (i = 0; i < 4; i++)
//	{
//		cout<<b[i]<<" ";
//	}
//	return 0;
//}


//#include<iostream>										//ASCII码值个位数为3的字符个数
//using namespace std;
//int main()
//{
//	char a[20];
//	cout << "请输入字符串:>";
//	gets_s(a);
//	int i = 0, count = 0;
//	for (i = 0; i< 10; i++)
//	{
//		if ((int)a[i] % 10 == 3)
//			count++;
//	}
//	cout << "\nASCII码值个位数为3的字符个数为:>" << count << endl;
//	return 0;
//}