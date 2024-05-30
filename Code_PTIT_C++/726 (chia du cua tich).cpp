#include<bits/stdc++.h>
using namespace std;
long long mod1 (long long a, long long b,long long m)
{
	if (b==0) return 0;
	else if (b%2==0) return (2*(mod1(a,b/2,m)%m))%m;
	else return (a%m+2*(mod1(a,b/2,m)%m))%m;
}
int main ()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long a,b,c;
		cin>>a>>b>>c;
		cout << mod1(a,b,c)<< endl;
	}
	return 0;
}



