#include<bits/stdc++.h>
using namespace std;
void chuanhoa (string &x)
{
	for (int i=0;i<x.size();i++) x[i]=tolower(x[i]);
}
int main ()
{
	string x;
	vector <string> v;
	while (getline (cin,x))
	{
		string res="";
		chuanhoa(x);
		stringstream ss (x);
		string tmp;
		while (ss >> tmp)
		{
			res=res+tmp;
			if (tmp[tmp.size()-1]=='.'||tmp[tmp.size()-1]=='!'||tmp[tmp.size()-1]=='?')
			{
				v.push_back(res);
			}
			else res+=" ";
		}
		if (x[x.size()-1]!='.'&&x[x.size()-1]!='!'&&x[x.size()-1]!='?')
		{
			res+=".";
			v.push_back(res);
		}
	}
	for (int i=0;i<v.size();i++)
	{
		v[i][0]=toupper(v[i][0]);
		cout << v[i] << endl;
	}
}
