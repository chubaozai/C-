#include<bits/stdc++.h>
using namespace std;

void littleBrother(int num)//�ݹ���������ڽ��ݵĶ���- 
{   
	string s1 = "";
	string s2 = "";
	if(num == 0)
	{
		return;
	}
	for(int i = num; i > 1; i--)
	{
		s1 = s1 + "	";
		s2 = s2 + "	";
	}                   
	littleBrother(num - 1);					 
	s1 = s1 + "---------";
	s2 = s2 + "	|";
	cout << s1 << endl;
	cout << s2 << endl;
	
}

int main()
{
	littleBrother(14);
	
	return 0;
}
