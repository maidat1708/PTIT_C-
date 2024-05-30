#include<bits/stdc++.h>
using namespace std;
string g[94];long long f[93];

char run (int n,long long k)
{
	if (n==1) return 'A';
	if (n==2) return 'B';
	if (k<=f[n-2]) return run(n-2,k);
	else return run(n-1,k-f[n-2]);
}

int main(){
	g[1]='A';g[2]='B';
	f[0]=0;f[1]=1;
	for (int i=2;i<=93;i++) f[i]=f[i-1]+f[i-2]; 
	int t; 
	cin>>t; 
	while(t--)
	{
		int n;
		long long k;	
		cin>>n>>k;
		cout << run(n,k) <<endl;
	}
}
