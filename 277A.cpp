#include<bits/stdc++.h>
using namespace std;

int parent[100001];
int size[100001];
int present[101];

void init()
{
	for(int i=1;i<=100;++i)
	{
		parent[i]=i;
		size[i]=1;
	}
	return ;
}

int find(int u)
{
	if(parent[u]==u)
	{
		return u;
	}
	return parent[u]=find(parent[u]);
}

void Union(int u,int v)
{
	int p=find(u);
	int q=find(v);
	if(p!=q)
	{
		if(size[p]<size[q])
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
	int n,i,j,k,m,t,x,y,sum=0;
	cin>>n>>m;
	init();
	for(i=1;i<=n;++i)
	{
		//int sum=0;
		cin>>k;
		if(k==0)
		{
			sum++;
		}
		int c=0;
		for(j=1;j<=k;++j)
		{
			cin>>x;
			present[x]=1;
			if(c==1)
			{
				Union(x,y);
			}
			else
			{
				find(x);
			}
			y=x;
			c=1;
		}
	}
	int c=1;
	for(i=1;i<=n;++i)
	{
		if(parent[i]==i&&present[i]==1)
		{
			//cout<<parent[i]<<endl;
			sum++;
			c=0;
		}
	}
	cout<<sum-1+c<<endl;
	return 0;
}
