#include<bits/stdc++.h>
using namespace std;
int t=0,b;
class MonHoc
{
	public:
		string ma,mon;
		friend istream& operator >> (istream &in, MonHoc& a);
};
struct LichThi
{
	public:
		string stt,ma,ngay,gio,nhom,mon;
		friend istream& operator >> (istream &in,LichThi& a);
		friend ostream& operator << (ostream &out,LichThi&a);
};

istream& operator >> (istream &in,MonHoc & a)
{
	scanf ("\n");
	getline(in,a.ma);
	scanf ("\n");
	getline(in,a.mon);
	scanf ("\n");
	return in;
}

istream& operator >> (istream &in,LichThi & a)
{
	scanf ("\n");
	a.stt=a.stt+to_string(t+1);
	while(a.stt.size()!=3) a.stt='0'+a.stt;
	a.stt='T'+a.stt;
	in>>a.ma >> a.ngay >> a.gio >> a.nhom;
	t++;
	return in;
}

ostream& operator << (ostream &out,LichThi &a)
{
	out << a.stt <<" "<< a.ma <<" " << a.mon <<" " << a.ngay <<" " << a.gio << " " << a.nhom << endl;
	return out;
}

bool ss(string s1,string s2 ) 
{
	int sum1 = int(s1[0]-'0')*10 + int(s1[1]-'0');
	int sum2 = int(s2[0]-'0')*10 + int(s2[1]-'0');
 
	int ss1 =  int(s1[3]-'0')*10 + int(s1[4]-'0');
	int ss2 =  int(s2[3]-'0')*10 + int(s2[4]-'0');
	if( ss1 < ss2 ) return true;
	else if ( ss1 == ss2 ) 
	{
		if( sum1 < sum2 ) return true;
	}
	return false;
}
 
bool cmp(LichThi s1,LichThi s2) 
{
	if( ss(s1.ngay,s2.ngay) ) return true;
	else if( s1.ngay == s2.ngay ) 
	{
		if( s1.gio < s2.gio ) return true;
		else if( s1.gio == s2.gio ) 
		{
			if( s1.ma< s2.ma ) return true;
			return false;
		}
		return false;
	}
	return false;
}

void process(MonHoc mh[],int  n,LichThi lt[],int m)
{
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++)
			if (lt[i].ma==mh[j].ma) lt[i].mon=mh[j].mon;
			
	sort(lt,lt+m,cmp);
}
int main() {
	int n, m;
	cin >> n >> m;
	cin.ignore();
	MonHoc mh[100];
	LichThi lt[1000];
	for (int i = 0; i < n; i++) {
		cin >> mh[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> lt[i];
	}
	process(mh, n, lt, m);
	for (int i = 0; i < m; i++) {
		cout << lt[i];
	}
}
