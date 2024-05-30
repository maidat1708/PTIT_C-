#include<bits/stdc++.h>
using namespace std;
int main ()
{
	string ma;string ten;
	int coban,x=0;
	getline(cin,ma);
	scanf ("\n");
	getline (cin,ten);
	cin>>coban;
	cout << ma << " " << ten << " ";
	for (int i=2;i<=3;i++) x=x*10+(s[i]-'0');
	cout << x << " ";
	if (s[0]=='H')
	{
		if (s[1]=='T') cout << "2000000 " << x*coban+2000000;
		else cout << "900000 " <<  x*coban+900000;
	}
	else cout << "500000 " <<  x*coban+500000;
}
