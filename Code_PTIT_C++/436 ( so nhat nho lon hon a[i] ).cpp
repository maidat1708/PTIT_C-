#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>> t;
	while (t--)
	{
		set <int> s;
		int n;
		cin>>n;
		int a[n],max=0;
		for (int i=0;i<n;i++)
		{
			cin>>a[i];
			if (max<a[i]) max=a[i];
			s.insert(a[i]);
		}
		for (int i=0;i<n;i++)
		{
			if (a[i]==max) cout << "_" << " ";
			else 
			{
				cout << *++s.find(a[i]) << " ";
			}
		}
		cout << endl;
	}
}


