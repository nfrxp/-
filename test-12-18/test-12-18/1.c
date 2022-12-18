//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char* des, char* source) {
//	assert(des != NULL);
//	assert(source != NULL);
//	char* ret = des;
//	while (*des++ = *source++) {}
//	return ret;
//}
//int main() {
//	char a[5] = "abcd";
//	char b[] = "efgh";
//	printf("%s", my_strcpy(a, b));
//	return 0;
//}


#include<stdio.h>
unsigned int my_strlen(const char *a){
	char* b = a;
	while (*b++) {}
	return (b - a - 1);
}
int main() {
	char a[] = "abcde";
	printf("%d", my_strlen(a));
	return 0;
}