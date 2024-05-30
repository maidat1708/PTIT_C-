#include<bits/stdc++.h>
using namespace std;
long long mu (long long x)
{
	return x*x;
}
long long mod1 (long long a, long long b,long long m)
{
	if (b==0) return 1;
	else if (b%2==0) return mu(mod1(a,b/2,m))%m;
	else return a*(mu(mod1(a,b/2,m))%m)%m;
}
int main ()
{
	int t;
	cin >> t;
	while (t--)
	{
		scanf ("\n");
		string a;long long c,b,mod=0,s[1001];
		cin>>a>>c>>b;
		int len=a.size();
		for (int i=0;i<len;i++) s[i]=a[i]-'0';
		for (int i=0;i<len;i++) mod=(mod*10+s[i])%b;
		mod=mod1 (mod,c,b);
		cout <<mod<<endl;
	}
	return 0;
}



