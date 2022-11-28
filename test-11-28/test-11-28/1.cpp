//
//#include<iostream>							//控制输出宽度
//#include<iomanip>
//using namespace std;
//int main() {
//	double a[] = { 1.1,11.11,111.111,1111.1111 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		//cout.width(10);	//控制输出宽度
//		//cout << a[i] << endl;
//
//		cout << setw(10) << a[i] << endl;
//	}
//	return 0;
//}


//#include<iostream>						//设置对齐格式
//#include<iomanip>
//using namespace std;
//int main() {
//	//int year[] = { 18.5,19,16,11.5,20 };
//	float year[] = { 18.5,19,16,11.5,20 };
//	string name[] = { "Jack","Zoo","Jammy","Beny","Junny" };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		//cout.width(5);
//		//cout << setiosflags(ios_base::left) << year[i] << setw(10)
//		//	<< resetiosflags(ios_base::left) << name[i] << endl;
//
//		cout.width(5);
//		cout << setiosflags(ios_base::left) <<setprecision(1)<< year[i] << setw(10)
//			<< resetiosflags(ios_base::left) << name[i] << endl;
//
//	}
//	return 0;
//}

//11_5.cpp
#include <fstream>
using namespace std;
struct Date {
	int mon, day, year;
};
int main() {
	Date dt = { 6, 10, 92 };
	ofstream file("date.dat", ios_base::binary);
	file.write(reinterpret_cast<char*>(&dt), sizeof(dt));
	file.close();
	return 0;
}
