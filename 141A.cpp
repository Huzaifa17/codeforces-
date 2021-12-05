#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n,i,j,k,m,t;
	char s1[150],s2[150],s[150];
	cin>>s1;
	cin>>s2;
	cin>>s;
	int arr[26]={0};
	for(i=0;s1[i]!='\0';++i)
	{
		arr[s1[i]-'A']++;
	}
	for(i=0;s2[i]!='\0';++i)
	{
		arr[s2[i]-'A']++;
	}
	for(i=0;s[i]!='\0';++i)
	{
		arr[s[i]-'A']--;
	}
	for(i=0;i<26;++i)
	{
		if(arr[i]!=0)
		{
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
	return 0;
}
