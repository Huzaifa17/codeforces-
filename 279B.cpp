#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k=0,n,m,t;
    cin>>n>>t;
    int arr[n];
    for(i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    int sum=0,ans=0;
    for(i=0;i<n;++i)
    {
        while(k<n&&sum+arr[k]<=t)
        {
            sum+=arr[k];
            k++;
        }
        if((k-i)>ans)
        {
            ans=k-i;
        }
        sum-=arr[i];
    }
    cout<<ans<<endl;
    return 0;
}
