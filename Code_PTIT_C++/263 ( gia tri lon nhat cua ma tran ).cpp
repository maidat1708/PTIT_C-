#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;cin>>n;
	int thuan[402][402]={0},nghich[402][402]={0},a[n+1][n+1];
	for (int i=1;i<=n;i++) for (int j=1;j<=n;j++) cin>>a[i][j];
	for (int i=1;i<=n;i++) 
		for (int j=1;j<=n;j++)
		{
			if (i==1||j==1) thuan[i][j]=a[i][j];
			else thuan[i][j]=thuan[i-1][j-1] + a[i][j];
		}
	for (int i=1;i<=n;i++)
		for (int j=1;j<=n;j++)
		{
			if (i==1||j==n) nghich[i][j]=a[i][j];
			else nghich[i][j]=nghich[i-1][j+1] + a[i][j];
		}
	int ans=-1e9;
	for (int i=n;i>=1;i--)
	{
		for (int j=n;j>=1;j--)
		{
			int tmp=min(i,j);
			int hang=i-tmp,cot=j-tmp;
			for (int k=0;k<tmp;k++)
			{
				ans=max(ans,thuan[i][j]-thuan[hang+k][cot+k]-nghich[i][cot+k+1]+nghich[hang+k][j+1]);
			}
		}
	}
	cout <<ans << endl;
}
