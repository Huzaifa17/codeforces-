#include<iostream>
#include<map>
#include<cstring>
using namespace std;

int main()
{
	int i,j,k,n,m;
	map<string,int> mp;
	map<string,int> ::iterator it;
	cin>>n;
	string s;
	for(i=0;i<n;++i)
	{
		cin>>s;
		mp[s]++;
		if(mp[s]>1)
		{
			cout<<s<<mp[s]-1<<endl;
		}
		else
		{
			cout<<"OK"<<endl;
		}
	}
	return 0;
}
