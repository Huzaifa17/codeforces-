#include<stdio.h>
int main()
{
    int i,j,k,n,t;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(array[i]>array[j]){
                k=array[i];
                array[i]=array[j];
                array[j]=k;
            }
        }
    }
    for(i=0;i<n;i++){
        if(i!=n-1)
            printf("%d ",array[i]);
        else
            printf("%d\n",array[i]);
    }
    return 0;
}
