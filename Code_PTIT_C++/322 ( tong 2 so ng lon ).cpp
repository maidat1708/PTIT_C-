#include<bits/stdc++.h>
using namespace std;
string run(string a,string b)
{
	int nho=0;
	int la=a.size(),lb=b.size();
	while (la>lb)
	{
		b='0'+b;
		lb++;
	}
	while (la<lb)
	{
		a='0'+a;
		la++;
	}
	string c;
	if (a<b) swap (a,b);
	for (int i=la-1;i>=1;i--)
	{
		int t = (a[i]-'0')+(b[i]-'0')+nho;
		if (t >= 10 && i!=0)
		{
			t=t-10;
			nho=1;
		}
		else nho=0;
		c=char(t+'0')+c;
	}
	int t = (a[0]-'0')+(b[0]-'0')+nho;
	if (t>=10) 
	{
		int u=t%10;
		c=char (u+'0')+c;
		t/=10;
		c=char (t+'0')+c;
	}
	else c=char (t+'0')+c;
	return c;
}
int main ()
{
	int t;
	cin >> t;
	while (t--)
	{
		scanf ("\n");
		string a,b;
		cin>>a>>b;
		cout <<run(a,b)<<endl;
	}
	return 0;
}



