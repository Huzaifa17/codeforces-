#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int i,j,k,n,m,t;
	cin>>t;
	for(j=0;j<t;++j)
	{
		cin>>n;
		int arr[n];
		int f[n+1]={0};
		for(i=0;i<n;++i)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		for(i=0;i<n;++i)
		{
			while(arr[i]!=0)
			{
				if(arr[i]>=1&&arr[i]<=n)
				{
					if(f[arr[i]]!=0)
					{
						arr[i]/=2;
						continue;
					}
					f[arr[i]]++;
					break;
				}
				arr[i]/=2;
			}
		}
		int c=0;
		for(i=1;i<=n;++i)
		{
			if(f[i]!=1)
			{
				c=1;
				break;
			}
		}
		if(c==0)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
