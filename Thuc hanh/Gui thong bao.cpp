#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
    	scanf ("\n");
        string s;
        getline(cin,s);
        string res=s.substr(0, 100);
        if(s.size() < 100) cout << s << endl;
        else
		{
            if(s[100] == ' ') cout << res << endl;
            else
			{
                while(res[res.size()-1] != ' ')
				{
                    res.erase(res.size()-1, 1);
                }
                cout << res << endl;
            }
        }
    }
}
