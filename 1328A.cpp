#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,r,i,j,k,m,t;
    cin>>t;
    for(i=0;i<t;++i)
    {
        cin>>n>>m;
        k=n%m;
        r=n/m;
        if(k>0)
        {
            r++;
        }
        n=((r*m)-n);
        cout<<n<<endl;
    }
    return 0;
}
