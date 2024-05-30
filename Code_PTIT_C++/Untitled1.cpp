#include<bits/stdc++.h>
using namespace std;
int n,c;
void run(long long s)
{
	int a[100000],n=0;
	for (int i=9;i>=2;i--)
	{
		if (s%i==0)
		{
			a[n++]=i;
			s/=i;
		}
	}
	if (s<10)
	{
		for (int i=n-1;i>=0;i--)
		{
			cout << a[i];
		}
	}
	else cout << "-1";
}
int main ()
{
	int t;cin>>t;
	while (t--)	
	{
		long long n;cin>>n;
		if (n<10) cout << n ;
		else run(n);
		cout << endl;
	}
}

