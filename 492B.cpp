#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,i,j,k,m,t;
    cin>>n>>m;
    int arr[n];
    for(i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    double max=arr[0],diff;
    for(i=1;i<n;++i)
    {
        diff=((double)(arr[i]-arr[i-1]))/2.00;
        if(diff>max)
        {
            max=diff;
        }
    }
    diff=((double)m)-arr[n-1];
        if(diff>max)
        {
            max=diff;
        }
    cout<<fixed<<setprecision(10)<<max<<endl;
    return 0;
}
