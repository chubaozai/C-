#include<iostream>
using namespace std;
int main()
{
	int num=10;
	for(;;)
	{
		if (num<=5){
			break;
		}
		cout << num << endl;
		num--;
	}
	return 0; 
} 