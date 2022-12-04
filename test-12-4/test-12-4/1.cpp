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

	~Student() {
		cout << "调用基类析构函数！\n";
	}
private:
	long long ID; string Name; int Year; char Gender;
};


class Derived :public Student{
public:
	Derived()
	{
		cout << "调用派生类构造函数！\n";
	}
	Derived(int ID, string Name, int Year, char Gender) :Student(ID, Name, Year, Gender)
	{
		cout << "调用派生类构造函数！\n";
	}


	void set_Subject(){
		cout << "请输入四门学科：";
		cin >> this->Subject[0]
			>> this->Subject[1]
			>> this->Subject[2]
			>> this->Subject[3];
	}

	void set_Score(){
		cout << "请输入四门学科的成绩：";
		cin >> this->Score[0]
			>> this->Score[1]
			>> this->Score[2]
			>> this->Score[3];
	}
	void get_Sum(){	Sum = Score[0] + Score[1] + Score[2] + Score[3];}
	void get_Average(){	Average = Sum / 4.0f;	}
	~Derived() {
		cout << "调用派生类析构函数！\n";
	}
private:
	//long long ID; string Name; int Year; char Gender;
	string Subject[4];
	float Score[4];
	float Sum;
	float Average;
};


int main() {
	//Student a;
	//a.set_ID();
	//cout << "请输入学号\t\t姓名\t年龄\t性别\t科目\t分数\n";
	Derived arr[2];
	int i = 0;
	for (i = 0; i < 2; i++) {
		arr[i].Student::set_ID();
		arr[i].Student::set_Name();
		arr[i].Student::set_Year();
		arr[i].Student::set_Gender();
		arr[i].set_Subject();
		arr[i].set_Score();
	}

	return 0;
}