#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b,c,n;
		cin>>a>>b>>c>>n;
		long long s=a*b/__gcd(a,b); 
		s=s*c/__gcd(s,c);
		if(s>=pow(10,n)) cout<<"-1\n";
		else 
		{
			long long y = pow(10,n-1);
			if(y%s==0) cout<<y<<endl;
			else cout<<(y/s+1)*s<<endl;
		}
	}
}

