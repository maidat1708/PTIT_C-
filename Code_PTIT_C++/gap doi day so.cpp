#include<bits/stdc++.h>
using namespace std;
int run (int n,long long k)
{
	long long x=pow(2,n-1);
	if (k==x) return n;
	if (k<x) return run(n-1,k);
	else return run(n-1,k-x);
}
int main(){
	int t; 
	cin>>t; 
	while(t--)
	{
		int n;
		long long k;	
		cin>>n>>k;
		cout << run(n,k)<<endl;
	}
}
