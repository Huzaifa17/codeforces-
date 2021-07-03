#include<stdio.h>
int main()
{
    int i,j,k,t;
    scanf("%d",&t);
    int array[t],array2[t];
    for(i=0;i<t;i++){
        scanf("%d",&array[i]);
        array2[array[i]-1]=i+1;
    }
    for(i=0;i<t;i++){
        if(i!=t-1)
            printf("%d ",array2[i]);
        else
            printf("%d\n",array2[i]);
    }
    return 0;
}
