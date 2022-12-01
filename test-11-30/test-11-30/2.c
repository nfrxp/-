//#include<stdio.h>
//
//void Print(int* arr,int n) {
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		printf("%d ", *(arr + i));
//	}
//}
//int main() {
//	int arr[6] = { 1,2,3,4,5,6 };
//	Print(arr,6);
//
//	return 0;
//}

#include <stdio.h>
#include <string.h>

int main(){
	int i;
	char s[10000];
	gets(s);
	for (i = strlen(s) - 1; i >= 0; i--)	{
		putchar(s[i]);
	}
	return 0;

}