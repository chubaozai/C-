#include<bits/stdc++.h>
using namespace std;
int main() 
{
	cout << "int ������ռ�ڴ�ռ�Ϊ�� " << sizeof(int) << endl;
	int intBitNum = sizeof(int) * 8;
	long long ans = 1;
	//int ans = 1;
	for(int i=0; i<intBitNum; i++)
	{
		ans*=2; 
	}
	cout << "�洢�����ݷ�Χ�Ǵ� -" << ans / 2 << " �� " << (ans / 2) - 1 << endl;
	 
	return 0;
}
