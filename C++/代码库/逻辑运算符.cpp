#include <iostream>
using namespace std;
int main()
{
	char a = '4';
	int b = 0;
	int c = 94951;
	 
    cout << (a && b) << endl;
	cout << (a || b) << endl;
	
	cout << ((a || b) || c) << endl; // 1
	cout << ((a && b) || c) << endl; // 1
	cout << ((a || b) && c) << endl; // 1
	
	cout << (!a) << endl;
	
	 
   return 0;
}