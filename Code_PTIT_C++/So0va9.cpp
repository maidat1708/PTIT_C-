#include<bits/stdc++.h>
using namespace std;
queue<string> p;
vector<string> v;
void run()
{
	p.push("9");
	v.push_back("9");
	while (1)
	{
		string top=p.front();p.pop(	);
		if (top.size()==10) break;
		p.push(top+"0");
		v.push_back(top+"0");
		p.push(top+"9");
		v.push_back(top+"9");
	}
}

int main ()
{
	run();
	int t;cin>>t;
	while (t--)
	{
		int n,dem=0;cin>>n;
		for (string x:v)
		{
			if (stoll(x)%n==0)
			{
				cout << x;
				break;
			}
			
		}
		cout <<endl;
	}
}

