#include<stdio.h>
int main()
{
    int i,j,t,fixed,count=0;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&j);
        if(i==0){
            fixed=j;
        }
        else{
            if(j!=fixed){
                count++;
                fixed=j;
            }
        }
        if(i==t-1){
            if(fixed!=j)
                count++;
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
