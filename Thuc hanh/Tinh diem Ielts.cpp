#include<bits/stdc++.h>
using namespace std;

float diem (int a)
{
	if (a<=2) return 0;
	else if (a<=4) return 2.5;
	else if (a<=6) return 3.0;
	else if (a<=9) return 3.5;
	else if (a<=12) return 4.0;
	else if (a<=15) return 4.5;
	else if (a<=19) return 5.0;
	else if (a<=22) return 5.5;
	else if (a<=26) return 6.0;
	else if (a<=29) return 6.5;
	else if (a<=32) return 7.0;
	else if (a<=34) return 7.5;
	else if (a<=36) return 8.0;
	else if (a<=38) return 8.5;
	else return 9.0;
}

float ktra(float tong)
{
	int nguyen=tong;
	float du=tong-nguyen;
	if (du==0.5||du==0) return 0;
	if (du==0.25||du==0.75) return 0.25;
	if (du<0.25) return -du;
	if (du<0.5&&du>0.25) return 0.5-du;
	if (du>0.5&&du<0.75) return 0.5-du;
	if (du>0.75) return 1-du; 
}

int main ()
{
	int t;
	cin>>t;
	while (t--)
	{
		int a,b;float nghe,noi,doc,viet,tong;
		cin>>a>>b>>noi>>viet;
		nghe=diem(b);
		doc=diem(a);
		tong=(nghe+noi+doc+viet)/4;
		printf ("%.1f\n",tong+ktra(tong));
	}
}
