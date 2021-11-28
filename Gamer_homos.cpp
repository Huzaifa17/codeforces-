#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n,i,j,k,m,t,f1,s2,sum,h;
	cin>>t;
	for(i=0;i<t;++i)
	{
		cin>>n>>h;
		int arr[n];
		for(j=0;j<n;++j)
		{
			cin>>arr[j];
		}
		sort(arr,arr+n,greater<>());
		//sum=arr[0]+arr[1];
		sum=h/(arr[0]+arr[1]);
		sum*=2;
		k=h%(arr[0]+arr[1]);
		if(k==0)
		{
			sum;
		}
		else if(k<=arr[0])
		{
			sum++;
		}
		else
		{
			sum+=2;
		}
		cout<<sum<<endl;
	}
	return 0;
}
