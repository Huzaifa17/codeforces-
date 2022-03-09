#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	long long int n,i,j,k,m,t;
	cin>>t;
	for(i=0;i<t;++i)
	{
		cin>>n;
		long long sum=0,cal;
		map<long long int,long long int> mp;
		map<long long int,long long int> :: iterator it;
		for(j=1;j<=n;++j)
		{
			cin>>k;
			mp[k-j]++;
		}
		for(it=mp.begin();it!=mp.end();++it)
		{
			cal=((it->second)*((it->second)-1))/2;
			sum+=cal;
		}
		cout<<sum<<endl;
	}
	return 0;
}
