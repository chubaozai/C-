#include<bits/stdc++.h>
using namespace std;
int main() {

	int dianChi[4];

	dianChi[0] = 101;
	dianChi[1] = 99;
	dianChi[2] = 85;
	dianChi[3] = 825;


	cout << *dianChi << endl;
	cout << *(dianChi + 1) << endl;
	cout << *(dianChi + 2) << endl;
	cout << dianChi[3] << endl;

	

	cout << "--------------------------------" << endl;


	int score2[10] = { 100, 90,80,70,60,50,40,30,20,10 };																													
	//int score2 = 10;
	
	for (int i = 0; i < 10; i++)
	{
		cout << score2[i] << endl;
	}
	
	cout << "--------------------------------" << endl;
	
	int score3[] = { 100,90,80,70,60,50,40,30,20,10,1,2,2,4,5 };

	for (int i = 0; i < 15; i++)
	{
		cout << score3[i] << endl;
	}




	return 0;
}

