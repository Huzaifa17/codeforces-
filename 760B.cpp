#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n,i,j,k,m,t,c;
	cin>>t;
	for(i=0;i<t;++i)
	{
		cin>>n;
		string s,s1,s2;
		cin>>s;
		k=0;
		s1=s;
		for(j=1;j<n-2;++j)
		{
			cin>>s2;
			if(s1[1]==s2[0])
			{
				s+=(s2[1]);
			}
			else
			{
				s+=(s2[0]);
				s+=(s2[1]);
				k=1;
			}
			s1=s2;
		}
		if(k==0)
		{
			s+="a";
		}
		cout<<s<<endl;
	}
	return 0;
}
