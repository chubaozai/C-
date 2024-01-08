#include<bits/stdc++.h> 
using namespace std;

bool cmp(int a,int b)
{
	return a < b;
}

int main() {
    vector<int> numbers;
    numbers.push_back(5); 
    numbers.push_back(2); 
    numbers.push_back(8); 
    numbers.push_back(1); 
    numbers.push_back(9); 

    sort(numbers.begin(), numbers.end(), cmp);

    cout << "排序后的结果：";
    for (int num=0; num<numbers.size(); num++) 
	{
        cout << numbers[num] << " ";
    }
    cout << endl;

    return 0;
}
