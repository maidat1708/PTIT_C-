#include<bits/stdc++.h>
using namespace std;
long long run (long long a[],int n)
{
	long long b[n]={0};
	b[0]=a[0];
	for (int i=1;i<n;i++)
	{
		b[i]+=a[i];
		long long k=b[i];
		for (int j=i-1;j>=0;j--)
		{
			long long x=b[i];
			if (a[i]>a[j])
			{
				x+=b[j];
				k=max(x,k);
			}
		}
		b[i]=k;
	}
	sort(b,b+n);
	return b[n-1];
} 
int main ()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n;
		cin>>n;
		long long a[n];
		for (int i=0;i<n;i++) cin>>a[i];
		cout <<run(a,n)<< endl;
	}
	
}

