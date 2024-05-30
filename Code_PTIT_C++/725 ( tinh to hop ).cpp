#include<bits/stdc++.h>
using namespace std;

long long mod=1000000007,ds[1005][1005];
int main(){
	int t;
	cin >> t;
	for (int i=0;i<=1000;i++)
	{
		for (int j=0;j<=i;j++)
		{
			if (i==j||j==0) ds[i][j]=1;
			else ds[i][j]=ds[i-1][j-1]+ds[i-1][j];			
			ds[i][j]%=mod;
		}
	}
	while(t--){
		long long n,m;
		cin >> n >> m;
		cout <<ds[n][m] << endl;
	}
	return 0;
}

