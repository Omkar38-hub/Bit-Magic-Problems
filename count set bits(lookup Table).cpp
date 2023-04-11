#include<bits/stdc++.h>
using namespace std;
int table[256];
void initialize()
{
	table[0]=0;
	for(int i=0;i<256;i++)
	  table[i]=(i&1)+table[i/2];
}
int count(int n)
{
	int res=0;
	res+=table[n&0xFF];
	n=n>>8;
	res+=table[n&0xFF];
	n=n>>8;
	res+=table[n&0xFF];
	n=n>>8;
	res+=table[n&0xFF];
	return res;
}
int main()
{
	int n=13;
	initialize();
	cout<<"The number os set bits in "<<n<<" is\n";
	cout<<count(n);
	return 0;
}

// time complexity= constant time
