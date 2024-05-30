#include<bits/stdc++.h>
using namespace std;
int main ()
{
	string ten;
	int coban,ngay,luong,thuong,phucap;
	char ma[5];
	getline(cin,ten);
	cin>>coban>>ngay>>ma;
	luong=coban*ngay;
	cout << "NV01 " << ten << " " << luong << " ";
	if (ngay>=25) thuong=luong/5;
	else if (ngay<=22) thuong=0;
	else thuong=luong/10;
	cout << thuong << " ";
	if (ma[0]=='G') phucap=250000;
	else if (ma[0]=='P') phucap=200000;
	else if (ma[0]=='T') phucap=180000;
	else phucap=150000;
	cout << phucap<<" "<<luong+thuong+phucap;
	
}
