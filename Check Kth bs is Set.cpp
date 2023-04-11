#include<bits/stdc++.h>
using namespace std;

void KthBit(int n,int k)
{
	if((n&(1<<(k-1)))!=0)
	  cout<<"YES\n";
	else
	  cout<<"NO\n";
}

int main()
{
	int n=13;
	int k=3;
	KthBit(n,k);
	return 0;
}
