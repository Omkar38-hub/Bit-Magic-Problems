#include<bits/stdc++.h>
using namespace std;
int count(int n)
{
	int res=0;
	while(n!=0)
	{
		n=(n&(n-1));
		res++;
	}
	return res;
}
int main()
{
	int n=13;
	cout<<"The number os set bits in "<<n<<" is\n";
	cout<<count(n);
	return 0;
}
