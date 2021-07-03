#include<stdio.h>
int main()
{
    int i,j,k,count=0,max=0,pre=0;
    scanf("%d",&k);
    for(i=1;i<=k;i++){
        if(i!=1)
            pre=j;
        scanf("%d",&j);
        if(j>=pre){
            count++;
        }
        else if(j<pre){
            if(count>max)
                max=count;
            count=1;
        }
        if(i==k){
            if(count>max)
                max=count;
        }
    }
    printf("%d\n",max);
    return 0;
}
