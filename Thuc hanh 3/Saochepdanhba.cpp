#include<bits/stdc++.h>
#include<fstream>
using namespace std;
class Ten{
	public: string ngay,name,sdt;
};
main(){
	Ten ds[100];
	int n = 1;
	ifstream fb;
	ofstream fb1;
	fb.open("SOTAY.txt");
	fb1.open("DIENTHOAI.txt");
	string x;
	while(fb >> x)
	{
		if(x!="Ngay")
		{
			if(x[2]=='/')
			{
				ds[n].ngay+=x;
			}
			else if(x[0]=='0')
			{
				ds[n].sdt+= x;
				if(ds[n].ngay=="")
				{
					ds[n].ngay = ds[n-1].ngay;	
				}
				n++;
			}else
			{
				if(ds[n].name.size()>0)
				{
					ds[n].name+=" "+x;
				}
				else ds[n].name +=x;
			}
		}
	}
	for(int i = 1;i<n;i++){
		fb1 << ds[i].name <<": "<<ds[i].sdt<<" "<<ds[i].ngay<<endl;
	}
}
