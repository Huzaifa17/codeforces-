#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n,i,j,k,m,t,a,b,c=0,x,y,z,sum=0,max2=0;
	int arr[3];
	cin>>n>>arr[0]>>arr[1]>>arr[2];
	sort(arr,arr+3);
	for(i=0;i<=4000;++i)
	{
		for(j=0;j<=4000;++j)
		{
			//xa=n-(yb+zc)
			//n-(yb+zc)=0(mod a)
			if((n-(arr[1]*j+arr[2]*i)>=0)&&(n-(arr[1]*j+arr[2]*i))%arr[0]==0)
			{
				sum=((n-(arr[1]*j+arr[2]*i))/arr[0])+i+j;
				//cout<<"i: "<<i<<" j: "<<j<<" k: "<<((n-(arr[1]*j+arr[2]*i))/arr[0])<<endl;
				max2=std::max(sum,max2);
			}
		}
	}
	cout<<max2<<endl;
	return 0;
}
