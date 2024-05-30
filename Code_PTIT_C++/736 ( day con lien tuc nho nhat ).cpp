#include<bits/stdc++.h>
using namespace std;
long long run (long long a[],int n,int x)
{
	long long l=0,sum=0,ans=n;
	for (int r=0;r<n;r++)
	{
		sum+=a[r];
		while (sum>x&&l<n)
		{
			ans=min(ans,r-l+1);
			sum-=a[l];
			l++;
		}
	}
	return ans;
} 
int main ()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n,x;
		cin>>n >> x;
		long long a[n];
		for (int i=0;i<n;i++) cin>>a[i];
		int ans=run(a,n,x);
		if (ans!=n) cout << ans << endl;
		else cout << "-1" << endl;
	}
	
}

