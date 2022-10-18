//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char*));		//64位：各类型指针均为8字节，
//	printf("%d\n", sizeof(short*));		//但是不同指针类型在使用解引用操作符时，访问的空间的小不同
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//
//
//	int a = 0x11223344;						//pa pb pc中均为a的完整地址
//	int* pa = &a;
//	*pa = 0;				//a变为0，访问四个字节
//	printf("%p\n", pa);
//
//	a = 0x11223344;
//	char* pb = &a;
//	*pb = 0;				//只访问一个字节
//	printf("%p\n", pb);
//
//	a = 0x11223344;
//	short* pc = &a;
//	*pc = 0;				//只访问一个两个字节
//	printf("%p\n", pc);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);			//增加四个字节
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);			//增加一个字节
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a[10] = { 0 };
//	/*int* pa = a;*/
//	char* pa = a;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(pa + i) = 1;
//	}
//
//	return 0;
//}