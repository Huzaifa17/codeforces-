#include<stdio.h>
int main()
{
    int i,j,k,count=0,t;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&j,&k);
        if((k-j)>=2)
            count++;
    }
    printf("%d\n",count);
    return 0;
}
