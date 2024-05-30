#include<bits/stdc++.h>
using namespace std;

int nto(int n){
 	for(int i=2;i<=sqrt(n);++i){
		if(n%i==0) return 0;
	}	
 	return n>1;
}
int hhao(long long n){
 	for(int i=2;i<=32;++i) if(nto(i)) if(nto(pow(2,i)-1)) {
  	long long hh= pow(2,i-1)*(pow(2,i)-1); 
 	 	if(n==hh) return 1;
 	}
 	return 0;
}
int main(){
 int t;
 cin>>t;
 while(t--){
    long long n;
    cin>>n;
    printf(hhao(n)?"1\n":"0\n");
    }
}


