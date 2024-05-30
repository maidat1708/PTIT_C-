#include<bits/stdc++.h>
using namespace std;

int main ()
{
	int t;
	scanf ("%d",&t);
	while (t--)
	{
		char s[10001];
		cin>>s;
		int sum=0,len=strlen(s),x=0;
		for (int i=0;i<len;i++)
		{
			if (!isalpha(s[i]))	x=x*10+(s[i]-'0');
			if (isalpha(s[i+1]))
			{
				 sum+=x;
				 x=0;
			}
		}
		if (!isalpha(s[len-1])) sum+=x;
		cout << sum << endl;
	}
}
	

