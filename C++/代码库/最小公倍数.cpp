#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
	int max,min;
	if(a > b)
	{
		max = a;
		
		min = b;
	}
	else
	{
		max = b;
		min = a;
	}
	int i;
	for(i = 1; ((( i * max ) % min ) != 0); )
	{
		i++;
	}
	cout << "get it " << i * max << endl; 
	return i * max;
}

int main()
{
	int a,b,max,min;
	cin >> a;
	cin >> b;
	
	gcd(a,b);
	
	return 0;
} 
