#include<iostream>
#include<map>
#include<string>
using namespace std;


int main()
{
	int i,j,k,n,m;
	map<string,int> mp;
	cin>>n;
	//char s[150];
	string s;
	for(i=0;i<n;++i)
	{
		cin>>s;
		mp[s]++;
		if(mp[s]>1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
