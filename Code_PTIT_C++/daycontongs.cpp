#include<bits/stdc++.h>
using namespace std;
int n,s,a[300];
void run ()
{
	bool d[40005]={false};
	d[0]=true;
	cin>>n>>s;
	for (int i=0;i<n;i++) cin>>a[i];
	for (int i=0;i<n;i++)
	{
		d[a[i]]=true;
		for (int j=s;j>=a[i];j--)
			if (d[j]==false&&d[j-a[i]]==true) d[j]=true;
	}
	if (d[s]==true) cout <<"YES\n";
	else cout << "NO\n";
}
int main ()
{
	int t;cin>>t;
	while (t--) run();
}
