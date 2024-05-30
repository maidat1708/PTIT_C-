#include<bits/stdc++.h>
using namespace std;
class NhanVien
{
	private:
		string ten,add;
		char gt[4],sdt[50],ki[50];
		int ngay,thang,nam,stt;
	public:
		friend void sapxep(NhanVien ds[],int);
		friend istream& operator >> (istream &in,NhanVien&);
		friend ostream& operator << (ostream &out,NhanVien);
};
int t=1;
istream& operator >> (istream &in,NhanVien &p)
{
	p.stt=t++;
	scanf ("\n");
	getline(in,p.ten);
	in>>p.gt;
	scanf ("%d/%d/%d",&p.thang,&p.ngay,&p.nam);
	scanf("\n");
	getline(in,p.add);
	in>>p.sdt;
	in>>p.ki;
	return in;
}
void sapxep(NhanVien ds[],int n)
{
	for (int i=0;i<n-1;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			if (ds[i].nam>ds[j].nam) swap(ds[i],ds[j]);
			else if (ds[i].nam==ds[j].nam) 
			{
				if (ds[i].thang > ds[j].thang) swap(ds[i],ds[j]);
				else if (ds[i].thang == ds[j].thang) if (ds[i].ngay>ds[j].ngay)  swap(ds[i],ds[j]);
			}
		}
	}
}
ostream& operator << (ostream &out,NhanVien p)
{
		if (p.stt<10) out << "0000" << p.stt;
		else out << "000" << p.stt;
		out << " " << p.ten << " "<<p.gt << " ";
		if (p.thang<10) out << "0" << p.thang;
		else out << p.thang;
		out << "/";
		if (p.ngay<10) out << "0" << p.ngay;
		else out << p.ngay;
		out << "/" << p.nam << " ";
		out << p.add << " " << p.sdt << " " << p.ki << endl;;
	return out;
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}



