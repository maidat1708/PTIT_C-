#include<bits/stdc++.h>
#define a() a;
using namespace std;

class SinhVien
{
	private:
		string ma="B20DCCN0",ten,lop;
		int d,m,y;
		float gpa;
	public:
		friend istream& operator >> (istream &in, SinhVien&);
		friend ostream& operator << (ostream &out, SinhVien);
};

istream& operator >> (istream &in, SinhVien&a)
{
	scanf ("\n");
	getline(in,a.ten);
	scanf ("\n");
	getline(in,a.lop);
	scanf ("%d/%d/%d",&a.d,&a.m,&a.y);
	in>>a.gpa;
	return in;
}
int t=1;
ostream& operator << (ostream &out, SinhVien a)
{
	out << a.ma;
	if (t<10) cout << "0" << t++ << " "; 
	else out << t++ << " ";
	out << a.ten << " " << a.lop << " ";
	if (a.d < 10) out << "0" << a.d << "/";
	else out << a.d << "/";
	if (a.m < 10)out << "0" << a.m << "/";
	else out << a.m << "/";
	out << a.y << " ";
	printf ("%.2f\n",a.gpa); 
	return out;
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
