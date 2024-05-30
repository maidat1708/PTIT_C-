#include<bits/stdc++.h>
using namespace std;

void run ()
{
	string s;
	cin >> s;
	set<char> se;
	for (int i=0;i<s.size();i++) se.insert(s[i]);
	int len=se.size();
	int dem[256]={0},ans=INT_MAX,cnt=0,l=0;
	for (int i=0;i<s.size();i++)
	{
		dem[s[i]]++;
		if (dem[s[i]]==1) cnt++;
		if (cnt==len)
		{
			while (dem[s[l]]>1)
			{
				dem[s[l]]--;
				l++;
			}
			ans=min(ans,i-l+1);
		}
	}
	cout << ans << endl;
}
int main ()
{
	int t; cin >>t;
	while (t--)
	{
		run();
	}
}
