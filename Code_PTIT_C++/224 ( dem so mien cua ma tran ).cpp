#include<bits/stdc++.h>
using namespace std;
int a[101][101],n,m;
int di[8]={-1,-1,-1,0,0,1,1,1};
int dj[8]={-1,0,1,-1,1,-1,0,1};

void run(int i,int j)
{
	a[i][j]=0;
	for (int k=0;k<8;k++)
	{
		int imoi=i+di[k];
		int jmoi=j+dj[k];
		if (jmoi>=0&&imoi>=0&&jmoi<n&&imoi<n&&a[imoi][jmoi]) run(imoi,jmoi);
	}
}

int main()
{
	int t;cin>>t;
	while (t--)
	{
		int ans=0;
		cin>>n>>m;
		for (int i=0;i<n;i++) for (int j=0;j<m;j++) cin>>a[i][j];
		for (int i=0;i<n;i++) for (int j=0;j<m;j++)
									if (a[i][j])
									{
										ans++;
										run(i,j);
									}
		cout << ans << endl;
	}
}
