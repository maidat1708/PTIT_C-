#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    stack < int > st;
    int a[n];
    for(int i=1; i <= n; i++){
        cin >> a[i];
        if(st.empty()) st.push(a[i]);
        else if((st.top() + a[i]) % 2 == 0) st.pop();
        else st.push( a[i] );
    }
    cout << st.size();
}
