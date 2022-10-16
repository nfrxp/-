//#include<stdio.h>										//赋值操作符
//int main()
//{
//	int a = 4;
//	int b = 2;
//	int c = 8;
//	a = b = c + 1;
//	printf("a=%d b=%d c=%d", a, b, c);
//	return 0;
//}


//#include<stdio.h>										//二进制中1的个数
//int main()
//{
//	int num = -1;
//	int i = 0;
//	int count = 0;
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	printf("%d", count);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a = -10;
//	int* p = NULL;
//	printf("%d\n", !2);	//0
//	printf("%d\n", !0);	//1
//	a = -a;
//	p = &a;
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof a);//4
//	//printf("%d\n", sizeof int);	写法错误
//
//	return 0;
//}


//#include<stdio.h>										//360笔试题，操作符
//int main()
//{
//	int i = 0, a =0, b = 2, c = 3, d = 4;
//	printf("i=%d a=%d b=%d c=%d d=%d\n", i, a, b, c, d);
//	i = a++ && ++b && d++;										//逻辑与，遇到零，直接停止运算
//	printf("i=%d a=%d b=%d c=%d d=%d\n", i, a, b, c, d);		//b和d的值没有改变
//	
//	i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;
//	printf("i=%d a=%d b=%d c=%d d=%d\n", i, a, b, c, d);
//	return 0;
//}


//#include<stdio.h>								//sizeof,数组，字符串
//
//test1(int arr[])
//{
//	printf ("%d\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf ("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = {0};
//	char ch[10] = {0};
//	printf ("%d\n", sizeof(arr));
//	printf ("%d\n", sizeof(ch));
//	test1(arr);					//指针，64位为8字节
//	test2(ch);
//	
//	return 0;
//}


//#include<stdio.h>								//条件操作符  ？  ：  
//int main()
//{
//	int a = 5;
//	int b = 0;
//	b = (a > 5) ? 3 : 8;
//	printf("%d", b);
//	return 0;
//}

//#include<stdio.h>									//默认数据类型为int
//int main()
//{
//	short i = 10;
//	static j = 10;
//	unsigned k = 10;
//	const l = 10;
//	return 0;
//}


//#include<stdio.h>                           //sizeof，求数据类型大小
//int main() 
//{
//    printf("%d\t", sizeof(6.5));
//    printf("%d\t", sizeof(90000));
//    printf("%d", sizeof('A'));              //字符常量4字节
//    return 0;
//}


//#include<stdio.h>                             //const int 4字节
//int main()
//{
//	int i = sizeof(const);
//	printf("%d", i);
//	return 0;
//}


//#include<stdio.h>							//u
//int main() {
//    signed x, a;
//    unsigned y, b;
//    a = (signed)10u;
//    b = (unsigned)-10;
//    y = (signed)10u + (unsigned)-10;            //溢出
//    x =0;
//    printf("%d  %u\t", a, b);
//    if (x == y)
//        printf("%d %d", x, y);
//    else if (x != y)
//        printf("%u  %u", x, y);
//    return 0;
//}

//#include<stdio.h>									//char a=250,	a=-6
//int main() 
//{
//    char a = 250;
//    int expr;
//    expr = a + !a + ~a + ++a;
//    printf("%d", expr);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char a = 250;
//	printf("%d", a);
//	return 0;
//}


//    //enum  cricket1 { Gambhir, Smith, Sehwag }c;
//   //enum  cricket2 { Gambhir, Smith, Sehwag };
//   enum { Gambhir, Smith = -5, Sehwag }c;
//   //enum  c { Gambhir, Smith, Sehwag };
//
//#include<stdio.h>
//int main()
// {
//	   
//	   int i = 0;
//	   i = c;
//	   printf("%d", i);
//	   return 0;
//}


//#include<stdio.h>
//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n",sizeof(s = a + 5));		//仍然为short
//	printf("%d\n", s);
//	return 0;
//}


//#include<stdio.h>
//struct a								//创建一个结构体类型
//{
//	//成员变量
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	struct a i = { "张三",30,"2021219494" };		//用struct a这个类型创建了一个学生对象i、，并初始化
//	
//	struct a* pi = &i;		//指针
//
//
//	printf("%s\n", pi->name);		//结构体指针->成员名,访问结构体成员
//	printf("%d\n\n", pi->age);
//
//	printf("%s\n", (*pi).name);		//解引用操作符，点操作符
//	printf("%d\n\n", (*pi).age);
//
//	printf("%s\n", i.name);			//点操作符，访问结构体成员
//	printf("%d\n", i.age);
//	printf("%s\n", i.id);
//	  //结构体变量.成员名
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 12;
//	a = a & 052; 
//	printf("%d\n", a);
//
//	return 0;
//}

#include<stdio.h>
int main()
{
	//int i = 0;
	//i = 6 + '\x43' + 010 + 0 * 10;
	//printf("%d\n", i);					//81

	//
	//int j = 6 + '\x43' + 010;
	//printf("%d\n", j);					//81

	//int k = 6 + '\x43';
	//printf("%d\n", k);					//73

	//int l = '\x43';
	//printf("%d\n", l);					//67

	//int a = 010;
	//printf("%d", a);					//8

	int i = 'a' + 10 + '\102' + 010 + 0x11;
	printf("%d\n", i);

	int j = 0x11;
	printf("%d", j);
	return 0;
}