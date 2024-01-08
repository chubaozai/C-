#include<bits/stdc++.h>
using namespace std;
int main() 
{
	cout << "int 类型所占内存空间为： " << sizeof(int) << endl;
	int intBitNum = sizeof(int) * 8;
	long long ans = 1;
	//int ans = 1;
	for(int i=0; i<intBitNum; i++)
	{
		ans*=2; 
	}
	cout << "存储的数据范围是从 -" << ans / 2 << " 到 " << (ans / 2) - 1 << endl;
	 
	return 0;
}