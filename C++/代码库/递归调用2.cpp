#include<bits/stdc++.h>
using namespace std;

void littleBrother(int num,char charactor)//�ݹ����26��Ӣ���ַ�ĸ 
{
	if(num == 27)
	{
		return;
	}
	cout << "��ĸ�ǣ� " << charactor << endl;
	littleBrother(num + 1,charactor + 1) ;
}

int main()
{
	littleBrother(1,'A');
	return 0;
}
