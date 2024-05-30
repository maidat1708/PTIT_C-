#include <bits/stdc++.h> 
using namespace std;
class GV {
	private:
		string ten,job,kh;
		int ma;
	public:
		friend bool ktra(string,string);
		string getten();
		friend istream& operator >> (istream &in,GV&);
		friend ostream& operator << (ostream &out,GV);
};
int t=1;

string GV::getten()
{
	return ten;
}

bool ktra (string p,string s)
{
	for (int i=0;i<p.size();i++) p[i]=tolower(p[i]);
	for (int i=0;i<s.size();i++) s[i]=tolower(s[i]);
	int i=0,j=0;
	while (j<s.size()&&i<p.size())
	{
		if (p[i]==s[j])
		{
			i++;
			j++;
			if (j==s.size()) return true;
		}
		else
		{
			j=0;
			i++;
		}
	}
	return false;
}

istream& operator >> (istream &in,GV &p)
{
	scanf("\n");	
	p.kh="";
	getline(in,p.ten);
	scanf("\n");
	getline(in,p.job);
	stringstream ss(p.job);
	string tmp;
	while (ss>>tmp)	p.kh+=toupper(tmp[0]);
	p.ma=t++;
	return in;
}
ostream& operator << (ostream &out,GV p)
{
	cout << "GV";
	if (p.ma<10) cout << "0" << p.ma << " ";
	else cout << p.ma << " ";
	cout << p.ten << " " << p.kh << endl;
	return out;
}
int main ()
{
	int n;
	cin>>n;
	GV ds[n];
	for (int i=0;i<n;i++) cin>>ds[i];
	int k;
	cin>>k;
	string s[k];
	for (int i=0;i<k;i++)
	{
		scanf("\n");
		getline(cin,s[i]);
		cout << "DANH SACH GIANG VIEN THEO TU KHOA " <<s[i] << ":\n";
		for (int j=0;j<n;j++)
		{
			if (ktra(ds[j].getten(),s[i])) cout << ds[j];
		}
	}
}
