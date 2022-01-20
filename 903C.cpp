#include<iostream>
#include<map>
#include<algorithm>
using namespace std;


int main()
{
	int i,j,k,n;
	map<int,int> m;
	map<int,int> :: iterator it,it2;
	cin>>n;
	for(i=0;i<n;++i)
	{
		cin>>k;
		m[k]++;
	}
	int sum=0,diff=0;
	it=m.begin();
	for(;it!=m.end();it++)
	{
		if(it->second>sum)
		{
			sum=it->second;
		}
	}
	cout<<sum<<endl;
	return 0;
}
