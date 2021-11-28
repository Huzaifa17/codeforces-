#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int no_1=0,no_0=0,n,i,q,j,k,m,t,tsk;
	cin>>n>>q;
	int arr[n],arr_sort[n];
	for(i=0;i<n;++i)
	{
		cin>>arr[i];
		arr_sort[i]=arr[i];
		if(arr[i]==0)
		{
			no_0++;
		}
		else
		{
			no_1++;
		}
	}
	//cout<<no_1<<" "<<no_0<<endl;
	sort(arr_sort,arr_sort+n,greater<>());
	//int qr[q],tsk[q];
	/*for(i=0;i<n;++i)
	{
		cout<<arr_sort[i]<<" ";
	}
	*/
	//cout<<endl;
	for(i=0;i<q;++i)
	{
		cin>>m>>tsk;
		if(m==1)
		{
			if(arr[tsk-1])
			{			
				arr_sort[no_1-1]=0;
				no_1--;
				no_0++;
				arr[tsk-1]=0;
			}
			else
			{
				arr_sort[no_1]=1;
				no_0--;
				no_1++;
				arr[tsk-1]=1;
			}
		}
		else
		{
			cout<<arr_sort[tsk-1]<<endl;
		}
	}
	return 0;
}
