//#include<iostream>
//#include<fstream>
//using namespace std;
//int main() {
//    int i = 0;
//    char b[15];
//    char str[15];
//    //打开f1文本文件
//    fstream f1;
//    f1.open("./f1.txt", ios::in);
//    if (!f1.is_open()) {
//        cout << "文本文件打开失败！\n";
//        exit;
//    }
//
//    //输入密钥，加密
//    cout << "请输入密钥：";
//    cin.getline(b, 15);
//    
//    //打开f2二进制文件,并存储加密后的信息
//    ofstream f2;
//    f2.open("./f2.dat", ios::binary);
//    if (!f2.is_open()) {
//        cout << "文本文件打开失败！\n";
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
//    cout << "完成加密并存储！\n";
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
	//打开f2文件
	ifstream ifs;
	ifs.open("./f2.dat", ios::in);
	if (!ifs.is_open()) {
		cout << "f2文件打开失败！\n";
		exit;
	}

	//打开f1文件
	ofstream ofs;
	ofs.open("./f1.txt", ios::out);
	if (!ofs.is_open()) {
		cout << "f1文件打开失败！\n";
		exit;
	}

	//输入密钥，解密
    cout << "请输入密钥：";
    cin.getline(b, 15);
	ifs.getline(str, 15);
	for (i = 0; str[i] != '\0'; i++) {
			str[i] = str[i] ^ b[i];
	}
	//将解密后的信息输入到f1
	ofs << str;
	cout << "完成解密并存储！\n";

	ifs.close();
	ofs.close();
	return 0;
}