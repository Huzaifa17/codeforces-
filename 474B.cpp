#include<bits/stdc++.h>
using namespace std;

int b_search(int arr[],int n,int p)
{
	int i,j,k,l,r,mid;
	l=0,r=n-1;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(p<=arr[mid])
		{
			r=mid-1;
			k=mid;
		}
		else
		{
			l=mid+1;
		}
	}
	return k+1;
}

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n,i,j,k,m,t;
	cin>>n;
	int arr[n];
	cin>>arr[0];
	for(i=1;i<n;++i)
	{
		cin>>k;
		arr[i]=arr[i-1]+k;
	}
	cin>>t;
	for(i=0;i<t;++i)
	{
		cin>>j;
		cout<<b_search(arr,n,j)<<endl;
	}
	return 0;
}
