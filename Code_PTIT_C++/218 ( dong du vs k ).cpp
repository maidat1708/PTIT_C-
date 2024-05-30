#include<bits/stdc++.h>
using namespace std;
int ktra (int a[],int n,int k)
{
	int x=a[0]%k;
	for (int i=1;i<n;i++)
	{
		if (a[i]%k!=x) return 0;
	}
	return 1;
}
int main ()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n],min=100000,max=-100000,count=0;
		for (int &x : a)
		{
			cin >> x;
			if (x<min) min=x;
			if (max < x) max=x;
		}
		int hieu=max-min;
		for (int i=1;i<=sqrt(hieu);i++)
		{
			if (hieu%i==0)
			{
				if (ktra(a,n,i)) count++;
				if (i!=hieu/i) if(ktra(a,n,hieu/i)) count++;
			}
		}
		cout << count;
		cout << endl;
	}
}

