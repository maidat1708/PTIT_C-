#include<bits/stdc++.h>
using namespace std;
int n,m;

int Maxsum(int a[])
{
	int sum=0,res=0;
	for (int i=0;i<n;i++)
	{
		sum+=a[i];
		if (sum < 0) sum=0;
		res=max(res,sum);
	}
	return res;
}

int main()
{
	int t;cin>>t;
	while (t--)
	{
		int tmp[201]={0},ans=-1e9;
		cin>>n>>m;
		int a[n][m];
		for (int i=0;i<n;i++) for (int j=0;j<m;j++) cin >> a[i][j];
		int r=0,l=0;
		for (int l=0;l<m;l++)
		{
			memset(tmp,0,sizeof(tmp));
			for (int r=l;r<m;r++)
			{
				for (int i=0;i<n;i++)
				{
					tmp[i]+=a[i][r];
				}
				ans=max(ans,Maxsum(tmp));
			}
		}
		cout <<ans<<endl;
	}
}

