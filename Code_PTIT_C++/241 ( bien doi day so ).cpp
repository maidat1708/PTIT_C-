#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>> t;
	while (t--)
	{
		int n;
		cin>>n;
		int a[n],dem=0;
		for (int &x : a) cin>>x;
		int l=0,r=n-1;
		while(l<=r)
		{
			if (a[l]==a[r])
			{
				l++;
				r--;
			}
			else if (a[l]<a[r])
			{
				l++;
				a[l]+=a[l-1];
				dem++;
			}
			else
			{
				r--;
				a[r]+=a[r+1];
				dem++;
			}
		}
		cout <<dem;
		cout << endl;
	}
}


