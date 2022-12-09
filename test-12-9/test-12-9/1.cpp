//#include <iostream>
//#include <iomanip>
//#include <fstream>
//#include <cstdlib>
//using namespace std;
//unsigned short fun(char*);//原型声明
//void SaveRes(void);
//
//unsigned short fun(char* p){
//
//	/***********************program*************************/
//	unsigned short n = 0;
//	while (*p)	{
//		if (*p >= '0' && *p <= '9'){
//			n = n * 16 + *p - '0';
//		}
//		if (*p >= 'a' && *p <= 'f'){
//			n = n * 16 + *p - 'a' + 10;
//		}
//		if (*p >= 'A' && *p <= 'F'){
//			n = n * 16 + *p - 'A' + 10;
//		}
//		p++;
//	}
//
//	return n;
//	/*************************END***************************/
//
//}
//
//int main(void)
//{
//
//	char str[20];
//
//	unsigned short n;
//
//	cout << "Input a Hex string (<= 4)：";
//
//	cin.getline(str, 80);
//
//	n = fun(str);
//
//	cout << "结果为:" << n;
//
//	//SaveRes();
//
//	return 0;
//
//}
//
////以下部分与编程无关，切勿修改！
//
//void SaveRes(void)
//
//{
//
//	fstream inFile, outFile;
//
//	char szBuff[80];
//
//	unsigned short d;
//
//	inFile.open("in0103.dat", ios::in);
//
//	if (!inFile)
//
//	{
//
//		cout << "File open error!";
//
//		exit(1);
//
//	}
//
//	outFile.open("out0103.dat", ios::out);
//
//	if (!outFile)
//
//	{
//
//		cout << "File open error!";
//
//		inFile.close();
//
//		exit(1);
//
//	}
//
//	inFile.getline(szBuff, 80);
//
//	d = fun(szBuff);
//
//	outFile << d;
//
//	inFile.close();
//
//	outFile.close();
//
//}
//


//#include<iostream>
//using namespace std;
//
//void test01() {
//	char a[3][7] = { "ABCD","EFG","HI" };
//	for (int i = 0; i < 3; i++) {
//		cout << a[i] + i << endl;//二维字符数组a[i]+i是地址加上i个字符型的地址,遇到\0时停止输出
//	}
//}
//
//void test02() {
//	int a[] = { 1,2,3 };
//	for (int i = 0; i < 3; i++) {
//		cout << a[i] + i << endl;//一维数组a[i]+i是数值加上i
//	}
//}
//
//void test03() {
//	int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	for (int i = 0; i < 3; i++) {
//		cout << *(a[i] + i) << endl;//二维整型数组a[i]+i是地址加上i个整型得到的是地址
//	}
//}
//int main() {
//
//	test01();
//	//test02();
//	//test03();
//	return 0;
//}


//#include<iostream>
//#include<fstream>
//using namespace std;
//
//void test01(char *p,char *q) {
//	int i, j=0,k=0;
//	for (i = 0; p[i] != '\0'; i++) {
//		if (p[i] >= '0' && p[i] <= '9') {
//			q[j] = p[i];
//			j++;
//		}
//
//		if ((p[i] >= 'A' && p[i] <= 'Z') || (p[i] >= 'a' && p[i] <= 'z')) {
//			p[k] = p[i];
//			k++;
//		}
//	}
//	p[k] = '\0';
//	q[j] = '\0';
//
//	cout << p << "\n" << q << endl;
//
//	//输出到文件
//	ofstream ofs;
//	ofs.open("./out.dat", ios::out);
//	ofs << p << "\n" << q << endl;
//}
//
//int test02(int a) {
//	int i = 0;
//	int t,d;
//	t = a % 10;
//	while (a>0) {
//		d = a % 10;
//		if (d > t) {
//			return 0;
//		}
//		t = d;
//		a /= 10;
//	}
//	return 1;
//}
//int main() {
//	char p[40] = "Hello! Python123.io pass345!";
//	char q[40];
//	//test01(p,q);
//
//	int a=13479;
//	
//	if (test02(a) == 1) {
//		cout << "是升序数！\n";
//	}
//	return 0;
//}


#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <cmath>

using namespace std;

void fun(double*, int);

void fun(double* p, int n)
{
    /***********************program*************************/

    int i, j;
    double temp;
    for (i = 0; i < n-1; i++) {
        for (j = i + 1; j < n; j++) {
            if ((int)fabs(p[i]) / 10 % 1000 < (int)fabs(p[j]) / 10 % 1000) {
                temp = p[i]; p[i] = p[j]; p[j] = temp;
            }
        }
    }
    /*************************END***************************/
}

int main(void)
{
    double a[10] = { -27888.52, 22177.83, 12496.14, -867.17, 29506.73, -18027.43, 32440.25, 91876.24,-18942.8, 10262.27 };
    int i;
    fun(a, 10);

    cout << "排序结果：";
    cout << fixed << setprecision(2);
    for (i = 0; i < 10; i++) {
        cout << setw(10) << a[i];
    }
    cout << endl;
    
    return 0;

}
