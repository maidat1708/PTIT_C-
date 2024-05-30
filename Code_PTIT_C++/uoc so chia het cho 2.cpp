#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int dem=1;
		if(n%2!=0) cout << "0\n";
		else{
			for(int i=2;i<=sqrt(n);i++){
				if(n%i==0){
					if(i%2==0) dem++;
					if(n/i%2==0) dem++;
					if(n/i==i) dem--;
				}
			}
			cout << dem << endl;
		}
	}
	return 0;
}
