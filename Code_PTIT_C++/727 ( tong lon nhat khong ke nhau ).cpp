#include<bits/stdc++.h>
using namespace std;
long long run (int a[],int n)
{
	long long ans[n];
	ans[0]=a[0];
	ans[1]=max(a[1],a[0]);
	for (int i=2;i<n;i++)
	{
		ans[i]=max(ans[i-2]+a[i],ans[i-1]);
	}
	return ans[n-1];
}
int main(){
	int t;
	cin>>t;
	while (t--)
	{
		int n;
		cin>>n;
		int a[n];
		for (int &x : a) cin>>x;
		cout << run(a,n) << endl;
	}
}
