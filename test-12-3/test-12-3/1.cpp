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
//void get_student(Student* a, int n);		//����ѧ����Ϣ
//void show_list(Student* a, int n);			//ѧ����Ϣ�б�
//void sort(Student* a, int n);				//���ܷ�����
//
//int main() {
//	int n;
//	cout << "������ѧ��������";
//	cin >> n;
//	Student* a;
//	a = (Student*)malloc(n * sizeof(Student));				//��̬����
//	get_student(a, n);		//����ѧ����Ϣ
//	cout << "����ǰ��\n";
//	show_list(a, n);		//ѧ����Ϣ�б�
//	sort(a, n);				//���ܷ�����
//	cout << "\n�����\n";
//	show_list(a, n);		//ѧ����Ϣ�б�
//	return 0;
//}
//
//void get_student(Student* a, int n) {
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++) {
//		cout << "�������" << i + 1 << "λͬѧ����Ϣ��\n";
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
//	cout << "����\tѧ��\t\t�ܷ�\tƽ����\t�ɼ�1\t�ɼ�2\t�ɼ�3\t�ɼ�4\n";
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
	cout << "��СֵΪ��" << min << endl
		<< "����Ϊ��" << row << endl
		<< "����Ϊ��" << col << endl;
}

int main() {
	srand((unsigned int)time(NULL));
	int m=0, n=0;
	cout << "������m��n��";
	cin >> m >> n;
	float **arr;
	arr = (float**)malloc(m * sizeof(float*));
	for (int i = 0; i < n; i++) {
		arr[i] = (float*)malloc(n * sizeof(float));
	}
	set_arr(arr, m, n);			//�������������ֵ
	show_arr(arr, m, n);		//�����ά����
	find_min(arr, m, n);		//����Сֵ��������
	return 0;
}