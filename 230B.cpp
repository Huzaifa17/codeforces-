#include<bits/stdc++.h>
using namespace std;
int arr[1000001];
void sieve()
{
	long long int i,j,k;
	arr[2]=0;
	arr[1]=1;
	for( i=3;i<1000001;i+=2)
	{
		if(!arr[i])
		{
			for(j=i*i;j<1000001;j+=(2*i))
			{
				arr[j]=1;
			}
		}
	}
}
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n,i,j,k,m,t;
	sieve();
	//cin>>t;
		cin>>n;
		long long int arr2[n],r;
		for(j=0;j<n;++j)
		{
			cin>>arr2[j];
			r=sqrt(arr2[j]);
			if(((r*r)==arr2[j])&&(r==2||(r%2!=0&&arr[r]==0)))
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
