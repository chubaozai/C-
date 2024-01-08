#include<bits/stdc++.h>
using namespace std;
int main()
{
	int nums[] = {50,12,23,45,59,18,72,89,190,69,55,66};	
	
	for(int i = 0; i < sizeof(nums)/sizeof(nums[0]); i++)
	{
		for(int j = 0; j < i; j++)
		{
			if(nums[i] < nums[j])
			{
				swap(nums[i],nums[j]);
			}
		}
	}
	
	
	for(int i = 0; i < sizeof(nums)/sizeof(nums[0]); i++)
	{
		cout << nums[i] << " ";
	}
	
	
	return 0;
}