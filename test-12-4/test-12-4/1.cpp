#include<iostream>
using namespace std;

class Student {
public:
	
	Student(long long id = -1, string name = "None", int year = 0, char gender ='M')
		:ID(id),Name(name),Year(year),Gender(gender)
	{
		cout << "���û��๹�캯����\n";
	}
	void set_ID() { cout << "������ID��"; cin >> ID; }
	void set_Name() { cout << "������Name��"; cin >> Name;  }
	void set_Year() { cout << "������Year��"; cin >> Year ; }
	void set_Gender() { cout << "������Gender(M or F)��"; cin >> Gender ; }

	void show1() {
		cout << ID << '\t' << Name << '\t' << Year << '\t' << Gender << '\t';
	}
	~Student() {
		cout << "���û�������������\n";
	}
private:
	long long ID; string Name; int Year; char Gender;
};


class Derived :public Student{
public:
	friend void sort(Derived* arr, int n);
	Derived(){
		cout << "���������๹�캯����\n";
	}
	Derived(int ID, string Name, int Year, char Gender) :Student(ID, Name, Year, Gender){
		cout << "���������๹�캯����\n";
	}
	void set_Subject(){
		cout << "������רҵ��";
		cin >> this->Subject;
	}
	void set_Score(){
		cout << "����������ѧ�Ƶĳɼ���";
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
		cout << "��������������������\n";
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
		cout << "��������������������������������\n";
		cout << "�������" << i + 1 << "λͬѧ����Ϣ��\n";
		arr[i].Student::set_ID();
		arr[i].Student::set_Name();
		arr[i].Student::set_Year();
		arr[i].Student::set_Gender();
		arr[i].set_Subject();
		arr[i].set_Score();
		arr[i].get_Sum();
		arr[i].get_Average();
	}
	cout << "ѧ��\t\t����\t����\t�Ա�\tרҵ\t����1\t����2\t����3\t����4\t�ܷ�\tƽ����\n";
	for (i = 0; i < n; i++) {
		arr[i].show1();
		arr[i].show2();
	}
	sort(arr,n);
	//�����
	cout << "ѧ��\t\t����\t����\t�Ա�\tרҵ\t����1\t����2\t����3\t����4\t�ܷ�\tƽ����\n";
	for (i = 0; i < n; i++) {
		arr[i].show1();
		arr[i].show2();
	}
	return 0;
}