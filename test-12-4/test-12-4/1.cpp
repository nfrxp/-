#include<iostream>
using namespace std;

class Student {
public:
	
	Student(long long id = -1, string name = "None", int year = 0, char gender ='M')
		:ID(id),Name(name),Year(year),Gender(gender)
	{
		cout << "调用基类构造函数！\n";
	}
	void set_ID() { cout << "请输入ID："; cin >> ID; }
	void set_Name() { cout << "请输入Name："; cin >> Name;  }
	void set_Year() { cout << "请输入Year："; cin >> Year ; }
	void set_Gender() { cout << "请输入Gender(M or F)："; cin >> Gender ; }

	void show1() {
		cout << ID << '\t' << Name << '\t' << Year << '\t' << Gender << '\t';
	}
	~Student() {
		cout << "调用基类析构函数！\n";
	}
private:
	long long ID; string Name; int Year; char Gender;
};


class Derived :public Student{
public:
	friend void sort(Derived* arr, int n);
	Derived(){
		cout << "调用派生类构造函数！\n";
	}
	Derived(int ID, string Name, int Year, char Gender) :Student(ID, Name, Year, Gender){
		cout << "调用派生类构造函数！\n";
	}
	void set_Subject(){
		cout << "请输入专业：";
		cin >> this->Subject;
	}
	void set_Score(){
		cout << "请输入四门学科的成绩：";
		cin >> this->Score[0] >> this->Score[1] >> this->Score[2] >> this->Score[3];
	}
	void get_Sum(){	Sum = Score[0] + Score[1] + Score[2] + Score[3];}
	void get_Average(){	Average = Sum / 4.0f;	}
	void show2() {
		cout << Subject << "\t" << Score[0]
			<< "\t" << Score[1] << "\t" << Score[2]
			<< "\t" << Score[3] << "\t" << Sum
			<< "\t" << Average << "\n";
	}

	~Derived() {
		cout << "调用派生类析构函数！\n";
	}
private:
	
	string Subject;
	float Score[4];
	float Sum;
	float Average;
};


void sort(Derived* arr,int n) {
	Derived temp;
	int i, j;
	for ( i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (arr[i].Sum < arr[j].Sum) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

}

int main() {
	const int n = 10;
	Derived arr[n];
	int i = 0;
	for (i = 0; i < n; i++) {
		cout << "————————————————\n";
		cout << "请输入第" << i + 1 << "位同学的信息：\n";
		arr[i].Student::set_ID();
		arr[i].Student::set_Name();
		arr[i].Student::set_Year();
		arr[i].Student::set_Gender();
		arr[i].set_Subject();
		arr[i].set_Score();
		arr[i].get_Sum();
		arr[i].get_Average();
	}
	cout << "学号\t\t姓名\t年龄\t性别\t专业\t分数1\t分数2\t分数3\t分数4\t总分\t平均分\n";
	for (i = 0; i < n; i++) {
		arr[i].show1();
		arr[i].show2();
	}
	sort(arr,n);
	//排序后
	cout << "学号\t\t姓名\t年龄\t性别\t专业\t分数1\t分数2\t分数3\t分数4\t总分\t平均分\n";
	for (i = 0; i < n; i++) {
		arr[i].show1();
		arr[i].show2();
	}
	return 0;
}