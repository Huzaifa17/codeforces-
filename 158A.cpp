#include<stdio.h>
int main()
{
    int i,j,fixed,n,k,count=0;
    scanf("%d %d",&n,&k);
    int array[n];
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    fixed=array[k-1];
    for(i=0;((array[i]>=fixed)&&(array[i]>0)&&(i<n));i++){
        count++;
    }
    printf("%d\n",count);
    return 0;
}
