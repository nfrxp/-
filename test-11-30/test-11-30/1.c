//#include<stdio.h>
//
////void test01() {
////	int a = 10;
////	printf("%d", a++);
////}
//
////void test02(int b) {
////	printf("%d\n", b);
////}
//
//
//
//void test04(int a[]) {
//	printf("%zd\n", sizeof(a));		//sizeof()�����޷�����������%zd���
//}
//void test05(char b[]) {
//	printf("%d\n", sizeof(b));
//}
//void test03() {
//	int a[10]={0};
//	char b[10]={0};
//	printf("%d\n",sizeof(a));
//	printf("%d\n",sizeof(b));
//	test04(a);
//	test05(b);
//
//}
//
//int main() {
//	//test01();
//	//int a = 10;
//	//test02(a++);
//	//test02(++a);
//
//	test03();
//	return 0;
//}


//#include<stdio.h>
//
//void test01() {
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	//printf("a= %d\nb= %d\nc= %d\nd= %d\n", a, b, c, d);
//	i = a++ || ++b || d++;
//	printf("a= %d\nb= %d\nc= %d\nd= %d\n", a, b, c, d);
//
//}
//
//void test02() {
//	int a = -3;
//	int b = 6;
//	int c = 0;
//	c = (a > b ? a : b);
//	printf("%d\n", c);
//	//�ȼ�
//	c = (a > b) ? a : b;
//	printf("%d\n", c);
//}
//
//void test03() {
//	int a[] = { 1,2,3,4,6 };
//	printf("%d\n", a[4]);//[]Ϊ��������a��4Ϊ������
//	
//}
//
//int main() {
//	test01();	//�߼����ʽ
//	test02();	//��������������Ŀ��������
//	test03();
//	return 0;
//}


//#include<stdio.h>			//�ṹ��		�һ������зֺ�
//
//struct A {
//	char name[20];
//	int year;
//	float high;
//};
//
////void display(struct A a)
////{    
////	printf("������%s\n���䣺%d\n��ߣ�%f\n", a.name, a.year, a.high);
////}
//
//void display(struct A* a) {
//	printf("������%s\n���䣺%d\n��ߣ�%f\n", a->name, a->year, a->high);
//}
//int main() {
//	struct A a={"С��",18,170.2 };
//	//printf("������%s\n���䣺%d\n��ߣ�%f\n", a.name, a.year, a.high);
//	//display(a);
//	display(&a);		//ֱ�Ӵ��ṹ������������Ĳ��ǵ�ַ
//	return 0;
//}


#include<stdio.h>		//��������char short
int main() {
	char c = 1;
	printf("%d\n", sizeof(c));
	printf("%u\n", sizeof(+c));		//��������
	printf("%u\n", sizeof(-c));

	return 0;
}