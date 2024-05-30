#include <bits/stdc++.h>
using namespace std;
long long c[25][25];
void Thietlap()
{
	for (int i=0;i<25;i++)
	{
		for (int j=0;j<=i;j++)
		{
			if (i==j||j==0) c[i][j]=1;
			else c[i][j]=c[i-1][j-1]+c[i-1][j];			
		}
	}
}
int main ()
{
	int t; cin >> t;
	Thietlap();
	while (t--)
	{
		int n,k; cin >> n >>k;
		int a[n];
		for (int i=0;i<n;i++) cin >> a[i];
		sort(a,a+n);
		int x = a[k-1],dem1=1,dem2=0;
		int posl,posr;
		for (int i=k-2;i>=0;i--)
		{
			if (a[i]==x)
			{
				posl = i;
				dem1++;
			}
		}
		for (int i=k;i<n;i++)
		{
			if (a[i]==x)
			{
				dem2++;
				posr = i;
			}
		}
		dem2 += dem1;
		cout <<c[dem2][dem1]<< endl;
	}
}
