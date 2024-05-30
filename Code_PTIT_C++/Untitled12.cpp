#include<bits/stdc++.h>
using namespace std;
bool ma2 (int a, char c)
{
	if (a==0&&c=='K') return true;
	if (a==1&&c=='L') return true;
	if (a==2&&c=='M') return true;
	if (a==3&&c=='N') return true;
	if (a==4&&c=='O') return true;
	if (a==5&&c=='P') return true;
	if (a==6&&c=='Q') return true;
	if (a==7&&c=='R') return true;
	if (a==8&&c=='S') return true;
	if (a==9&&c=='T') return true;
	return false;
}
bool ma1 (int a, char c)
{
	if (a==0&&c=='A') return true;
	if (a==1&&c=='B') return true;
	if (a==2&&c=='C') return true;
	if (a==3&&c=='D') return true;
	if (a==4&&c=='E') return true;
	if (a==5&&c=='F') return true;
	if (a==6&&c=='G') return true;
	if (a==7&&c=='H') return true;
	if (a==8&&c=='I') return true;
	if (a==9&&c=='J') return true;
	return false;
}

int main ()
{
	int t; cin>>t;
	while (t--)
	{
		string n,s,res="";
		int check=1;
		cin>>n;
		cin>>s;
		for (int i=0;i<s.size();i++) if (isalpha(s[i])) res=res+s[i];
		if (n.size()!=res.size()) cout << "NO";
		else
		{
			if (res[0]<'K')
			{
				for (int i=0;i<n.size();i++)
				{
					if (!ma1(n[i]-'0',res[i]))
					{
						check=0;
						cout << "NO";
						break;
					}
				}
				if (check==1) cout <<"YES";
			}
			else
			{
				for (int i=0;i<n.size();i++)
				{
					if (!ma2(n[i]-'0',res[i]))
					{
						check=0;
						cout << "NO";
						break;
					}
				}
				if (check==1) cout <<"YES";
			}
		}
		cout << endl;
	}
}
