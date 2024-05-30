#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int n,m,dem=0;
	cin>>n>>m;
	int a[n][m];
	string s[n+1];
	for (int i=0;i<n;i++)
	{
		scanf ("\n");
		getline (cin,s[i]);
		for (int j=0;j<m;j++) a[i][j]=0;
	}
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			if (s[i][j]=='#'&&a[i][j]==0)
			{
				int x=i,y=j;
				while (s[x][y]=='#')
				{
					a[x][y]=1;
					while (s[x][y]=='#')
					{
						a[x][y]=1;
						x++;
					}
					x=i;
					y++;
				}
				dem++;
			}
		}
	}
	cout << dem;
}
