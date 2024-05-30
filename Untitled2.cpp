#include<bits/stdc++.h>
using namespace std;
void run ()
{
	
}
int main ()
{
	string x;
	vector < string > v;
	ifstream f;
	f.open("DATA.in");
	while (f >> x)
	{
		if (!isalpha(x[0]))
		{
			if (x.size()>9) v.push_back(x);
			else if (x.size()==9) if (stoll(x)>1e9) v.push_back(x);
		}
		else v.push_back(x); 
	}
	sort (v.begin(),v.end());
	for (auto &x : v) cout << x << " ";
}
