#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	long long int a,b,c,n,i,j,k,m,t;
	cin>>a>>b;
	c=a+b;
	string s1,s2;
	s1=to_string(a);
	s2=to_string(b);
	/*cout<<s1<<endl;
	cout<<s2<<endl;
	cout<<c<<endl;*/
	n=0,m=0;
	for(i=0;s1[i]!='\0';++i)
	{
		if(s1[i]=='0')
		{
			continue;
		}
		n=n*10+(s1[i]-'0');
	}
	for(i=0;s2[i]!='\0';++i)
	{
		if(s2[i]=='0')
		{
			continue;
		}
		m=m*10+(s2[i]-'0');
	}
	n=n+m;
	k=0;
	s1=to_string(c);
	for(i=0;s1[i]!='\0';++i)
	{
		if(s1[i]=='0')
		{
			continue;
		}
		k=k*10+(s1[i]-'0');
	}
	if(n==k)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}
