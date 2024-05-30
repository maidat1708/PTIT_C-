#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int t;cin>>t;
	while (t--)
	{
		int n,m; cin >> n >> m;
		int a[n][m];
		for (int i=0;i<n;i++) for (int j=0;j<m;j++) cin >> a[i][j];
		int i=0,j=0,k=0;
		bool inlen=true;
		while (k<n*m)
		{
			if (inlen) 
			{
				while (i>=0&&j<m)
				{
					cout << a[i][j] << " ";
					k++;i--;j++;
				}
				if (i<0&&j<=m-1) i=0;
				if (j==m)
				{
					i+=2;
					j--;
				}
			}
			else 
			{
				while (j>=0&&i<n)
				{
					cout << a[i][j] << " ";
					k++;i++;j--;
				}
				if (j<0&&i<=n-1) j=0;
				if (i==n)
				{
					j+=2;
					i--;
				}
			}
			inlen=!inlen;
		}
		cout << end
	}
}
