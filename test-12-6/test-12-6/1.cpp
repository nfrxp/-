#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
typedef char BYTEPORT;

void Delay1s(int n);
void printBinary(BYTEPORT a);

int main(void)
{
    int T1, T2;
    //右边6bit依次代表 东西红灯、东西绿灯、东西黄灯、南北红灯、南北绿灯、南北黄灯
    //初始时，东向西为红灯，南向北为绿灯
    BYTEPORT a = 34;//00100010
    cout<<"请输入东西向红灯时间:\n";
    cin >> T1;
    cout<<"请输入东西向绿灯时间:\n";
    cin >> T2;


    cout << "交通情况：\n";
    while (1)
    {
        a = 34;         //00100010
        printBinary(a); //东西红灯,南北绿灯
        Delay1s(T1);    //持续T1秒

        a = a ^ 3;      //00100001 
        printBinary(a); //东西红灯，南北黄灯
        Delay1s(5);     //持续5秒

        a = a ^ 53;     //00010100 
        printBinary(a); //东西绿灯，南北红灯
        Delay1s(T2);    //持续T2秒

        a = a ^ 24;     //00001100
        printBinary(a); //东西黄灯，南北红灯
        Delay1s(5);     //持续5秒

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
