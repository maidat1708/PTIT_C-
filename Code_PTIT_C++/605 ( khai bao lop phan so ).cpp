#include<bits/stdc++.h>
using namespace std;

class PhanSo
{
	private:
		long long tu,mau;
	public:
		PhanSo(long long tu,long long mau);
		void rutgon();	
		friend istream& operator >> (istream &in,PhanSo&);
		friend ostream& operator << (ostream &out,PhanSo);
};
PhanSo::PhanSo(long long tu1,long long mau1)
{
	tu=tu1;
	mau=mau1;
}
istream& operator >> (istream &in,PhanSo &p)
{
	in>>p.tu>>p.mau;
	return in;
}
ostream& operator << (ostream &out,PhanSo p)
{
	cout << p.tu << "/" << p.mau;
	return out;	
}
void PhanSo::rutgon()
{
	long long uoc=__gcd(tu,mau);
	tu=tu/uoc;
	mau=mau/uoc;
}
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
