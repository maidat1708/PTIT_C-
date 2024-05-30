#include<bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
int main(){
	int t;
	cin >> t;
	while(t--){
		int  n,m;
		cin >> n >> m;
		int a[n];
		for (int i=n-1;i>=0;i--) cin>>a[i];
		long long kq=a[0],x=1;
		for (int i=1;i<n;i++)
		{
			x=(x*m)%mod;
			kq+=((a[i]%mod)*(x%mod))%mod;
		} 
		cout <<kq%mod<< endl;
	}
	return 0;
}


