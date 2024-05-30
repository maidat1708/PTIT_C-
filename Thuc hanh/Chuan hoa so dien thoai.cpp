#include<bits/stdc++.h>
using namespace std;
void ktra(string s)
{
	int i=0,len=s.size()-1;
	string sdt="";
	while (i!=10)
	{
		if (s[len]>='0'&&s[len]<='9')
		{
			sdt=s[len]+sdt;
			i++;
		}
		len--;
	}
	cout <<"0"<<sdt<<endl;
}
int main ()
{
	int n;
	cin>>n;
	string s[n];
	for (int i=0;i<n;i++)
	{
		scanf ("\n");
		getline (cin,s[i]);
	}
	for (int i=0;i<n;i++) ktra(s[i]);
}
