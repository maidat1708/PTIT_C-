#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t;
	cin>>t;
	while (t--)
	{
		long long n,m;
		cin>>n>>m;
		long long s1,s2;
		//s1+s2=n*(n+1)/2
		// s1-s2=m;
		//=> 2s1=n*(n+1)/2+m;
		long long tong=n*(n+1)/2+m;
		if (tong%2==0)
		{
			s1=tong/2;
			s2=s1-m;
			if (__gcd(s1,s2)==1) cout << "Yes\n";
			else cout << "No\n";
		}
		else cout << "No\n";
	}
}

