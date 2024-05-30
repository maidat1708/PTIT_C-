#include<bits/stdc++.h> 
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--)
	{
		char s[10005];
		cin >> s;
		long long len=strlen(s),sum2=0;
		for (int i=len-1;i>=0;i--)
		{
			if (s[i]=='1')
			{
				long long sum=1;
				for (int j=0;j<len-1-i;j++)
				{
					sum*=2;
					sum%=5;
				}
				sum2+=sum;
			}
		}
		if (sum2%5==0) cout <<"Yes";
		else cout << "No";
		cout << endl;
	}
	return 0;
}
