#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//ģ��ʵ��qsort����,����ð������ķ�ʽ

//����Ƚ�struct����
struct Str {
	char name[10];
	int age;
};

//����struct���͵��������Ƚ�
int compare(void * e1, void * e2) {
	return ((struct Str*)e1)->age - ((struct Str*)e2)->age;//����
}

//swap����
void swap(char* a1, char* a2, size_t size) {
	int i = 0;
	char temp;
	for (i = 0; i < size; i++) {
		temp = *a1;
		*a1 = *a2;
		*a2 = temp;
		a1++;
		a2++;
	}
}

void my_qsort(void* name, size_t num, size_t size, int compare(void* e1, void* e2)) {
	int i = 0,j = 0;
	for (i = 0; i < num - 1; i++) {
		for (j = 0; j < num - i - 1; j++) {
			//if (compare((char*)name+j*size,(char*)name+(j+1)*size) <= 0) {}
			//else if (compare() > 0) { swap(void* e1, void* e1); }
			//��
			if (compare((char*)name + j * size, (char*)name + (j + 1) * size) > 0) {
				swap((char*)name + j * size, (char*)name + (j + 1) * size,size);
			}
		}
	}
}


int main() {
	struct Str test[3] = { {"xiaoming",22},{"xiaohong",18},{"xiaoliang",19} };
	my_qsort(test, 3, sizeof(test[0]), compare);
	for (int i = 0; i < 3; i++) {
		printf("%d\n", test[i].age);
	}
	return 0;
}