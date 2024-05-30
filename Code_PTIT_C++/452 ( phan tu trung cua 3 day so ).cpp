#include <bits/stdc++.h> 
using namespace std;
int main ()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,z;
		cin>>n>>m>>z;
		long long a[n],b[m],c[z];
		for (long long &x : a) cin>>x;
		for (long long &x : b) cin>>x;
		for (long long &x : c) cin>>x;
		int i=0,j=0,k=0,ktra=0;
		while (i<n&&j<m&&k<z)
		{
			if (a[i]==b[j]&&a[i]==c[k])
			{
				cout <<a[i] << " ";
				ktra=1;
				i++;j++;k++;
			}
			else if (a[i]<=b[j]&&a[i]<=c[k]) i++;
			else if (b[j]<=a[i]&&b[j]<=c[k]) j++;
			else k++;
		}
		if (ktra==0) cout << "-1";
		cout << endl;
	}
}


