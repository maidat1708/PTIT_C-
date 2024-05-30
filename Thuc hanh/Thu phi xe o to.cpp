#include<bits/stdc++.h>
using namespace std;
struct xe
{
	string ngay;
	char bien[20],ten[20],t[20];
	int ghe,phi;
};

int ktra (string s[],string c,int m)
{
	for (int i=0;i<m;i++)
		if (s[i]==c) return 1;
	return -1;
}
int main(){
	int n,m=0;
	cin>>n;
	string s[100];
	struct xe ds[n];
	for (int i=0;i<n;i++)
	{
		scanf ("\n");
		cin>>ds[i].bien>>ds[i].ten>>ds[i].ghe>>ds[i].t;
		getline(cin,ds[i].ngay);
		if (ds[i].ghe==5) ds[i].phi=10000;
		else if (ds[i].ghe==7) ds[i].phi=15000;
		else if (ds[i].ghe==2) ds[i].phi=20000;
		else if (ds[i].ghe==29) ds[i].phi=50000;
		else ds[i].phi=70000;
	}
	for (int i=0;i<n;i++)
		if (ktra(s,ds[i].ngay,m)==-1)
		{
			s[m++]=ds[i].ngay;
		}
	sort(s,s+m);
	int a[m]={0};
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++)
			if (ds[j].ngay==s[i]&&ds[j].t[0]=='I')
			{
				a[i]+=ds[j].phi;
			}
	for (int i=0;i<m;i++)
		cout << s[i] << ": "<< a[i]<<endl;
}
