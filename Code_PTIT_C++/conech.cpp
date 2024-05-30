#include<bits/stdc++.h>
using namespace std;
int n;
void conech()
{
	cin>>n;
	long long d[51]={0};
	d[1]=1;d[2]=2;d[3]=4;
	for (int i=4;i<=n;i++) d[i]=d[i-1]+d[i-2]+d[i-3];
	cout << d[n] << endl;
}
int main ()
{
	int t;
	cin >> t;
	while (t--) conech();
}
