//#include<iostream>										//二级指针
//using namespace std;
//int main()
//{
//	int x = 99;
//	int* p = &x;		//&：取址运算符
//	int** q = &p;		//两个**
//	cout << *p << endl;	//*：指针运算符
//	cout << *q << endl;
//	cout << **q << endl;//二级指针直接访问一级指针指向的内容
//
//	return 0;
//}


//#include<iostream>										//指针与常量
//using namespace std;
//int main()
//{
//	int x = 99;
//	int y = 88;
//	const int* p = &x;		//指向常量的指针
//	*p = 98;					//不可修改指向的内容
//	x = 67;						//但可以通过变量直接修改
//	p = &y;						//可修改指针变量的值
//
//	int* const q = &x;		//指针常量（常指针）
//	*q = 878;					//可修改指针指向的内容
//	q = &y;						//不可修改指针变量的值
//
//	const int* const i = &x;
//	*i = 98;					//不可修改指向的内容
//	i = &y;						//可修改指针变量的值
//	return 0;
//}


//#include<iostream>										//指针的运算
//using namespace std;
//int main()
//{
//	int x = 99;
//	int y = 98;
//	int* i = &x;
//	int* j = &y;
//	int n = 8;
//	j + n; j - n;				//指针与整数的加减运算—>指向j后（前）的第n个 整型 单元
//	j - i;						//指针的相减运算->两指针变量之间的单元数
//	return 0;
//}



//#include<iostream>										//二维数组
//using namespace std;
//int main()
//{
//	int a[4][3] = { {1,2,3},{5,32,99} };	//分组初始化
//
//	cout << a[4][3];	//超出有效范围仍然可以访问
//	return 0;
//}