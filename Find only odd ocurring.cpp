#include<bits/stdc++.h>
using namespace std;
int Find(int a[],int n)
{
	int res=0;
	for(int i=0;i<n;i++)
	   res=res^a[i];
	return res;
}
int main()
{
	int a[]={4,3,4,4,4,5,5};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<"The odd ocurring element is "<<Find(a,n)<<"\n";
	return 0;
}
