#include<bits/stdc++.h>
using namespace std;
	
int main ()
{
		int k;
		scanf ("%d",&k);
		int s[1000];
		if (k==0) printf ("0\n");
		else
		{
			int i=0;
			while (k)
			{
				int tmp=k%2;
				k/=2;
				s[i++]=tmp;
			}
			for (int j=i-1;j>=0;j--) printf ("%d",s[j]);
			printf ("\n");
		}
	}

