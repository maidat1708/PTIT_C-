#include<bits/stdc++.h>
#define a() a;
using namespace std;

class NhanVien
{
	private:
		string ten,address;
		char gt[4],sinh[50],tax[20],date[50];
		int ma;
	public:
		friend istream& operator >> (istream &in, NhanVien&);
		friend ostream& operator << (ostream &out, NhanVien);
};

int t=1;
istream& operator >> (istream &in, NhanVien&a)
{
	scanf ("\n");
	getline(in,a.ten);
	in>>a.gt >> a.sinh;
	scanf ("\n");
	getline(in,a.address);
	in>>a.tax>>a.date;
	a.ma=t++;
	return in;
}

ostream& operator << (ostream &out, NhanVien a)
{
	out << "000";
	if (a.ma<10) out << "0" << a.ma << " ";
	else out << a.ma;
	out << " " << a.ten << " " << a.gt << " " << a.sinh << " " << a.address << " " << a.tax << " "<<a.date << endl;
	return out;
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}


