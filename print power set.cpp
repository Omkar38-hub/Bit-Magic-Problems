#include<bits/stdc++.h>
using namespace std;

void powerSet(string str)
{
	int n=str.length();
	int powerSize=pow(2,n);
	for(int count=0;count<powerSize;count++)
	{
		for(int j=0;j<n;j++)
		{
			if((count&(1<<j))!=0)
			   cout<<str[j];
		}
		cout<<endl;
	}
}
int main()
{
	string str="abc";
	cout<<"The power set of given string "<<str<<"\n";
	powerSet(str);
	return 0;
}
