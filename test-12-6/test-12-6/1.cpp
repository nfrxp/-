#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
typedef char BYTEPORT;

void Delay1s(int n);
void printBinary(BYTEPORT a);

int main(void)
{
    int T1, T2;
    //�ұ�6bit���δ��� ������ơ������̵ơ������Ƶơ��ϱ���ơ��ϱ��̵ơ��ϱ��Ƶ�
    //��ʼʱ��������Ϊ��ƣ�����Ϊ�̵�
    BYTEPORT a = 34;//00100010
    cout<<"�����붫������ʱ��:\n";
    cin >> T1;
    cout<<"�����붫�����̵�ʱ��:\n";
    cin >> T2;


    cout << "��ͨ�����\n";
    while (1)
    {
        a = 34;         //00100010
        printBinary(a); //�������,�ϱ��̵�
        Delay1s(T1);    //����T1��

        a = a ^ 3;      //00100001 
        printBinary(a); //������ƣ��ϱ��Ƶ�
        Delay1s(5);     //����5��

        a = a ^ 53;     //00010100 
        printBinary(a); //�����̵ƣ��ϱ����
        Delay1s(T2);    //����T2��

        a = a ^ 24;     //00001100
        printBinary(a); //�����Ƶƣ��ϱ����
        Delay1s(5);     //����5��

    }
    return 0;
}

void Delay1s(int n)
{
    clock_t start;
    int i;

    for (i = 0; i < n; i++)
    {
        start = clock();
        while ((clock() - start) < CLK_TCK)
        {
            ;
        }
    }
}

void printBinary(BYTEPORT a)
{
    int t = a, num[8], i;
    int temp;
    for (i = 0; i < 8; i++)
    {
        num[i] = t % 2;
        t = t / 2;
    }
    for (i = 0; i < 4; i++)
    {
        temp = num[i];
        num[i] = num[7 - i];
        num[7 - i] = temp;
    }
    for (i = 0; i < 8; i++)
    {
        cout << num[i];
    }
    cout << "\n";
}
