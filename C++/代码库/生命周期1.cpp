#include <iostream>
using namespace std;

int globalVar = 20;


void myFunction()
{
    int x = 10; // �ֲ�����x���ں����ڴ���
    cout << "�����ֲ������ڴ�! " << x << endl;
    cout << "��������ȫ�ֱ����ڴ�! " << ++globalVar << endl;
} // �����������ֲ�����x����

int main()
{
    myFunction(); // ���ú���
    cout << "����������ȫ�ֱ����ڴ�! " << ++globalVar << endl;
    //cout << x << endl;
    // �ڴ˴��޷����ʾֲ�����x
    return 0;
}

