#include<bits/stdc++.h>
using namespace std;
int checkten(string s)
{
	int dem=0;
	for (int i=0;i<s.size();i++) 
	{
		if (s[i]=='@') break;
		else dem++;
	}
	if (dem>0&&dem<=64) return 1;
	return 0;
}

int checkmien(string s)
{
	int dem=0,check=0;
	for (int i=0;i<s.size();i++)
	{
		if (s[i]=='@')
		{
			for (int j=i+1;j<s.size();j++)
			{
				dem++;
				if(s[i+1]=='.') return 0;
				else if (s[j]=='.') check=1;
			}
			break;
		}
		else continue;
	}
	if (dem<=254&&check==1&&dem>0) return 1;
	return 0;
}
int checka (string s)
{
	int dem=0;
	for (int i=0;i<s.size();i++)
	{
		if (s[i]=='@')
		{
			dem++;
			continue;
		}
		if (s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z'||s[i]>='0'&&s[i]<='9'||s[i]=='.'||s[i]=='_') continue;
		else return 0;
	}
	if (dem==1) return 1;
	return 0;
}
int main ()
{
	int t;cin>>t;
	while(t--)
	{
		string s;
		scanf ("\n");
		getline(cin,s);
		if (checka(s)&&checkten(s)&&checkmien(s)) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}
