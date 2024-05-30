#include<bits/stdc++.h>
using namespace std;

int main ()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n,m;
		cin>>n>>m;
		vector<int> a(n),b(m);
		map<int,int> mp;
		for (int &x : a)
		{
			cin>>x;
			mp[x]++;
		}
		for (int &x : b) cin>>x;
		auto vitri=unique (b.begin(),b.end());
		b.resize(vitri-b.begin());
		for (int x : b)
		{
			for (int i=0;i<mp[x];i++) cout << x << " ";
			mp.erase(x);
		}
		for (auto x : mp)
		{
			for (int i=0;i <x.second;i++) cout << x.first << " ";
		}
		cout << endl;
	}
}

