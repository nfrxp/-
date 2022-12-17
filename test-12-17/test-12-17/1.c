//#include<stdio.h>
//#include<assert.h>
//unsigned int my_strlen(const char* arr) {
//	unsigned int a = 0;
//	assert(arr!=NULL);
//	while (1) {
//		if (*arr == '\0')
//			return a;
//		a++;
//		arr++;
//	}
//
//}
//int main() {
//	char arr[] = "abcde";
//	int a = my_strlen(arr);
//	printf("%d", a);
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void func( int* arr,int n) {
	int i = 0, j = 0, temp = 0;
	for (i = 0; i < n/2; i++) {
		if (arr[i] % 2 == 0) {
			for (j = n - 1; j >= n/2; j--) {
				if (arr[j] % 2 != 0) {
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
	}

}
int main() {
	int arr[6];
	int i;
	for ( i = 0; i < 6; i++) {
		scanf("%d", &arr[i]);
	}
	func(arr,6);
	for (i = 0; i < 6; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}