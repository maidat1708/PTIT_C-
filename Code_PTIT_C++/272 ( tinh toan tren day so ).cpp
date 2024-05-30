#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
long long mu (long long a,long long b)
{
	if (b==0) return 1;
	long long x=mu(a,b/2)%mod;
	if (b%2==0) return x*x%mod;
	else return (a%mod*(x*x%mod))%mod;
}
int main ()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n;
		cin>>n;
		int a[n];
		long long count=1;
		for (int i=0;i<n;i++) cin>>a[i];
		if (n==1)
		{
			cout<<mu(a[0],a[0])<<endl;
		}
		else
		{
			int u=__gcd(a[0],a[1]);
			for (int i=2;i<n;i++) u=__gcd(u,a[i]);
			for (int i=0;i<n;i++)
			{
				count*=a[i];
				count%=mod;
			}	
			cout << mu(count,u) << endl;
		}
	}
}


