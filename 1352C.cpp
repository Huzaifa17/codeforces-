#include<bits/stdc++.h>
using namespace std;
long long int b_search(long long int n,long long int val)
{
	long long int i,j,k,l,r,mid;
	l=0,r=n*val;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(((mid/n)*(n-1))<val)
		{
			k=(mid/n);
			l=mid+1;
		}
		else
		{
			r=mid-1;
		}
	}
	i=val-(k*(n-1));
	k=k*n+i;
	return k;
}
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	long long int n,i,j,k,m,t;
	cin>>t;
	for(i=0;i<t;++i)
	{
		cin>>n>>k;
		m=b_search(n,k);
		cout<<m<<endl;
	}
	return 0;
}
