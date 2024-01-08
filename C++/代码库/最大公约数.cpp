#include<iostream>
using namespace std;
int main()
{
	int s,b,max,min;
	int lcm;
	cin >> s;
	cin >> b;
	if(b > s)
	{
		max = b;
		min = s;
	}
	else
	{
		max = s;
		min = b;
	}
	
	for(int TM = min; TM >= 1; TM--)
	{
		if((min % TM == 0) && (max % TM == 0))
		{
			cout << "get it " << TM << endl; 
			lcm =(s * b) / TM; 
			cout << "get it " << lcm << endl; 
			
			break;
		}

	} 
	return 0;
} 
