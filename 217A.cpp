#include<bits/stdc++.h>
using namespace std;

int parent[100001];
int size[100001];

void init(int n)
{
	for(int i=1;i<=n;++i)
	{
		parent[i]=i;
		size[i]=1;
	}
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
	int n,i,j,k,m,t,x,y;
	cin>>n;
	init(n);
	int arr_x[n+1],arr_y[n+1];
	for(i=1;i<=n;++i)
	{
		cin>>arr_x[i]>>arr_y[i];
	}
	for(i=1;i<=n;++i)
	{
		for(j=i+1;j<=n;++j)
		{
			if(arr_y[i]==arr_y[j]||arr_x[i]==arr_x[j])
			{
				Union(i,j);
			}
		}
	}
	int count=0;
	for(i=1;i<=n;++i)
	{
		if(i==parent[i])
		{
			count++;
		}
	}
	cout<<count-1<<endl;
	return 0;
}
