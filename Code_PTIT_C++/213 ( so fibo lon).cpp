#include<bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
int ktra(long long a)
{
	if(a==1) return 1;
	if (a==2) return 1;
	else
	{
		a-=2;
		long long f1=1,f2=1,f3=0;
		while (a--)
		{
			f3=(f1+f2)%mod;
			f1=f2%mod;
			f2=f3%mod;
		}
		return f3;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		cout << ktra(n);
		cout << endl;
	}
}


