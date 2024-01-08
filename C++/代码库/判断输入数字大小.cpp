/*
	我希望我能在黑色的窗口里一直输入一个数，
	请你帮我判断我输入的这个数是否是100
	若是100则程序退出 
	若不是100则帮我判断我输入的这个数是大于100
	还是小于100 程序不退出
*/

#include<iostream>
using namespace std;
int main()
{	
	int num; 
	while(true)
	{
		cout << "请输入数字" << endl; 
		cin >> num;
		if(num==100)
		{
			cout << "100了" << endl; 
			break;
		}
		if (num > 100)
		{
			cout << "大于100！！！" << endl << endl; 
			continue;
		}
		else
		{
			cout << "小于100！！！" << endl << endl; 
			continue;
		}
		cout << "我永不会执行" << endl << endl; 
	}
	
	
	return 0;
}










