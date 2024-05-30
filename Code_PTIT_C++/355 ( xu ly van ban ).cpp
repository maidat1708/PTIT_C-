#include<bits/stdc++.h>
using namespace std;
string chuanhoa (string s)
{
	s[0]=toupper(s[0]);
	for (int i=1;i<s.size();i++)
	{
		s[i]=tolower(s[i]);
	}
	return s;
}
int ktra(char c)
{
	if (c=='.'||c=='!'||c=='?') return 0;
	return 1;
}
int main(){
	string tmp,s="";
	vector < string > v;
	while (cin >> tmp)
	{
		if (!ktra(tmp[tmp.size()-1]))
		{
			tmp.erase(tmp.size()-1);
			s+=tmp;
			v.push_back(s);
			s="";
		}
		else s+=tmp+" ";
	}
	for (string x : v)
	{
		cout << chuanhoa(x) << endl;
	}
}
