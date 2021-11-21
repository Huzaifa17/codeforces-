#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,m;
    string s;
    cin>>s;
    n=0,m=0;
    for(i=0;s[i]!='\0';++i)
    {
        if(s[i]=='a')
        {
            n++;
        }
        else
        {
            m++;
        }
    }
    if(m<n)
    {
        cout<<n+m<<endl;
    }
    else
    {
        cout<<(2*n)-1<<endl;
    }
    return 0;
}
