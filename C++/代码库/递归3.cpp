#include<bits/stdc++.h>
using namespace std;

void littleBrother(int num)//�ݹ���������ڽ��ݵĶ���- 
{                               					 
	if(num == 0)
	{
		return;
	} 
	littleBrother(num - 1);
	for(int i = 0; i < num; i++)
	{
		cout << "o ";
	}
	cout << endl;
}

int main()
{
	littleBrother(8);
	return 0;
}
