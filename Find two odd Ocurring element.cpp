#include<bits/stdc++.h>
using namespace std;

void Find(int a[],int n)
{
	int dummy=0,res1=0,res2=0;
	for(int i=0;i<n;i++)
	   dummy=dummy^a[i];
	int so=dummy&(~(dummy-1));
	for(int i=0;i<n;i++)
	{
		if((a[i]&so)!=0)
		  res1=res1^a[i];
		else
		  res2=res2^a[i];
	}
	cout<<res1<<" and "<<res2<<"\n";
}
int main()
{
	int a[]={3,4,3,4,8,4,4,32,7,7};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<"The two odd occurring elements are\n";
	Find(a,n);
	return 0;
}
