#include<stdio.h>
#include<assert.h>
unsigned int my_strlen(const char* arr) {
	unsigned int a = 0;
	assert(arr!=NULL);
	while (1) {
		if (*arr == '\0')
			return a;
		a++;
		arr++;
	}

}
int main() {
	char arr[] = "abcde";
	int a = my_strlen(arr);
	printf("%d", a);
	return 0;
}