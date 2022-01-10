#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int i,j,k,n,m,t;
	cin>>t;
	for(i=0;i<t;++i)
	{
		cin>>n;
		int arr[n];
		for(j=0;j<n;++j)
		{
			cin>>arr[j];
		}
		int max1=*max_element(arr,arr+n);
		int min1=*min_element(arr,arr+n);
		cout<<max1-min1<<endl;
	}
	return 0;
}
