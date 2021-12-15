#include<bits/stdc++.h>
using namespace std;

long long int gcd(long long int a,long long int b)
{
	if(b==0)
	{
		return a;
	}
	return gcd(b,a%b);
}


bool check(long long int arr[],long long int n,long long int d)
{
	long long int i,j,k,m;
	for(i=0;i<n;++i)
	{
		if(arr[i]%d==0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	long long int n,i,j,k,m,t;
	cin>>t;
	for(i=0;i<t;++i)
	{
		k=0;
		m=0;
		cin>>n;
		long long int d,odd,even;//arr,arr2
		if(n%2==0)
		{
			even=n/2;
			odd=n/2;
		}
		else
		{
			odd=n/2;
			even=(n/2)+1;
		}
		long long int arr[odd],arr2[even],d2=0,d1=0;
		for(j=0;j<n;++j)
		{
			if(j%2==0)
			{
				cin>>arr2[k];
				k++;
			}
			else
			{
				cin>>arr[m];
				m++;
			}
		}
		for(j=0;j<k;++j)
		{
			d2=gcd(arr2[j],d2);
		}
		for(j=0;j<m;++j)
		{
			d1=gcd(arr[j],d1);
		}
		//d=gcd(d1,d2);
		if(d1==d2)
		{
			cout<<0<<endl;
		}
		else
		{
			if(d1>d2)
			{
				d=d1;
				if(check(arr2,k,d))
				{
					cout<<d<<endl;
				}
				else if(check(arr,m,d2))
				{
					cout<<d2<<endl;
				}
				else
				{
					cout<<0<<endl;
				}
			}
			else
			{
				d=d2;
				if(check(arr,m,d))
				{
					cout<<d<<endl;
				}
				else if(check(arr2,k,d1))
				{
					cout<<d1<<endl;
				}
				else
				{
					cout<<0<<endl;
				}
			}
		}
	}
	return 0;
}
