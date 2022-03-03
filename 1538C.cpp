#include<bits/stdc++.h>
using namespace std;


long long bs(long long arr[],long long i,long long ri,long long left_val,long long right_val)
{
    long long j,k,mid,n,m,l,sum,save_upp=-1,save_low=-1,k1=0,k2=0,r=ri,save;
    l=i+1;
    /*cout<<"i: "<<i<<endl;
    cout<<"l: "<<l<<endl;
    cout<<"r: "<<r<<endl;*/
    while(l<=r)
    {
        mid=l+((r-l)/2);
        sum=arr[i]+arr[mid];
        if(sum<=right_val)
        {
           // cout<<"HHH"<<endl;
            save_upp=mid;
            l=mid+1;
            k1=1;
        }
        else
        {
            r=mid-1;
        }
    }
    //cout<<"save up: "<<save_upp<<endl;
    l=i+1;
    r=ri;
    while(l<=r)
    {
        mid=l+((r-l)/2);
        sum=arr[i]+arr[mid];
        if(left_val<=sum)
        {
            //cout<<"HHH"<<endl;
            save_low=mid;
            r=mid-1;
            k2=1;
        }
        else
        {
            l=mid+1;
        }
    }
  //  cout<<"save low: "<<save_low<<endl;
    if(k1==1&&k2==1)
    {
        save=save_upp-save_low+1;
        //cout<<"save: "<<save<<endl;
        return save;
    } 
    //cout<<"save: "<<save<<endl;
    return 0;
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    long long int n,i,j,k,m,t,l,r,sum;
    cin>>t;
    for(i=0;i<t;++i)
    {
        cin>>n>>l>>r;
        long long arr[n];
        sum=0;
        for(j=0;j<n;++j)
        {
            cin>>arr[j];
        }
        sort(arr,arr+n);
        for(j=0;j<n-1;++j)
        {
            sum+=bs(arr,j,n-1,l,r);
            //cout<<sum<<endl;
        }
        cout<<sum<<endl;
    }
    return 0;
}
