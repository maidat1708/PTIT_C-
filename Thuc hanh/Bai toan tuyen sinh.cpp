#include<bits/stdc++.h>
using namespace std;
int main ()
{
	char ma[10];
	string ten;
	float uutien,toan,ly,hoa,tong;
	cin>>ma;
	scanf ("\n");
	getline(cin,ten);
	cin>>toan>>ly>>hoa;
	cout << ma << " " << ten <<" ";
	if (ma[2]=='1') uutien=0.5;
	else if (ma[2]=='2') uutien=1;
	else uutien=2.5;
	cout << uutien<< " ";
	tong=2*toan+ly+hoa;
	cout << tong <<" ";
	if (tong+uutien>=24) cout << "TRUNG TUYEN";
	else cout << "TRUOT";
}
