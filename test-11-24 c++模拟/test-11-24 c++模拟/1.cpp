//#include<iostream>
//#define SQR(x) (x)*x
//
//using namespace std;
//int main()
//{
//	int k = 2;
//	cout << SQR(k + 1);
//
//	//SQR(k+1)�ȼ��ڣ�k+1)*k+1
//	return 0;
//}

//
///*�ټ����⣺100Ԫ��100ֻ��������5Ԫÿֻ��ĸ��3Ԫÿֻ��С��1Ԫ��ֻ
//	����100Ԫ���򹫼���ĸ����С������ֻ��*/				//���1
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	int cocks, hens, chicks;
//	???
//
//	while (cocks <= 19)
//	{
//		hens = 0;
//
//		????
//
//		while (? ? ? )
//		{
//			chicks = 100 - cocks - hens;
//			if (5 * cocks + 3 * hens + chicks / 3 == 3 && ? ? ? )
//			{
//				cout << cocks << ":" << hens << ":" << chicks << endl;
//			}
//			hens++;
//		}
//
//		???
//	}
//	return 0;
//}




///*���³�����ͨ����̬�ڴ������ѡ�񷨶�n����������������*/
//
//#include<cstdlib>
//#include<iostream>
//
//using namespace std;
//int main()
//{
//	int i, j, n, iPos;
//	int* pBuff = NULL, tmp;
//	cout << "����Ԫ�ظ���:";
//	cin >> n;
//	pBuff = (int*)malloc(? ? ? );
//	if (pBuff == NULL)
//	{
//		exit(1);
//	}
//	cout << "�������ݣ�" << endl;
//	for (i = 0; i < n; i++)
//	{
//		cin>>????
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		iPos = i;
//		for (j = i + 1; j < n; j++)
//		{
//			if (pBuff[j] < pBuff[iPos])
//			{
//				iPos = j;
//			}
//		}
//		if (? ? ? )
//		{
//			tmp = pBuff[iPos];
//			pBuff[iPos] = pBuff[i];
//			pBuff[i] = tmp;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		cout << pBuff[i] << " ";
//	}
//
//	? ? ? ;
//	return 0;
//}







//#include<iostream>
//using namespace std;
//int main()
//{
//	char c1 = 'A' + 5, c2;	//'A'Ϊ65
//	c2 = c1 + 2;
//	cout << int(c1) << c2;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 2, b = 3, c = 4;
//	a *= 16 + (b++) - (++c);	//��ֵ���������++
//	cout << a << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	char str[] = "\017\t\\abcd\n";
//	//				1 2  3  7  8  9
//	cout << sizeof(str) << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int a;
//	a = 25 / 3 % 3;
//	cout << a << endl;
//	return 0;
//}