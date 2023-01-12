#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//void test01() {
//	printf("test01\n");
//}
//int main() {
//
//	////指针数组
//	int* b[4];
//
//	//数组指针
//	int c[3][2] = {1,2,3,4,5,6};
//	int(*d)[2] = c;
//
//	//函数指针
//	void (*func)() = &test01;
//	void (*func)(const char*) = &test01;
//
//	//函数指针数组
//	int (*func2[3])();
//	return 0;
//}


//实现计算器的简单运算(先选择计算类型,再输入数据)
#include<stdio.h>

void menu() {
	printf("**********************\n");
	printf("**  1.add    2.sub  **\n");
	printf("**  3.mul    4.div  **\n");
	printf("**       0.exit     **\n");
	printf("**********************\n");
}

float add(float a, float b) {
	return a + b;
}
float sub(float a, float b) {
	return a - b;
}
float mul(float a, float b) {
	return a * b;
}
float div(float a, float b) {
	return a / b;
}
int main() {
	int input = 0;
	float a = 0, b = 0;
	//函数指针数组
	//转移表
	float (*func[5])(float a, float b) = { 0,add,sub,mul,div };

	//指向函数指针数组的指针
	float(*(*ffunc)[5])(float a, float b) = &func;
	do {
		menu();
		scanf("%d", &input);
		printf("请选择计算类型:");
		if (input == 0) {
			printf("退出!\n");
			break;
		}
		else if (input >= 1 && input <= 4) {
			printf("请输入数据:");
			scanf("%f %f", &a, &b);
			//printf("%f/%f=%f\n", a, b, (*func[input])(a, b));
			printf("=%f\n", (*func[input])(a, b));
			break;
		}
		else {
			printf("请重新输入!\n");
		}
		//switch (input) {
		//case 1:
		//	scanf("%f %f", &a, &b);
		//	printf("%f+%f=%f\n", a, b, (*func[input])(a, b));
		//	break;
		//case 2:
		//	scanf("%f %f", &a, &b);
		//	printf(" %f + %f = %f\n", a, b, (*func[input])(a,b));
		//	break;
		//case 3:
		//	scanf("%f %f", &a, &b);
		//	printf("%f*%f=%f\n", a, b, (*func[input])(a,b));
		//	break;
		//case 4:
		//	scanf("%f %f", &a, &b);
		//	printf("%f/%f=%f\n", a, b, (*func[input])(a,b));
		//	break;
		//case 0:
		//	break;
		//default:
		//	printf("输入错误,请重新输入!\n");
		//	break;
		//}
	} while (input);
	return 0;
}