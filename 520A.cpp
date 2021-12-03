#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,i,j,k,m,t;
    cin>>n;
    char s[n+500];
    cin>>s;
    int arr[26]={0};
    for(i=0;s[i]!='\0';++i)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            arr[s[i]-'a']++;
        }
        else if(s[i]>='A'&&s[i]<='Z')
        {
            arr[s[i]-'A']++;
        }
    }
    for(i=0;i<26;++i)
    {
        if(arr[i]==0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
