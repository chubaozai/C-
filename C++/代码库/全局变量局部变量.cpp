#include<bits/stdc++.h>
using namespace std;

int globalNum = 0;//Ĭ��Ҳ����0 ��������Ҫ�淶 

int sumRange(int range)
{
	//static int ans = 0;
	//int ans = 0;
	for(int i = 1; i <= range; i++)
	{
		//ans += i;
		globalNum += i; 
	}
	//return ans;
	return globalNum;
}

int main()
{
	for(int i = 0;i < 10; i++)
	{
		cout << sumRange(100) << endl;
	}
	
    return 0;
}

