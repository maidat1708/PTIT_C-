#include<bits/stdc++.h>
using namespace std;
int a[16]={0},n,b[16],dem,use[4]={0};
int ktra ()
{
	int sum1=0,sum2=0,sum3=0;
	for (int i=1;i<=n;i++)
	{
		if (a[i]==1) sum1+=b[i];
		if (a[i]==2) sum2+=b[i];
		if (a[i]==3) sum3+=b[i];
	}
	if (sum1==sum2&&sum2==sum3) return 1;
	return 0;
}
void run (int i)
{
	for (int j=1;j<=3;j++)
	{
		a[i]=j;
		if (i==n)
		{
			for (int i=0;i<n;i++) use[j]=1;
			if (use[1]&&use[2]&&use[3]) if (ktra()) dem++;
		}
		else run(i+1);
	}
}
int main ()
{
	int t;cin>>t;
	while (t--)
	{
		cin>>n;
		dem=0;
		for (int i=1;i<=3;i++) use[i]=0;
		for (int i=1;i<=n;i++) cin >> b[i];
		run(1);
		cout << dem <<endl;
	}
}
