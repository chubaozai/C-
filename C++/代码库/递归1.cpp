#include<bits/stdc++.h>
using namespace std;
void p(int n)
{
	if(n > 0)
	{
		p(n - 1);
		for(int i = 0; i < n; i++)
		{
			cout << n;
		} 
		cout << endl;
	}
}

int main()
{
	p(1000);
	return 0;
}
