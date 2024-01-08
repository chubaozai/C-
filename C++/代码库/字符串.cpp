#include<bits/stdc++.h>
using namespace std;
int main()
{
    //char a[5] = {'a', 'b', 'c', 'd', 'e'};
    //char b[3] = {'1', '2', '3'};
    string a = "abcde";
    string b = "123";
    
    for(int i = 0; i < a.length(); i++)
	{
		for(int j = 0; j < b.length(); j++)
		{
			cout << a[i] << " " << b[j] << endl;
		} 
	} 
    
    return 0;
}

