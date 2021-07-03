#include<stdio.h>
int main()
{
    int i,j,k,t,tar,sum=0;
    scanf("%d",&t);
    int array[t];
    for(i=0;i<t;i++){
        scanf("%d",&array[i]);
        sum=sum+array[i];
    }
    tar=sum/2;
    for(i=0;i<t;i++){
        for(j=i+1;j<t;j++){
            if(array[i]<array[j]){
                k=array[j];
                array[j]=array[i];
                array[i]=k;
            }
        }
    }
    sum=0;
    for(i=0;sum<=tar;i++){
        sum=sum+array[i];
    }
    printf("%d\n",i);
    return 0;
}
