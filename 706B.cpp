#include<bits/stdc++.h>
using namespace std;
int b_search(int arr[],int n,int val)
{
	int pos=-1;
	int l,r,i,j,k,mid;
	l=0,r=n-1;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(arr[mid]<=val)
		{
			pos=mid;
			l=mid+1;
		}
		else
		{
			r=mid-1;
		}
	}
	//cout<<"yes"<<endl;
	return pos;
}
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n,i,j,k,m,t;
	cin>>n;
	int arr[n];
	for(i=0;i<n;++i)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	cin>>t;
	for(i=0;i<t;++i)
	{
		cin>>k;
		k=b_search(arr,n,k);
		//cout<<i<<endl;
		if(k==-1)
		{
			cout<<0<<endl;
		}
		else
		{
			cout<<k+1<<endl;
		}
	}
	return 0;
}
