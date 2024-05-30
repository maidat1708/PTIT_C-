#include<bits/stdc++.h>
using namespace std;

void run ()
{
	string s1,s2;
	cin>>s1>>s2;
	int dem1[256]={0},dem2[256]={0};
	for (int i=0;i<s2.size();i++) dem2[s2[i]]++;
	int ans=INT_MAX,l=0,cnt=0,r=-1;
	for (int i=0;i<s1.size();i++)
	{
		dem1[s1[i]]++;
		if (dem1[s1[i]]<=dem2[s1[i]]) cnt++;
		if (cnt==s2.size())
		{
			while (dem1[s1[l]]>dem2[s1[l]]||dem2[s1[l]]==0)
			{
			{
				if (dem1[s1[l]]>dem2[s1[l]]) dem1[s1[l]]--;
				l++;
			}
			if (ans>i-l+1)
			{
				ans=i-l+1;
				r=l;
			}
		}
	}
	if (r==-1) cout << "-1\n";
	else cout << s1.substr(r,ans) << endl;
}

int main ()
{
	int t; cin >>t;
	while (t--)
	{
		run();
	}
}
