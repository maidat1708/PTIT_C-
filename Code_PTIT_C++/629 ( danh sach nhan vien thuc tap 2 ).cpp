#include <bits/stdc++.h> 
using namespace std;
class GV {
	private:
		string ma,ten;
		int number;
	public:
		int getnumber();
		friend bool cmp(GV,GV); 
		friend istream& operator >> (istream &in,GV&);
		friend ostream& operator << (ostream &out,GV);
};
int GV::getnumber()
{
	return number;
}

bool cmp (GV a,GV b)
{
	if (a.number>b.number) return true;
	if (a.number<b.number) return false;
	if (a.ma<b.ma) return true;
	return false;
}

istream& operator >> (istream &in,GV &p)
{
	scanf("\n");	
	getline(in,p.ma);
	scanf("\n");
	getline(in,p.ten);
	in>>p.number;
	return in;
}
ostream& operator << (ostream &out,GV p)
{
	cout << p.ma << " " << p.ten << " " << p.number << endl;
	return out;
}
int main ()
{
	int n;
	cin>>n;
	GV ds[n];
	for (int i=0;i<n;i++) cin>>ds[i];
	sort(ds,ds+n,cmp);
	int k;
	cin>>k;
	for (int i=0;i<k;i++)
	{
		int a,b;
		cin>>a>>b;
		cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " DEN " << b << " SINH VIEN:\n";
		for (int j=0;j<n;j++)
		{
			if (ds[j].getnumber()>=a&&ds[j].getnumber()<=b) cout << ds[j];
		}
	}
}
