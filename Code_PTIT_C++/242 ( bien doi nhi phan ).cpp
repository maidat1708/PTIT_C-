#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>> t;
	while (t--)
	{
		int n;
		cin>>n;
		int a[n],b[n],dem=0;
		for (int &x : a) cin>>x;
		for (int &x : b) cin>>x;
		for (int i=0;i<n;i++)
		{
			int x=0,y=0,k;
			for (int j=i;j<n;j++)
			{
				x+=a[j];y+=b[j];
				if (x==y)
				{
					k=j-i+1;
					dem=max(dem,k);
				}
			}
		}
		cout << dem;
		cout << endl;
	}
}


