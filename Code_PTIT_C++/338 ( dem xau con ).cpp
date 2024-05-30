#include<bits/stdc++.h>
using namespace std;
int ktra (int i,int j,char c,string s)
{
	for (int k=i;k<j;k++) if (s[k]==c) return 1;
	return 0;
}
int main ()
{
	int t;
	cin>>t;
	while (t--)
	{
		scanf ("\n");
		string s;
		cin>>s;
		int k,count=0;
		cin>>k;
		for (int i=0;i<s.size();i++)
		{
			int dem=0;
			for (int j=i;j<s.size();j++)
			{
				if (!ktra(i,j,s[j],s)) dem++;
				if (dem==k) count++;
				if (dem>k) break; 
			}
		}
		cout<<count<<endl;
	}
}

