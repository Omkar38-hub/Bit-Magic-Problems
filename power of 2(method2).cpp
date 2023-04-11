#include<bits/stdc++.h>
using namespace std;

bool ispower(int n)
{
	if(n==0)
	  return false;
	return ((n&(n-1))==0);
}
int main()
{
	int n=8;
	cout<<"The number "<<n<<" is power of 2 or not?\n";
	if(ispower(n))
	   cout<<"Yes\n";
	else
	   cout<<"NO\n";
	return 0;
}
