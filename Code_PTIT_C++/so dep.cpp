#include<bits/stdc++.h>
using namespace std;
int kt(char c)
{
	if (c==' '||c=='\n'||c=='\t') return 0;
	return 1;
}
int main(){
	int t;
	cin>>t; 
    while(t--)
	{
		scanf ("\n");
		string s;
		getline(cin,s);
		int z=s.size(),dem=1;
		if (kt(s[z-1])==0) dem=0;
		for (int i=0;i<z-1;i++)	if (kt(s[i])&&!kt(s[i+1])) dem++;
		cout <<dem;	
		cout<<endl;
	}
}

