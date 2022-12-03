//#include<iostream>
//using namespace std;
//
//struct Student
//{
//	char name[20];
//	long long ID;
//	float scores[4];
//	float sum;
//	float average;
//};
//
//void get_student(Student* a, int n);		//输入学生信息
//void show_list(Student* a, int n);			//学生信息列表
//void sort(Student* a, int n);				//按总分排序
//
//int main() {
//	int n;
//	cout << "请输入学生数量：";
//	cin >> n;
//	Student* a;
//	a = (Student*)malloc(n * sizeof(Student));				//动态分配
//	get_student(a, n);		//输入学生信息
//	cout << "排序前：\n";
//	show_list(a, n);		//学生信息列表
//	sort(a, n);				//按总分排序
//	cout << "\n排序后：\n";
//	show_list(a, n);		//学生信息列表
//	return 0;
//}
//
//void get_student(Student* a, int n) {
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++) {
//		cout << "请输入第" << i + 1 << "位同学的信息：\n";
//		cin >> (a + i)->name
//			>> (a + i)->ID
//			>> (a + i)->scores[0]
//			>> (a + i)->scores[1]
//			>> (a + i)->scores[2]
//			>> (a + i)->scores[3];
//		(a + i)->sum = (a + i)->scores[0]
//			+ (a + i)->scores[1]
//			+ (a + i)->scores[2]
//			+ (a + i)->scores[3];
//		(a + i)->average = (a + i)->sum / 4.0f;
//	}
//}
//
//void show_list(Student* a, int n) {
//	int i = 0;
//	int j = 0;
//	cout << "姓名\t学号\t\t总分\t平均分\t成绩1\t成绩2\t成绩3\t成绩4\n";
//	for (i = 0; i < n; i++) {
//		cout << (a + i)->name << "\t"
//			<< (a + i)->ID << "\t"
//			<< (a + i)->sum << "\t"
//			<< (a + i)->average << "\t";
//		for (j = 0; j < 4; j++) {
//			cout << (a + i)->scores[j] << "\t";
//		}
//		cout << endl;
//	}
//
//}
//
//void sort(Student* a, int n) {
//	int i = 0;
//	int j = 0;
//	Student temp;
//	for (i = 0; i < n; i++) {
//		for (j = i + 1; j < n; j++) {
//			if (a[i].sum < a[j].sum) {
//				temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//	}
//}


#include<iostream>
using namespace std;

void set_arr(float **arr, int m, int n) {
	int i, j;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			arr[i][j] = rand();
		}
	}
}

void show_arr(float** arr, int m, int n) {
	int i, j;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void find_min(float** arr, int m, int n) {
	float min;
	int  row,col;
	int i, j;
	min = arr[0][0];
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			if (min > arr[i][j]) {
				min = arr[i][j];
				row= i;
				col= j;
			}
		}
	}
	cout << "最小值为：" << min << endl
		<< "行数为：" << row << endl
		<< "列数为：" << col << endl;
}

int main() {
	srand((unsigned int)time(NULL));
	int m=0, n=0;
	cout << "请输入m和n：";
	cin >> m >> n;
	float **arr;
	arr = (float**)malloc(m * sizeof(float*));
	for (int i = 0; i < n; i++) {
		arr[i] = (float*)malloc(n * sizeof(float));
	}
	set_arr(arr, m, n);			//利用随机函数赋值
	show_arr(arr, m, n);		//输出二维数组
	find_min(arr, m, n);		//求最小值及其坐标
	return 0;
}