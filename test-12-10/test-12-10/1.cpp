#include<iostream>
using namespace std;

class CPerson
{
public:
	CPerson(char *name, char gender, int year) 		
	{
		Name[20] = *name; Gender = gender; Year = year;
		cout << "����CPerson���캯����" << endl; }
	~CPerson() { cout << "����CPerson����������" << endl; }
private:
	char Name[20];
	char Gender;
	int Year;
};

class CStuden:public CPerson
{
public:
	CStuden(char *name, char gender, int year, long long studentID, float scores)
		:CPerson(name,gender,year),StudentID(studentID),Scores(scores)
	{
		cout << "����CStuden���캯����" << endl;
	}
	~CStuden() { cout << "����CStuden����������" << endl; }
private:
	long long StudentID;
	float Scores;
};

class CTeacher:public CPerson
{
public:
	CTeacher(char *name, char gender, int year, float galary, char curse[20])
		:CPerson(name, gender, year)
	{
		Galary = galary; Curse[20] = curse[20];
	}
	~CTeacher() { cout << "����CTeacher����������" << endl; }
private:
	float Galary;
	char Curse[20];
};

int main() {
	char name[20];
	char gender;
	int year=0;
	long long studentID=0;
	float scores=0;
	cin >> name[10000] >> gender >> year;
	//CPerson a(name, gender, year);
	CStuden S1(name,gender,year,studentID,scores);

	return 0;
}