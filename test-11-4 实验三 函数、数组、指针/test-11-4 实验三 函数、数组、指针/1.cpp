//#include <iostream>
//using namespace std;
//
//int hcf(int u, int v)
//{
//	int a, b, t, r;
//
//	if (u > v) {
//		t = u;
//		u = v;
//		v = t;
//	}
//	a = u;
//	b = v;
//	while ((r = b % a) != 0) {
//		b = a;
//		a = r;
//	}
//	return(a);
//}
//
//int lcd(int u, int v, int h)
//{
//	return(u * v / h);
//}
//
//void main()
//{
//	int u, v, h, l;
//
//	cin >> u >> v;
//	h = hcf(u, v);
//	cout << "hcf = " << h << endl;
//	l = lcd(u, v, h);
//	cout << "lcd = " << l << endl;
//}

//#include <iostream>
//using namespace std;
//
//long  fib(int g)
//{
//	switch (g)
//	{
//	case 0: return 0;
//	case 1:
//	case 2: return 1;
//	}
//	return (fib(g - 1) + fib(g - 2));
//}
//
//void main()
//{
//	long k;
//
//	k = fib(7);
//	cout << "k =" << k << endl;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//#include <string.h>
//
//void main()
//{
//	char a[20] = "TER", b[20] = "COMP";
//	int i = 0;
//	strcat(a, b);
//	while (a[i++] != '\0') b[i] = a[i];
//	cout << b;
//}


//#include <iostream>
//using namespace std;
//
//void main()
//{
//	int i = 0, base, n, j, num[20];
//	cin >> n >> base;
//	do {
//		i++;
//		num[i] = n % base;
//		n = n / base;
//	} while (n != 0);
//	for (j = i; j >= 1; j--) cout << num[j]<<" ";
//}


//#include <iostream>
//using namespace std;
//
//void sub(int x, int y, int* z)
//{
//	*z = y - x;
//}
//
//void main()
//{
//	int a, b, c;
//	sub(10, 5, &a);
//	sub(7, a, &b);
//	sub(a, b, &c);
//	cout << a << ',' << b << ',' << c << endl;
//}


//#include <iostream>
//using namespace std;
//#include <string.h>
//#include<stdio.h>
//int stre(char str[])
//{
//	int num = 0;
//	while (*(str + num) != '\0')  num++;
//	return (num);
//}
//
//void main()
//{
//	int stre(char[]);
//	char str[10];
//	char* p = str;
//
//	gets_s(str);
//	cout << stre(p) << endl;
//}


