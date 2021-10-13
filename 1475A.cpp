#include<bits/stdc++.h>
using namespace std;
bool fun(long long int n)
{
    if(n%2==1)
    {
        return 1;
    }
    long long int i,j;
    while (n%2==0)
    {
        /* code */
        n=n/2;
    }
    if(n>1)
    {
        return 1;
    }
    return 0;
}
int main()
{
    long long int i,j,k,n,m,t;
    cin>>t;
    for(i=0;i<t;++i)
    {
        cin>>n;
        if(fun(n))
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
