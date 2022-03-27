#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n,i,j,k,m,t;
	cin>>t;
	for(i=0;i<t;++i)
	{
		cin>>n>>m>>k;
		int res=n/k;
		if(res>=m)
		{
			cout<<m<<endl;
		}
		else
		{
			int sec=m-res;
			k--;
			j=sec%k?1:0;
			//cout<<j<<endl;
			int thrd=min(res,((sec/k)+j));
			cout<<res-thrd<<endl;
		}
	}
	return 0;
}
