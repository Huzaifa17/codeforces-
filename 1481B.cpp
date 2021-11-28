#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n,i,j,k,m,t,c;
	cin>>t;
	for(i=0;i<t;++i)
	{
		cin>>n>>k;
		int arr[n],pos=0;
		m=1;
		c=0;
		for(j=0;j<n;++j)
		{
			cin>>arr[j];
		}
		for(m=1;m<=k;++m)
		{
			for(j=0;j<n;++j)
			{
				if(j==n-1)
				{
					c=1;
					break;
				}
				if(arr[j]>=arr[j+1])
				{
					continue;
				}
				else
				{
					arr[j]++;
					pos=j;
					//cout<<pos<<" "<<arr[j]<<endl;
					break;
				}
			}
			if(c==1)
			{
				break;
			}
		}
		if(c==1)
		{
			cout<<-1<<endl;
		}
		else
		{
			cout<<pos+1<<endl;
		}
	}
	return 0;
}
