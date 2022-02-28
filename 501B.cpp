#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n,i,j,k,m,t;
	unordered_map<string,int> mp;
	unordered_map<string,int> :: iterator it;
	unordered_map<string,string> set;
	unordered_map<string,string> :: iterator it2;
	cin>>n;
	//int max;
	j=1;
	std::vector<string> v1;
	//std::vector<string> v2;
	for(i=1;i<=n;++i)
	{
		string s1,s2;
		cin>>s1>>s2;
		if(mp[s1]==0)
		{
			set[s1]=s2;
			mp[s1]=j;
			mp[s2]=j;
			j++;
			v1.push_back(s1);
			//v2.push_back(s2);
		}
		else
		{
			mp[s2]=mp[s1];
			set[v1[mp[s1]-1]]=s2;
		}
	}
	cout<<j-1<<endl;
	for(it2=set.begin();it2!=set.end();++it2)
	{
		cout<<it2->first<<" "<<it2->second<<endl;
	}
	return 0;
}
