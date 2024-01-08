#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout << "请输入两个数，程序会帮你计算a的b次方" << endl; 
	int a,b;
	long long ans = 1;
	cin >> a >> b;
	for(int i=0; i<b; i++)
	{
		ans *= a;
	}
	cout << "结果是：" << endl;
	cout << ans << endl;
	return 0;
}