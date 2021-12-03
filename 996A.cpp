#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,i,j,k,m,t;
    cin>>n;
    int arr[5]={100,20,10,5,1};
    int sum=0;
    for(i=0;i<5;++i)
    {
        sum+=(n/arr[i]);
        n=n%arr[i];
    }
    cout<<sum<<endl;
    return 0;
}
