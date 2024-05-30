#include<iostream>
using namespace std;

int ktra(int a[],int l,int r,int k){
	for(int i=l;i<k;i++){
		if(a[i]>a[i+1]) return 0;
	}
	for(int i=k;i<r;i++){
		if(a[i]<a[i+1]) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++) cin >> a[i];
		int l,r,max=0,k=0,ktr=1;
		cin >> l >> r;
		for(int i=l;i<=r;i++){
			if(a[i]>=max){
				max=a[i];
				k=i;
			}
		}
		if(max==a[r]){
			for(int i=l;i<r;i++){
				if(a[i+1]<a[i]){
					ktr=0;
					break;
				}
			}
			if(ktr==1) cout << "Yes\n";
			else cout << "No\n";
		}
		else{
			if(ktra(a,l,r,k)) cout << "Yes\n";
			else cout << "No\n";
		}
	}
	return 0;
}

