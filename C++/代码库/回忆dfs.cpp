#include <bits/stdc++.h> 
using namespace std;

int ans[10086],vis[10086],sum;
 
void dfs(int n)
{
	 if(n == 10)
	 {
	 	sum++;
	 	for(int i = 0; i < 10; i++)
	 	{
	 		cout << ans[i] << " ";
	 	}
	 	cout << endl;
	 	return;
	 }
	 for(int i = 0; i < 10; i++)
	 {
	 	if(vis[i] == 0)
	 	{
	 		ans[n] = i;
	 		vis[i] = 1;
	 		dfs(n + 1);
	 		vis[i] = 0;
	 	}
	 }
} 
 

int main()
{
	dfs(0);
	cout << sum;
    return 0;
}






