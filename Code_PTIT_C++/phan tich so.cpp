#include<bits/stdc++.h>
using namespace std;

int a[1000],cnt,check;

void run ()
{
	int i=cnt;
	while (i>=1&&a[i]==1) i--;
	if (i==0) check=0;
	else
	{
		a[i]--;
		int d=cnt-i+1;
		cnt=i;
		int p=d/a[i];
		int q=d%a[i];
		if (p) for (int j=1;j<=p;j++)
		{
			cnt++;
			a[cnt]=a[i];
		}
		if (q)
		{
			cnt++;
			a[cnt]=q;
		}
	}
}

int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n;
		cin>>n;	
		cnt=1;check=1;a[1]=n;
		while (check)
		{
			cout << "(";
			for (int i=1;i<cnt;i++)  cout <<a[i] << " ";
			cout << a[cnt] << ") ";
			run();
		}
		cout << endl;
	}
}

