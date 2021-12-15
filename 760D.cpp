#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n,i,j,k,m,t,h,g;
	cin>>t;
	for(i=0;i<t;++i)
	{
		cin>>n>>k;
		std::vector<int> v;
		for(j=0;j<n;++j)
		{
			cin>>m;
			v.push_back(m);
		}
		sort(v.begin(),v.end());
		int sum=0;
		m=n-k-1;
		h=0,g=n-1;
		for(j=m;h<k;j--,g--,h++)
		{
			sum+=(v[j]/v[g]);
		}
		m=j+1;
		for(j=0;j<m;++j)
		{
			sum+=(v[j]);
		}
		cout<<sum<<endl;
	}
	return 0;
}
