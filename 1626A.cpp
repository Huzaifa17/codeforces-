#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n,i,j,k,m,t;
	string s;
	cin>>t;
	for(i=0;i<t;++i)
	{
		cin>>s;
		int arr[26]={0};
		for(j=0;s[j]!='\0';++j)
		{
			arr[s[j]-'a']++;
		}
		for(j=0;j<26;++j)
		{
			if(arr[j]==1)
			{
				cout<<(char)(j+'a');
			}
			else if(arr[j]==2)
			{
				cout<<(char)(j+'a')<<(char)(j+'a');
				//j++;
			}
		}
		cout<<endl;
	}
	return 0;
}
