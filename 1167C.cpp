#include<bits/stdc++.h>
using namespace std;

long long int parent[500001];
long long int size[500001];
//long long int cost[500001];


void init(long long int n)
{
	for(int i=1;i<=n;++i)
	{
		parent[i]=i;
		size[i]=1;
	}
}

long long int find(long long int u)
{
	if(u==parent[u])
	{
		return u;
	}

	return parent[u]=find(parent[u]);
}

void Union(long long int u,long long int v)
{
	long long int p=find(u);
	long long int q=find(v);
	if(p!=q)
	{
		if(size[p]<size[q]&&size[p]>=0)
		{
			swap(p,q);
		}
		parent[q]=p;
		size[p]+=size[q];
	}
	return ;
}


int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	long long int n,i,j,k,m,t,x,y;
	cin>>n>>m;
	init(n);
	// here write code
	for(i=1;i<=m;++i)
	{
		cin>>k;
		for(j=1;j<=k;++j)
		{
			cin>>x;
			if(k==1)
			{
				break;
			}
			if(j>1)
			{
				Union(x,y);
			}
			y=x;
		}
	}
	for(i=1;i<=n;++i)
	{
		if(i==1)
		{
			cout<<size[find(i)];
		}
		else
		{
			cout<<" "<<size[find(i)];
		}
	}
	cout<<endl;
	return 0;
}
