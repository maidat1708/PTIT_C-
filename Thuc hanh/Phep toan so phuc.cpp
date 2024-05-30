#include<bits/stdc++.h>
using namespace std;
struct SoPhuc
{
	int thuc,ao;
};
SoPhuc binh_phuong_tong(SoPhuc A,SoPhuc B)
{
	SoPhuc C;
	int a=A.thuc+B.thuc,b=A.ao+B.ao;
	C.thuc=a*a-b*b;
	C.ao=2*a*b;
	return C;
}
void hien_thi(SoPhuc C)
{
	cout << C.thuc ;
	if (C.ao>=0) cout << " + " << C.ao <<"i"<< endl;
	else cout << " - " << abs(C.ao) << "i"<<endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		SoPhuc A;
		SoPhuc B;
		cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
		SoPhuc C = binh_phuong_tong(A, B);
		hien_thi(C);
		cout << endl;
	}
}
