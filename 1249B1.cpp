#include<bits/stdc++.h>
using namespace std;

int parent[100001];
int size[100001];
int count2;
int tar;

void init(int n)
{
	for(int i=1;i<=n;++i)
	{
		cin>>parent[i];
	}
}

int find(int u)
{
	count2++;
	if(parent[u]==tar)
	{
		return count2;
	}
	return (find(parent[u]));
}

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n,i,j,k,m,t;
	cin>>t;
	for(i=0;i<t;++i)
	{
		cin>>n;
		init(n);
		for(j=1;j<=n;++j)
		{
			tar=j;
			count2=0;
			if(j==1)
			{
				cout<<find(j);
			}
			else
			{
				cout<<" "<<find(j);
			}
		}
		cout<<endl;
	}
	return 0;
}
