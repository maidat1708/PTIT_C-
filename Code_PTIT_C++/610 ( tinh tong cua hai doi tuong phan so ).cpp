#include<bits/stdc++.h>
using namespace std;

class PhanSo
{
	private:
		long long tu,mau;
	public:
		PhanSo(long long tu,long long mau);
		friend void rutgon(PhanSo&);
		friend istream& operator >> (istream &in,PhanSo&);
		friend ostream& operator << (ostream &out,PhanSo);
		friend PhanSo operator + (PhanSo &a,PhanSo &b);
};
void rutgon(PhanSo &p)
{
	long long uoc=__gcd(p.tu,p.mau);
	p.tu=p.tu/uoc;
	p.mau=p.mau/uoc;
}

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

PhanSo operator + (PhanSo &p, PhanSo &q)
{
	PhanSo x(1,1);
	x.mau=p.mau*q.mau;
	x.tu=p.tu*q.mau+q.tu*p.mau;
	rutgon(x);
	return x;
}

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}

