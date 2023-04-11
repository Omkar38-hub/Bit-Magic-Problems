#include<bits/stdc++.h>
using namespace std;
int count(int n)
{
	int res=0;
	while(n!=0)
	{
		if(n%2!=0)
		 res++;
		n=n/2;
	}
	return res;
}
int main()
{
	int n=5;
	cout<<"The number os set bits in "<<n<<" is\n";
	cout<<count(n);
	return 0;
}
