#include<bits/stdc++.h>
using namespace std;

void littleBrother(int num)
{
	if(num == 0)//递归退出条件 
	{
		return;
	}
	cout << num << endl;//递归干自己的活 
	littleBrother(num - 1) ;//召唤小弟干活 传递参数改变 
}
int main()
{
	littleBrother(100);
	return 0;
}
