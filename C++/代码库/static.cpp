#include<bits/stdc++.h>
using namespace std;
int niam(int num)
{
	static int ans = 0;//初始化只会执行一次 
	//int ans = 0; 
	ans += num;
	return ans;
}
int main()
{
	int num = 100;
	int c;
	
	for(int i=10; i>0; i--)
	{
		c = niam(num);
		cout << "c = ";	
		cout <<	c  << endl;
	}
	
	return 0;
}