//#include<iostream>
//#include<fstream>
//using namespace std;
//int main() {
//    int i = 0;
//    char b[15];
//    char str[15];
//    //��f1�ı��ļ�
//    fstream f1;
//    f1.open("./f1.txt", ios::in);
//    if (!f1.is_open()) {
//        cout << "�ı��ļ���ʧ�ܣ�\n";
//        exit;
//    }
//
//    //������Կ������
//    cout << "��������Կ��";
//    cin.getline(b, 15);
//    
//    //��f2�������ļ�,���洢���ܺ����Ϣ
//    ofstream f2;
//    f2.open("./f2.dat", ios::binary);
//    if (!f2.is_open()) {
//        cout << "�ı��ļ���ʧ�ܣ�\n";
//        exit;
//    }
//    while (!f1.eof()) {
//        f1.getline(str, sizeof(str));
//        for (i = 0; str[i] != '\0'; i++) {
//            str[i] = str[i] ^ b[i];
//        }
//
//    }
//    f2.write(str, sizeof(str));
//    cout << "��ɼ��ܲ��洢��\n";
//    f1.close();
//    f2.close();
//    return 0;
//}


#include<iostream>
#include<fstream>
using namespace std;
int main() {
	char str[15];
	char b[15];
	int i = 0;
	//��f2�ļ�
	ifstream ifs;
	ifs.open("./f2.dat", ios::in);
	if (!ifs.is_open()) {
		cout << "f2�ļ���ʧ�ܣ�\n";
		exit;
	}

	//��f1�ļ�
	ofstream ofs;
	ofs.open("./f1.txt", ios::out);
	if (!ofs.is_open()) {
		cout << "f1�ļ���ʧ�ܣ�\n";
		exit;
	}

	//������Կ������
    cout << "��������Կ��";
    cin.getline(b, 15);
	ifs.getline(str, 15);
	for (i = 0; str[i] != '\0'; i++) {
			str[i] = str[i] ^ b[i];
	}
	//�����ܺ����Ϣ���뵽f1
	ofs << str;
	cout << "��ɽ��ܲ��洢��\n";

	ifs.close();
	ofs.close();
	return 0;
}