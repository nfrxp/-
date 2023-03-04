#define _CRT_SECURE_NO_WARNINGS 1


//#include <iostream>
//#include <fstream>
//#include <cstdlib>
//using namespace std;
//int main(int argc, char* argv[]) {
//    fstream inFile, outFile;
//    char ch;
//    if (argc != 3) {
//        cout << "Command format error!\n";
//        exit(1);
//    }
//    inFile.open(argv[1], ios::in);
//    if (!inFile) {
//        cout << "cannot  open  the  source file \n";
//        exit(2);
//    }
//    outFile.open(argv[2], ios::out);
//    if (!outFile) {
//        cout << "cannot  open  the  destination file \n";
//        inFile.close();
//        exit(3);
//    }
//    while ((ch = inFile.get()) != EOF) {
//        outFile.put(ch);
//    }
//    inFile.close();
//    outFile.close();
//    cout << "Copyed.";
//    system("pause");
//    return 0;
//}

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int main(void) {
    fstream file;
    char msg[] = "This is a test message", buf[20];
    file.open("Test.txt", ios::out | ios::in | ios::trunc | ios::binary);
    if (!file) {
        cout << "File open failed" << endl;
        exit(1);
    }
    file.write(msg, sizeof(msg));
    file.seekp(0, ios::beg);
    file.read(buf, 20);
    cout << file.gcount() << endl;
    cout << buf << endl;
    file.close();

    return 0;
}

