#include<bits/stdc++.h>
using namespace std;
class SV{
	private:
		string ma,ten,lop,email;
	public:
		string etlop();
		friend istream& operator >> (istream &in,SV&);
		friend ostream& operator << (ostream &out,SV);
};
istream& operator >> (istream &in,SV &p){
	scanf("\n");
	getline(in,p.ma);
	scanf("\n");
	getline(in,p.ten);
	scanf("\n");
	getline(in,p.lop);
	scanf("\n");
	getline(in,p.email);
	return in;
}
string SV::etlop()
{
	return lop;
}

ostream& operator << (ostream &out ,SV p){
	out << p.ma << " " << p.ten << " " << p.lop << " " << p.email << endl;
	return out;
}

int main (){
	int n,m;
	cin>>n;
	SV ds[n];
	for (int i=0;i<n;i++) cin >> ds[i];
	cin>>m;
	string s[m];
	for (int i=0;i<m;i++) 
	{
		scanf ("\n");
		getline (cin,s[i]);
	}
	for (int i=0;i<m;i++)
	{
		cout << "DANH SACH SINH VIEN KHOA " << s[i] << ":\n";
		for (int j=0;j<n;j++)
		{
			if (ds[j].etlop()[1]==s[i][2]&&ds[j].etlop()[2]==s[i][3])
			cout << ds[j];
		}
	}
}
