#include<bits/stdc++.h>
using namespace std;

void littleBrother(int num)
{
	if(num == 0)//�ݹ��˳����� 
	{
		return;
	}
	cout << num << endl;//�ݹ���Լ��Ļ� 
	littleBrother(num - 1) ;//�ٻ�С�ܸɻ� ���ݲ����ı� 
}
int main()
{
	littleBrother(100);
	return 0;
}
