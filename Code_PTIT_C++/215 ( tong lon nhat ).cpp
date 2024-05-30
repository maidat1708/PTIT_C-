#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		for (int &x:a) cin>>x;
		for (int &x:b) cin>>x;
		long long ans=0,tong1=0,tong2=0,tong=0;
		for (int i=0;i<n;i++)
		{
			tong+=a[i];
			tong2=0;
			for (int j=i+1;j<m;j++) 
			{
				tong2+=b[j];
			}
			ans=max(ans,tong+tong2);
		}
		tong=0;
		for (int i=0;i<m;i++)
		{
			tong+=b[i];
			tong1=0;
			for (int j=i+1;j<n;j++) 
			{
				tong1+=a[j];
			}
			ans=max(ans,tong+tong1);
		}
		cout << ans << endl;
	}
}



