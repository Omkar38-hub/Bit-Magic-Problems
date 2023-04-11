#include<bits/stdc++.h>
using namespace std;

int checkBit(int pat,int a[],int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if((pat&a[i])==pat)
		  count++;
	}
	return count;
}
int maxAND(int a[],int n)
{
	int res=0,count;
	for(int bit=31;bit>=0;bit--)
	{
		count=checkBit((res|(1<<bit)),a,n);
		if(count>=2)
		 res=res|(1<<bit);
	}
	return res;
}
int main()
{
	int a[]={4,8,12,16};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<"The maximum AND value of pair is ";
	cout<<maxAND(a,n);
	return 0;
}
