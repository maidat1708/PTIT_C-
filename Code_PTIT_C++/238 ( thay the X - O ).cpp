#include<bits/stdc++.h>
using namespace std;
char a[100][100];
int n,m;
int fi[]={-1,0,0,1};
int fj[]={0,-1,1,0};

void run(int i, int j)
{
	a[i][j]='*';
	for (int k=0;k<4;k++)
	{
		int imoi=i+fi[k];
		int jmoi=j+fj[k];
		if (imoi>=0&&jmoi>=0&&imoi<n&&jmoi<m&&a[imoi][jmoi]=='O') run(imoi,jmoi);
	}
}

int main()
{
	int t;cin>>t;
	while (t--)
	{
		cin>>n>>m; 
		for (int i=0;i<n;i++) for (int j=0;j<m;j++) cin>>a[i][j];
		for (int i=0;i<n;i++)
		{
			if (a[i][0]=='O') run(i,0);
			if (a[i][m-1]=='O') run(i,m-1);
		}
		for (int j=0;j<m;j++)
		{
			if (a[0][j]=='O') run(0,j);
			if (a[n-1][j]=='O') run(n-1,j);
		}
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<m;j++)
			{
				if (a[i][j]!='*') cout << "X ";
				else cout << "O ";
			}
			cout << endl;
		}
		cout << endl;
	}
}

