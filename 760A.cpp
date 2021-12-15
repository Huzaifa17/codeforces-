#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	long long int n,i,j,k,m,t;
	cin>>t;
	for(i=0;i<t;++i)
	{
	int arr[7];
	for(j=0;j<7;++j)
	{
		cin>>arr[j];
	}
	int a,b,c;
	c=arr[6]-arr[5];
	a=arr[4]-c;
	b=arr[5]-a;
	cout<<a<<" "<<b<<" "<<c<<endl;
}
	return 0;
}
