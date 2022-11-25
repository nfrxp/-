//#include<iostream>
//#define SQR(x) (x)*x
//
//using namespace std;
//int main()
//{
//	int k = 2;
//	cout << SQR(k + 1);
//
//	//SQR(k+1)等价于（k+1)*k+1
//	return 0;
//}

//
///*百鸡问题：100元买100只鸡，公鸡5元每只，母鸡3元每只，小鸡1元三只
//	，求100元能买公鸡。母鸡、小鸡多少只？*/				//填空1
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




///*以下程序是通过动态内存分配用选择法对n个整数按升序排序*/
//
//#include<cstdlib>
//#include<iostream>
//
//using namespace std;
//int main()
//{
//	int i, j, n, iPos;
//	int* pBuff = NULL, tmp;
//	cout << "输入元素个数:";
//	cin >> n;
//	pBuff = (int*)malloc(? ? ? );
//	if (pBuff == NULL)
//	{
//		exit(1);
//	}
//	cout << "输入数据：" << endl;
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
//	char c1 = 'A' + 5, c2;	//'A'为65
//	c2 = c1 + 2;
//	cout << int(c1) << c2;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 2, b = 3, c = 4;
//	a *= 16 + (b++) - (++c);	//赋值后再算后置++
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