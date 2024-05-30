#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> v;
int main ()
{
	int t;
	cin>> t;
	while (t--)
	{
		pair<int,int> p;
		int n;
		cin>>n;
		int dem=0;
		while (n%2==0)
		{
			dem++;
			n/=2;
		}
		if (dem>0)
		{
			p.first=2;
			p.second=dem;
			v.push_back(p);
		}
		for (int i=3;i*i<=n;i+=2)
		{
			dem=0;
			while(n%i==0)
			{
				dem++;
				n/=i;
			}
			if (dem>0)
			{
				p.first=i;
				p.second=dem;
				v.push_back(p);
			}
		}
		if (n>1) 
		{
			p.first=n;
			p.second=1;
			v.push_back(p);
		}
		cout << v.size() << endl;
		for (auto x : v) cout << x.first << " " << x.second << endl;
		v.clear();
	}
}
