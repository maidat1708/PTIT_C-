#include<iostream>
using namespace std;

int ktra(int m){
	int u=0,n=m;
	while(n%2==0){
		u+=2;
		n/=2;
	}
	for(int i=3;i*i<=n;i+=2){
		while(n%i==0){
			int t=i;
			while(t>0){
				u+=t%10;
				t/=10;
			}
			n/=i;
		}
	}
	if(n>1){
		while(n>0){
			u+=n%10;
			n/=10;
		}
	}
	return u;
}
int nt(int n){
	if(n==1) return 0;
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int m;
		cin >> m;
		int n=m,u=0;
		while(n>0){
			u+=n%10;
			n/=10;
		}
		if(u==ktra(m)){
			if(nt(m)) cout << "NO\n";
			else cout << "YES\n";
		}
		else cout << "NO\n";
	}
	return 0;
}
