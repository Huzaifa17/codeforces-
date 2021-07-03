#include<stdio.h>
int main()
{
    int i,j,t,count=0,k;
    scanf("%d %d",&t,&j);
    for(i=0;i<t;i++){
        scanf("%d",&k);
        if(k>j)
            count=count+2;
        else
            count++;
    }
    printf("%d\n",count);
    return 0;
}
