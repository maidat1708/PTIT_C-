#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int n,i=1,r=0,ktra=0;
	cin>>n;
	int a[n];
	for (int &x:a) cin>>x;
	while (i!=a[0])
	{
		cout << i++ << endl;
		ktra=1;
	}
	for (int j=i;j<=a[n-1];j++)
	{
		if (a[r]!=j)
		{
			ktra=1;
			cout << j <<endl;
		}
		else r++;
	}
	if (ktra==0) cout << "Excellent!";
}
