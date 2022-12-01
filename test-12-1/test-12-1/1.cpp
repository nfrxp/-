//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <fstream>
//#include <conio.h>
//using namespace std;
//const int n = 40;
//
//int line_out(ifstream& f)  //从文件f中读一行字符并显示，返回此行字符的个数
//{
//    char ch;
//    int len = 0;
//    while (f.get(ch) && ch != '\n')
//    {
//        cout << ch;
//        len++;
//    }
//    return len;
//}
//
//int main()
//{
//    char filename1[15], filename2[15];
//    int length;
//    cout << "Input the file names\n";
//    cin >> filename1 >> filename2;
//    ifstream f1(filename1), f2(filename2);
//    while (!f1.eof() && !f2.eof())
//    {
//
//        length = line_out(f1);
//        if (length < n)
//            for (int i = 0; i < n - length; i++)
//                cout << ' ';
//        line_out(f2);
//        cout << endl;
//    }
//    while (!f1.eof())
//    {
//        line_out(f1);
//        cout << endl;
//    }
//    while (!f2.eof())
//    {
//        for (int i = 0; i < 40; i++)
//            cout << ' ';
//            line_out(f2);
//        cout << endl;
//    }
//    _getch();
//}

//
//#include<iostream>
//#include<fstream>
//using namespace std;
//int main() {
//	ofstream A;
//	A.open("./name1.txt", ios::out | ios::trunc);
//	if (!A.is_open()) {
//		cout << "File A open failed" << endl;
//		exit;
//	}
//	A << "I am Lucy!\n"
//		<< "I have a dream!\n"
//		<< "I want to become a dancer!\n";
//	A.close();
//	cout << "文件name1.txt编辑并存储成功！\n";
//
//	ofstream B;
//	B.open("./name2.txt", ios::out | ios::trunc);
//	if (!B.is_open()) {
//		cout << "Fail B open failed!" << endl;
//		exit;
//	}
//	B << "I am Jack!\n"
//		<< "I have a dream!\n"
//		<< "I want to be a soccer!\n";
//	B.close();
//	cout << "文件name2.txt编辑并存储成功！\n";
//	return 0;
//}

//#include <iostream>
//using namespace std;
//template<class T>
//void swapa(T &x,T &y)  //辅助函数：交换x和y的值
//{
//	T temp;
//	temp = x;
//	x = y;
//	y = temp;
//}
//
//template <class T>
//void bubblesort(T a[], int n)
//{
//	int i, j;
//	int index;
//	i = n - 1;
//	while (i > 0)
//	{
//		index = 0;
//		for (j = 0; j < i; j++)
//			if (a[j + 1] > a[j])
//			{
//				swapa(a[j],a[j+1]);
//				index = j;
//			}
//		i = index;
//	}
//}
//
//void main()
//{
//	int i;
//	int data[] = { 1,4,5,2,3,12,14,13,8,19,36,11,9,15,7,34,23,6,10,21 };
//	cout << "before sort:" << endl;
//	for (i = 0; i < 20; i++)
//		cout << data[i] << ' ';
//	cout << endl;
//	bubblesort(data, 20);
//	cout << "after sorted:" << endl;
//	for (i = 0; i < 20; i++)
//		cout << data[i] << ' ';
//	cout << endl;
//}


#include<iostream>
using namespace std;
struct student
{
	char name[20];
	long long ID;
	float scores[4];
};
void display(student& a) {
	cout <<"姓名：" <<a.name 
		<< "\n学号："<<a.ID
		<< "\n成绩1："<<a.scores[0]
		<< "\n成绩2：" << a.scores[1]
		<< "\n成绩3：" << a.scores[2]
		<< "\n成绩4：" << a.scores[3]
		<< endl;
}
int main() {
	int n = 0;
	cin >> n;
	struct student* a= new student[n];

	*a = { "小明",202221217219,40,40,40,40 };
	*(a + 1) = { "小红",202221217219,40,40,40,40 };
	display(*(a + 1));
	return 0;
}