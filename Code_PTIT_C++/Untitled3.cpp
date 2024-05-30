#include<bits/stdc++.h>
using namespace std;

int main ()
{
	int dem=0,ans=0;
	string s;
	getline(cin,s);
	stack<char> st;
	for (int i=0;i<s.size();i++)
	{
		if (s[i]=='['||s[i]=='(') st.push(s[i]);
		else
		{
			char top=st.top();
			if (top=='['&&s[i]==']')
			{					
				st.pop();
				dem++;
				ans=max(ans,dem);
			}
			else if (top=='('&&s[i]==')') st.pop();
			else
			{
				while (!st.empty()) st.pop();
				ans=max(ans,dem);
				dem=0;
			}
		}
	}
	cout << ans << endl;
}
